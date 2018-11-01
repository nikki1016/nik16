clear;
image1=imread('Earth.jpg');
m=[1 1 1; 1 -8 1; 1 1 1];
f1=imfilter(image1,m);
r=image1-f1;
subplot(2,2,1);
imshow(image1);
subplot(2,2,2);
imshow( f1, [] ); title('Laplacian filtered with scaling');
subplot(2,2,3);
imshow( f1 ); title('Laplacian filtered without scaling');
subplot(2,2,4);
imshow(r);