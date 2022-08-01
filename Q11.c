//Write a program to input a number from the user and also input a digit. Append a digit in the number and print the resulting number.
//(Example - number=234 and digit=9 then the resulting number is 2349)
main()
{
    int num,n;
    printf("Enter a number : ");
    scanf("%d",&num);
    printf("Enter a digit for append in the number : ");
    scanf("%d",&n);
    printf("Resulting Number is %d%d",num,n);
    getch();
}
