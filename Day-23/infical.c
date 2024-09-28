#include<stdio.h>

int calc(int x,int y,char z);

void main()
{
    int a,b,c;
    c=0;

    while(c<1 || c>4)
    {   
        printf("1. Addition\n");
        printf("2. Substraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");

        printf("Please Select Operation :- ");
        scanf("%d",&c);

        printf("Enter the First Number :- ");
        scanf("%d",&a);

        printf("Enter the Second Number :- ");
        scanf("%d",&b);


        if(c>=1 && c<=4)
        {
            int sum = calc(a,b,c);
            printf("Operation of Two Numbers is :- %d\n",sum);
        }
        else
        {
            printf("Please Choose Correct Option..\n");
        }
    }

}

int calc(int x,int y,char z)
{
    switch(z)
    {
        case 1:
        return x+y;
        break;

        case 2:
        return x-y;
        break;

        case 3:
        return x*y;
        break;

        case 4:
        return x/y;
        break;

    }
}