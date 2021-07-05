#include <stdio.h>
#include<stdbool.h>
int findsingle(int n,int couple[]){
        int single;
     for(int i = 0; i < n; i++) 
     {
         if(couple[i] != -1)
         {
            bool isduplicatefound=false;
            for(int j = i+1; j < n; j++) 
            {
                if(couple[i] == couple[j])
                {
                    couple[i]=-1;
                    couple[j]=-1;
                    isduplicatefound=true;
                    break;
                }
            }
            if(isduplicatefound == false)
            {
                single=couple[i];
            } 
        }
    }


return single;
}
int main()
{
    int couple[]={1,1,2,2,3,3,4,4,5,5,6,6,7,7,10};
    int size = sizeof(couple) / sizeof(int);
    int single=findsingle(size,couple);
    printf("%d\n",single);
    return 0;
}
