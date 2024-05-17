
#include<stdio.h>

struct person
{
  int age;
  float salary;
};

int main()
{
 struct person person1;
 printf("Enter age:");
 scanf("%d",&person1.age);


 printf("Enter salary:");
 scanf("%f",&person1.salary);


 printf("Age=%d\n",person1.age);
printf("Salary=%f",person1.salary);
}