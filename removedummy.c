#include <stdio.h>
int main() 
{
int arr[]={1,2,8,10,30,40,40,40,50,50};
const int size=sizeof(arr)/sizeof(int);
int index=1;
int i=0;
while(i < size-1)
{
    for(int j=i+1;j<size;j++)
    {
        if(arr[i] != arr[j])
        {
            arr[index]=arr[j];
            index++;
             i=j;
            break;
        }
        else
        {
             i=j;
        }
    }
}
 for(int k=0;k<size;k++)
    {
        printf("%d\t",arr[k]);
    }
}
