clear all;
clc % Clearing Matlab desktop
vid=videoinput('winvideo',1,'YUY2_640x480'); % Defining the video input object
set(vid,'FramesPerTrigger',1);
preview(vid); %////// Showing the video of the moving Ball(TO BE USED %
% WHILE TESTING)
% pause(10);% Waiting for a certain time for the system to get initialised
rgb_image = getsnapshot(vid); % Storing Image in an array variable
[a b c]= size(rgb_image); % Determining the size of the captured frame.
y=a;
x=b;

% Defining Boundaries
x1=x/2-120;
x2=x/2+120;
y1=y/2-30;
y2=y/2+30;% Defining the specified COM Port to be used
ser=serial('COM21');
fopen(ser); % starting serial Communication,opening serial port
pause(10);
%fwrite(ser,'S');
%pause(5);
%fwrite(ser,'S');
while(1)
    rgb_image = getsnapshot(vid); % storing image in an array variable
    % flushdata(vid); %Flushing the buffer
    image=ycbcr2rgb(rgb_image);
    rbar=0;
    cbar=0;
    e=0;
    fR=image(:,:,1);
    fG=image(:,:,2);
    fB=image(:,:,3);% Storing RGB components of the image in seperate arrays
    % I=((fR<=30) & (fG<=30) & (fB>=30)); % Converting the RGB Image into binary image///Detecting only the red component
    %I=fR>200;
    I= fR>50;
    
    % Following are the steps For Detecting the red ball
    se=strel('disk',5);
    B=imopen(I,se);
    final=imclose(B,se);
    [L,n]=bwlabel(final);
    imshow(L);
    %imshow(rgb_image); %////THIS IS TO BE USED ONLY WHILE TESTING
    %hold on % ////THIS IS TO BE USED ONLY WHILE TESTING
    for k=1:n
        [r,c]=find(L==k);
        rbar=mean(r);
        cbar=mean(c);
        %plot(cbar,rbar,'Marker','*','MarkerEdgeColor','B' ,'MarkerSize',20) %////THIS IS TO BE USED ONLY WHILE TESTING
        e=(((cbar>=x1)*2*2*2) + ((cbar<=x2)*2*2) + ((rbar>=y1)*2) + (rbar<=y2)); % Converting to decimal number
    end
    % Decision Making Conditions
    switch (e)
        case 5
            disp('Move left');
           fwrite(ser,'L');
        case 6
            disp('Move left');
             fwrite(ser,'L');
        case 7
            disp('Move left');
             fwrite(ser,'L');
        case 9
            disp('Move right');
             fwrite(ser,'R');
        case 10
            disp('Move right');
             fwrite(ser,'R');
        case 11
            disp('Move right');
             fwrite(ser,'R');
        case 13
            disp('Move forward');
             fwrite(ser,'F');
        case 14
            disp('Move back');
             fwrite(ser,'B');
        otherwise
            disp('Stop Moving');
             fwrite(ser,'S');
    end
end
%fclose(ser); % closing