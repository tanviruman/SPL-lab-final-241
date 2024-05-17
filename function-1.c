#include<stdio.h>

int add(int a, int b){
return a+b;
}

int main ()
{
printf("Enter two integer value:");
int x,y;
scanf("%d %d ",&x,&y);
int newadd = add(x,y);
printf("sum= %d",newadd);

}
