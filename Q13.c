//Write a program to take a three-digit number from the user and rotate its digits by one position towards the right.
main()
{
    int num,r,n,a;
    printf("Enter a number : ");
    scanf("%d",&num);
    r=num%10;
    num=num/10;
    r=r*100+num;
    printf("After one bit right sift = %d",r);
    getch();

}
