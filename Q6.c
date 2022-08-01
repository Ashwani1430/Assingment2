//WAP to check whether a given number is even or odd
main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    if(n!=0&&(n%2)==0)
    {
        printf("Even");
    }
    else
        printf("Odd");
    getch();
}
