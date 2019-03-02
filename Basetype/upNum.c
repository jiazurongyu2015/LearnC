#include <stdio.h>

void upNum(int *height){  //传入&chenziang,取地址后进行解构
    if(*height <180){
        *height =180;
    }
}

void sum_diff(int n1,int n2,int sum,int diff){
  sum =n1+n2;
  diff =(n1>n2)?n1-n2:n2-n1;
}


int main(void){
    int cc =177;
    upNum(&cc); //取内存地址丢到upHeight函数内部去解
    printf("cc的属性%d\n",cc);
    int a1,a2;//这里有解地址所有不用赋予初始值
    int s=0; //这个要赋予
    int d=0;
    
    puts("请输入两个整数");
    printf("输入第一个整数:"); scanf("%d",&a1);
    printf("输入第二个整数:"); scanf("%d",&a2);
    sum_diff(a1,a2,s,d);
    printf("两数之和:%d,两数之差:%d \n",s,d);  
    return 0;
}