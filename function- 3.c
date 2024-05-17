
#include <stdio.h>

int multiply(int a, int b) {
    return a * b;
}

int main() {
   int a ,b;
   scanf("%d%d",&a,&b);
    int product = multiply(a, b);
    printf("The product is: %d\n", product);

    return 0;
}
