%%%%%%%%%%%%%%%%%%%SixthSense Botz%%%%%%%%%%%%%%%%%%%%
% This is simple Code to get started with matlab
% take some input from the keyboard, have simple calculation
% and display back the answers

q=input('What is your name?\n','s');                     %inputs your name
w=input('Enter your weight in kg\n');                 % inputs your weight
e=input('Enter your height in meters\n');              %inputs your height
a=w/(e^2);                                            %calculates your BMI
disp (q);                                %displays your name on the screen
disp 'your body mass index is:';
disp (a);                                   %displays your body mass index
% comparing result with the standard BMI and displaying the result
% on the screen
if (a<18.5)
   disp 'You Are UnderWeight';
else if (a>=25)
    disp('You are OverWeight');
else if (a>18.5 && a<25)
    disp('You are NormalWeight');
        end;
    end;
end;
%%%%%%%%%%%%%%%%%%%%%%%%%%%%end of program%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%%%%%%%%%%%%%%%%%%%%%try something of your own%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%CHEERS%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%%%%%%%%%%%%%%%%%%%%%%%%regards ARK Technosolutions%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
