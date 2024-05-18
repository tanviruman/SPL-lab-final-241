#include<stdio.h>
int main()
{

int result=fact(5);
printf("result=%d",result);

}

int fact(int n){


if (n==1)
return 1;
else
return n*fact(n-1);


}

