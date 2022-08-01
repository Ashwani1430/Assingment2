//Assume price of 1 USD is INR 76.23. Write a program to take the amount in INR and convert it into USD.
main()
{
    float n,u;
    printf("Enter amount In INR : ");
    scanf("%f",&n);
    u = 0.013*n;
    printf("Amount In USD = %f $",u);
    getch();
}
