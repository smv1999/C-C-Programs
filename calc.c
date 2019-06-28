#include<stdio.h>
#include<stdlib.h>
int main()
{
  int add(int ,int);
  int sub(int ,int);
  int mul(int,int);
  int divide(int,int);
  int ch,a,b,result;
  char c='y';
  printf("CALCULATOR");
  printf("***********\n");
  printf("1. Addition 2. Subtraction 3. Multiplication 4. Division 5. Exit\n");
  scanf("%d",&ch);
  while (c=='y') {
    /* code */
    printf("Enter the first number:\n");
    scanf("%d",&a);
    printf("Enter the second number:\n");
    scanf("%d",&b);
  switch (ch) {
    case 1:
        printf("%d\n",add(a,b));
        break;
    case 2:
        printf("%d\n",sub(a,b));
        break;
    case 3:
        // mul(a,b);
        break;
    case 4:
        // div(a,b);
        break;
    case 5:
       printf("Exit!!!\n");
  }
  printf("Do you wanna continue?(y/n):");
  scanf("\n%c",&c);
  }
  return 0;
}
int add(int a, int b)
{
  return a+b;
}
int sub(int a,int b)
{
return a-b;
}
int mul(int a,int b)
{
  return a*b;
}
