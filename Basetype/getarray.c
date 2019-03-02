#include <stdio.h>
#include <string.h>

int main(void){

   int array[5]={0,1,2,3,4};
   int *p =array;
   int *p1 = &array[0];
   printf("(p)内存地址:%p\n",p);
   printf("(p1)内存地址:%p\n",p1);
   char *a ="abc";
   char *a1 ="abc";
   if(a=a1){
     printf("a,a1相等\n");
   }
   printf("结果等于：%d",strcmp(a,a1)==0); //等于1
    
  int i;
  for(i=0;i<5;i++){
    printf("&array[%d] =%p p+%d =%p\n",i,&array[i],i,p+i);
  }

for(int t =10;t>0;t--){
  printf("t = %d\n",t);
}
  return 0;

}
