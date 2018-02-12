f1=rgb2hsv(image);
k=f1(:,:,3)<.2;
f=imfill(k,'holes');
se=strel('disk',10);
e=imerode(f,se);
[stat num]=bwlabelie;