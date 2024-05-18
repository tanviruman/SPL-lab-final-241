
#include<stdio.h>
int fibo(int n){

if(n<=1){

    return n;
}

else{
  return  fibo(n-1)+fibo(n-2);
}
}





int main(){

int terms ;
printf("Enter terms:");
scanf("%d",&terms);


  printf("Fibonacci Series up to %d terms: ", terms);

displayfibo(terms);
}

void displayfibo(int n)
{
for(int i=0;i<n;i++)
{
    printf("%d",fibo(i));
}

}

