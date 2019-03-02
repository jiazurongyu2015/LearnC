# include <stdio.h>
//gcc lengthStr.c -o lengthStr

int main(void){
    printf("sizof(a123)=%u\n",(unsigned)sizeof("a123")); //字符串尾部都会增加1个 null 转换为\0
    printf("sizof(AB\tCD)=%u\n",(unsigned)sizeof("AB\tCD"));//6 
    printf("sizof(0xff)=%u\n",(unsigned)sizeof("0xff")); //5
    return 0;
}