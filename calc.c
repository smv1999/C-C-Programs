#include<stdio.h>
#include<stdlib.h>

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
int divide(int a,int b)
{
  if(b==0){
    printf("Error! Can't Divide by Zero!");
  }
  else
  return a/b;
}
int main()
{
  int ch,a,b,result;
  char c='y';
  printf("CALCULATOR\n");
  printf("***********\n");

  while (c=='y') {
    /* code */
    printf("1. Addition 2. Subtraction 3. Multiplication 4. Division 5. Exit\n");
    printf("Enter Your Choice:");
    scanf("%d",&ch);
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
        printf("%d\n",mul(a,b));
        break;
    case 4:
        printf("%d\n",divide(a,b));
        break;
    case 5:
       printf("Exit!!!\n");
    default:
        printf("Invalid Input!!!");
  }
  printf("Do you wanna continue?(y/n):");
  scanf("\n%c",&c);
  }
  return 0;
}
