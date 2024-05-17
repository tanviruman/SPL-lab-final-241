#include<stdio.h>

struct person
{
  int age;
  float salary;
};

int main()
{


 struct person person1;
  struct person person2 = {34,666.89};
 printf("Enter age:");
 scanf("%d",&person1.age);


 printf("Enter salary:");
 scanf("%f",&person1.salary);
person1 =person2;

 printf("Age1=%d\n",person1.age);
printf("Salary1=%f\n",person1.salary);

printf("Age2=%d\n",person2.age);
printf("Salary2=%f\n",person2.salary);


}

