#include<stdio.h>
int main(){
  int a;
  scanf("%d",&a);
  int i,j;
  for (i=1;i<=a;i++){
    for (j=1;j<=i;j++){
      printf("%d",j);
    }
    printf("\n");
  }
}