

#include<stdio.h>
 void main()
 {
 	int a[5],i,j,k,found=0;
   
   printf("enter the array element");
   
   
    for(j=0;j<5;j++)
    {
    	scanf("%d",&a[i]);
    	}
	printf("enter the key element");
	scanf("%d",&k);
	for(i=0;i<5;i++)
	{
		if(a[i]==k);
		{
			found=found+1;
		}
	}
	printf("the total key element is %d",found);
	
	
	
 }
 