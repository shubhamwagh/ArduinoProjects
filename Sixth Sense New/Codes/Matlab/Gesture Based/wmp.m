clear all;
clc % Clearing Matlab desktop
vid=videoinput('winvideo',1,'YUY2_640x480');% Defining the video input object
preview(vid);
set(vid,'FramesPerTrigger',1); % Setting frames per trigger
rgb_image = getsnapshot(vid); % Storing Image in an array variable
[a b c]= size(rgb_image); % Determining the size of the captured frame.
y=a;
x=b;
% Defining Boundaries
x1=x/2-250;
x2=x/2+250;
y1=y/2-200;
y2=y/2+200;
fig1=figure;
mp=actxcontrol('WMPlayer.ocx.7');
media = mp.newMedia('C:\Users\Public\Music\Sample Music\Kalimba.mp3'); % Create Media object
mp.CurrentMedia = media;
mp.Controls.pause;
count=0;
while(1)
rgb_image = getsnapshot(vid); % storing image in an array variable
%flushdata(vid); %Flushing the buffer
image=ycbcr2rgb(rgb_image);
rbar=0;
cbar=0;
e=0;
fR=image(:,:,1);fG=image(:,:,2);fB=image(:,:,3);% Storing RGB components of the image in seperate arrays
% I=((fR<=30) & (fG<=30) & (fB>=30)); % Converting the RGB Image into binary image///Detecting only the red component
 I=fG>51;

% Following are the steps For Detecting the red ball
se=strel('disk',5);
B=imopen(I,se);
final=imclose(B,se);
[L,n]=bwlabel(final);
imshow(L);

for k=1:n
[r,c]=find(L==k);
rbar=mean(r);
cbar=mean(c);
plot(cbar,rbar,'Marker','*','MarkerEdgeColor','B' ,'MarkerSize',20) %////THIS IS TO BE USED ONLY WHILE TESTING
e=(((cbar>=x1)*2*2*2) + ((cbar<=x2)*2*2) + ((rbar>=y1)*2) + (rbar<=y2)); % Converting to decimal number
end
disp(e);
if(e>10)
   
% Decision Making Conditions

switch (count)

case 0
disp('Play Song');
mp.Controls.play;
pause(2);
count=1;
case 1
disp('Stop Song');
mp.Controls.pause;
pause(2)
count=0;
otherwise
    disp(e);
end
end
end
%fclose(ser); % closing 