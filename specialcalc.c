#include<stdio.h>
int add(int a,int b)
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
int div(int a,int b)
{
    return a/b;
}
int main()
{
    int a,b,ch,result;
    printf("Enter two numbers:");
    scanf("%d %d",&a,&b);
    int (*op[4])(int, int);
    op[0]=add;
    op[1]=sub;
    op[2]=mul;
    op[3]=div;
    printf("Enter 0 for add, 1 for sub, 2 for mul, 3 for div: ");
    scanf("%d",&ch);
    result = op[ch](a,b);
    printf("Result: %d",result);

}