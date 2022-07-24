int main()
{
    int x=6,count=0,result=0;
    //printf("Enter value");
    //scanf("%d",&x);

    result=x&1;
    count++;
    if(result == 1)
    {
        printf("%d",count);
    }
    x=x>>1;

     result=x&1;
    count++;
    if(result == 1)
    {
        printf("%d",count);
    }
    x=x>>1;


    getch();
    return(0);
}
