// Program to calculate the speed of a vehicle

# include <stdio.h>

main()

{
    int a,b;
    float c;

    a=b=c=0;

    printf("\n");
    printf(" Enter Distance in meters: ");
    scanf("%d",&a);
    printf("\n");
    printf(" Enter Time in seconds: ");
    scanf("%d",&b);

    c = a / b;

    printf("\n");
    printf(" Speed is : %.2f m/s",c);

    printf("\n");
    getch();
}
