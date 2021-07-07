#include <stdio.h>
int main(){
int arr[]={1,5,100,10,90};
int max=0;
max=arr[0];
for(int i=0;i<5;i++)
{
	if(max < arr[i])
	{
	    max=arr[i];
	}
}
printf("%d",max);
}