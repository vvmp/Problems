#include<stdio.h>
int main(){
    int child=19;
    int group[8]={1,6,3,4,5,14,57,6};
    int dad,mom;
     for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            if(i != j){
                if(group[i] + group[j] == child)
                {
                    printf("%d %d",group[i],group[j]);
                    return 0;
                }
            }
        }
    }
    return 0;
}