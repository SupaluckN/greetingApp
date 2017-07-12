 /* greeting.c
  Version 0.1
  Written by Supaluck Singjan
  */

#include<stdio.h>

void Hello(void){
    printf("\n --- HELLO --- \n");
    printf("\n --- MY --- \n");
    printf("\n --- NAME --- \n");
    printf("\n --- IS --- \n");
}

void myName(void){
    printf("\n --- SUPALUCK --- \n");
    printf("\n --- SINGJAN --- \n");
}


main() {
  int i,j;

  for(i=1;i<=3;i++){
    Hello();
    printf("\n");
    myName();

    for(j=1;j<=3;j++){
      printf("\n");
    }
  }

}
