#include<stdio.h>

void main(){
  int *p = malloc(sizeof(int));
  *p = 5;
  free(p);
  printf("%d\n",*p);
}
