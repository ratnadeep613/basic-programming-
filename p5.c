#include<stdio.h>
int main()
{
	int arr[5],n=5,i,key;
	int l,h,m;
	
	printf("Enter 5 no of elements:");
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	printf("Enter elements to search :");
	scanf("%d",&key);
	l=0;
	h=n-1;
	while (l<=h){
		m=(l+h)/2;
		if(arr[m]==key){
			printf("element found at position %d",m);
			break;
			
		}
		else if(key<arr[m])
		
			h=m-1;
		
		else
			l=m+1;
		}
	    if(l>h)
	    printf("Element not found");
	    return 0;
		
	}
