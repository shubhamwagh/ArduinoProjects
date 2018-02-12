 m=figure;
 h=actxcontrol('MediaPlayer.MediaPlayer.1',[0 0 300 300], m);
 set(h, 'filename', 'D:\Adhoore.mp3');
 v=invoke(h, 'stop');
 