#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
  int num;
  int sum =0;
  srand((unsigned int)time(NULL));
  printf("Rolling dice. . .\n");
  for(int i=0;i<2;i++){
    num = rand()%6+1;
    printf("Die %d: %d\n",i+1,num);
    sum+=num;
  }
  printf("Total value: %d\n",sum);

  if(sum>7)
    printf("You won\n");
  else printf("You lost\n");

  return 0;
}
