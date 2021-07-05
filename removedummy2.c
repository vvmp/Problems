#include<stdio.h>
int main()
{
    int arr[]={1,2,8,10,30,40,40,40,50,50 };
    const int size=sizeof(arr)/sizeof(int);
    int i=0;
    int currentvalue=arr[i];
    int j=1;
    while(j < size)
    {
        if (currentvalue != arr[j])
        {
        	i++;
        	arr[i] =arr[j];
            currentvalue=arr[i];	
        }
        j++; 
    }
    for(int k=0;k<size;k++){
        printf("%d\t",arr[k]);
   }
}