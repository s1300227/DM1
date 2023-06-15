#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
  int num,sum=0;  
  srand((unsigned int)time(NULL));
  printf("Rolling dice. . .\n");
  for(int i=0;i<2;i++){
    num = rand()%6+1;
    printf("Die %d: %d\n",i+1,num);
    sum+=num;
  }
  printf("Total value: %d\n",sum);
}
