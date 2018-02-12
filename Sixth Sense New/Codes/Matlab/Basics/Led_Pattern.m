
%%%%%%%%%%%%%%%%%%%SixthSense Botz%%%%%%%%%%%%%%%%%%%%
% this is code to generate LED patterns
while(1)

    fwrite(s,'S');
    fwrite(s,'1');
    pause(0.1);
    fwrite(s,'S');
    fwrite(s,'2');
    pause(0.1);
    fwrite(s,'S');
    fwrite(s,'3');
    pause(0.1);
    fwrite(s,'S');
    fwrite(s,'4');
    pause(0.1);
    fwrite(s,'S');
    fwrite(s,'5');
    pause(0.1);
    fwrite(s,'S');
    fwrite(s,'5');
    pause(0.1);
    fwrite(s,'S');
    fwrite(s,'4');
    pause(0.1);
    fwrite(s,'S');
    fwrite(s,'3');
    pause(0.1);
    fwrite(s,'S');
    fwrite(s,'2');
    pause(0.1);
    fwrite(s,'S');
    fwrite(s,'1');
    pause(0.1);
    fwrite(s,'S');
    pause(0.5);
    
    
    for i=0:4
    
        fwrite(s,'1');
        fwrite(s,'2');
        fwrite(s,'3');
        fwrite(s,'4');
        fwrite(s,'5');
        pause(0.5);
        fwrite(s,'S');
        pause(0.5);
    end

end
%%%%%%%%%%%%%%%%%%%%%%%%%%%%end of program%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%%%%%%%%%%%%%%%%%%%%%try something of your own%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%CHEERS%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%%%%%%%%%%%%%%%%%%%%%%%%regards ARK Technosolutions%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%