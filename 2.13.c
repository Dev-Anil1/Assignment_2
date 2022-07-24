int main()
{
    int a=123,b;
    b=a%10;
    a=a/10;
    a=b*100+a;
    printf("%d",a);
    getch();
    return 0;
}
