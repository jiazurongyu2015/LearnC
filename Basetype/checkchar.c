#include <stdio.h>
#include <limits.h>

int main(void){
	
  double x=216;
  printf("double数据类型长度:%ld",sizeof(x));  //ld 是format long类型
  printf("这个编译器中的char型是");
  if(CHAR_MIN){
    puts("有符号的");
  }else
    puts("无符号的");
}