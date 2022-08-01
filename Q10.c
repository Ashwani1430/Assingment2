//Write a program to make the last digit of a number stored in a variable as zero. (Example - if x=2345 then make it x=2340)
main()
{
    int n;
    char c = '0';
    printf("Enter a number : ");
    scanf("%d",&n);
    n=n/10;
    printf("New Number is %d%c",n,c);
    getch();
}
