#include<stdio.h>
int main()
{
    int a,b,s;
    printf("Enter two values");
    scanf("%d%d",&a,&b);
    s=a;
    a=b;
    b=s;
    printf("%d,%d",a,b);
    getch();
    return(0);
}
