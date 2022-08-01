//WAP to print the sum of three digits numbers
main()
{
    int n,i=0,r=0;
    printf("Enter a three digit number : ");
    scanf("%d",&n);
    while(i<=n)
    {
        r=n%10+r;
        n=n/10;
        i++;
    }
    printf("Sum of three digits %d ",r);
    getch();
}
