
#include<stdio.h>
int main()
{
int start,end,i;
printf("enter start:");
scanf("%d",&start);
printf("enter end:");
scanf("%d",&end);
for(int i=start;i<end+1;i++)
{

if(is_superprime(i))printf("%d\n",i);
}

}

int is_prime(int n){
if (n<=1)
{
    return 0;}
    for( int i=2;i*i<=n;i++)
{

    if(n%i==0){
        return 0;

  }

  else
{
    return 1;
}

}

}

int digit_sum(unsigned int x){

if(x==0){
    return 0;
}
else{

return x % 10 + digit_sum(x/10);

}

}
int is_superprime(int x){

    return is_prime(x)&& is_prime(digit_sum(x));
}
