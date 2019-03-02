#include <stdio.h>

double avgInt(int a,int b){
    //return (a>b)?(a-b)/2:(b-a)/2;
    return (double)(a+b)/2;
}

int main(void){
  int a,b;
  puts("输入二个整数");
  printf("输入第一个整数:");scanf("%d",&a);
  printf("输入第二个整数:");scanf("%d",&b);
  printf("平均值是%.1f",avgInt(a,b));
  return 0;
}