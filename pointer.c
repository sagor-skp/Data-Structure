#include<stdio.h>
int main()
{
   int a[]={1,2,3,4};
   int *p;
   p=a;
   printf("%p\n",a); 
   printf("%p\n",p);
   printf("%p\n",&a[0]+1);
   printf("%p\n",a+1);
   printf("%p\n",&a+1);
   printf("%d\n",*a);
   printf("%d\n",*a+1);
   printf("%d\n",*(a+1));
   for(int i=0;i<4;i++){
    printf("%d\n",a[i]);
   }
   for(int i=0;i<4;i++){
    printf("%d\n",*(p+i));
   }
   
}