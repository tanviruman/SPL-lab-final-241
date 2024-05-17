#include<stdio.h>
int main()
{
int x= 5;
int y= 10;
int *p;
p=&x;
printf("Value of x: %d\n",x);
printf("Adress of x: %d\n",&x);
printf("Adress of p: %d\n",p);
printf("content of p: %d\n",*p);
printf("Adress of p: %d\n",&p);
return 0;
}

