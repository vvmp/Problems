#include<stdio.h>
int main(){
    int couple[N]={1, 4, 7, 3, 2, 1, 4, 3,2};
    int pos[N];
    int count=0;
     for (int i = 0; i < N; i++) {
  for (int j = i+1; j < N; j++) {
    if(couple[i] == couple[j]){
         pos[i]=i;
         pos[j]=j;
         count=count +2;
    }
  }
}
    return 0;
}