%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%SixthSense Botz%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%This is the code for Color Recognition Application.
%it detects red and green color and NUMBER of such color object in the
%image, accordingly it turns on the LED'S on the SixthSense Botz board.
%the board has 3 red led's and 2 green.
%for example if u show 2 red color fingers and 2 green then this code will
%turn on 2red led and 2green on the board and so on.... Have Fun
Video_Init();               %initialise video input
Serial_Init();              %initialise serial port
i=getsnapshot(video);       %get a image from the video
black();                      %recognize red blobs
if num==1                    %if number of blobs is one glow one led
    fwrite(s,'1');
else if num==2               %if number of blobs is two, glow 2 leds
        fwrite(s,'1');
        fwrite(s,'2');
    else if num==0           %if no red blobs, dont glow any red led
            fwrite(s,'S');
        else                %if number of blobs is 3 or more grow all three leds
            fwrite(s,'1');
            fwrite(s,'2');
            fwrite(s,'3');
        end;
    end;
end;
green();                    %recognize green blobs
if num==1                    %if number of blobs is one glow one led
    fwrite(s,'4');
    else if num==0           %if no blobs, dont glow any green led
            fwrite(s,'S');
        else                %if number of blobs is 2 or more grow both leds
            fwrite(s,'4');
            fwrite(s,'5');
        end;
end;

%%%%%%%%%%%%%%%%%%%%%%%%%%%%end of program%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%%%%%%%%%%%%%%%%%%%%%try something of your own%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%CHEERS%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%%%%%%%%%%%%%%%%%%%%%%%%regards ARK Technosolutions%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
