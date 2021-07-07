#include <stdio.h>
int calcmaxprofit(int size ,int stocks[])
{
    int max=0;
    for(int i=0;i < size-1;i++)
    {
      for(int j=i+1;j < size;j++)
      {
         int profit=stocks[j] - stocks[i];
          if(profit>0)
          {
            if(max < profit)
            {
                max=profit;
            }
          }
      }
    }
    return max;
}
int main() 
{
  int stock[]={10,5,1,1,1};
  int size=sizeof(stock) / sizeof(int);
  int profit=calcmaxprofit(size,stock);
  printf("%d\n",profit);  
  return 0;
}
