//Wap to swap two number without using third variable
main()
{
    int a =10, b=20;
    printf("Numbers are : a = %d, b = %d\n",a,b);
    a = a+b;
    b = a-b;
    a = a-b;
    printf("After swapping : a = %d, b = %d",a,b);
    getch();
}
