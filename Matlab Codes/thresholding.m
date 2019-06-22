sam = imread('sample.jpg');
k = imfinfo('sample.jpg');
for i=1:k.Height
		for j=1:k.Width
			if(sam(i,j,1)>130&&sam(i,j,2)<120&&sam(i,j,3)<30)
				s(i,j) = 1;
			else
				s(i,j) = 0;
			end
		end
end
s1 = bwareaopen(s,10);	
se = strel('disk',4);		
s2 = imclose(s1,se);	
s3 = imfill(s2,'holes');	
imshow(s);	//replace s with s1,s2 or s3 to see the change.