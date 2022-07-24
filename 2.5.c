int main()
{
    int x=128,a,s=0;
    a=x%10;
    x=x/10;
    s=s+a;

    a=x%10;
    x=x/10;
    s=s+a;

    a=x%10;
    x=x/10;
    s=s+a;

    printf("sum is %d",s);
    getch();
    return(0);
}
