i
%%%%%%%%%%%%%%%%%%%SixthSense Botz%%%%%%%%%%%%%%%%%%%%
% this is code to recognize red color
 q=rgb2ycbcr(image);
 k=q(:,:,3)>175 & q(:,:,3)<190;
 d=imfill(k,'holes');
 se=strel('disk',5);
 w=imerode(d,se);
 %imshow(w);
 %%%%%%%%%%%%%%%%%%%%%%%%%%%%end of program%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%%%%%%%%%%%%%%%%%%%%%try for diff. color's%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%CHEERS%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%%%%%%%%%%%%%%%%%%%%%%%%regards ARK Technosolutions%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%