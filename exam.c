#include<stdio.h>
typedef struct{
 char type[25];
 int year;
 int price;
 int newp;
}vehicle;


void input(vehicle b[],int *count)
{
    int i=0;
    *count=0;
    char ch;

    while(1)
    {
        printf("\nEnter the vehicle type:");
        scanf("%s",b[i].type);
        printf("\nEnter the manufactured year:");
        scanf("%d",&b[i].year);
        printf("\nEnter the vehicle price:");
        scanf("%d",&b[i].price);

        *count = *count+ 1;
        i++;


        printf("\n\nWant stop? To terminate 'N' To continue Any key :");
        scanf(" %c",&ch);
        if(ch=='N')

            {break;}


    }


}

void calculate(vehicle b[],int count)
{
    int i=0;

    while(i<count)
    {
        if(b[i].price<10000)
        {
          b[i].newp=b[i].price+b[i].price*0.1;
        }
        else if(b[i].price>=10000 && b[i].price<15000)
        {
           b[i].newp=(b[i].price+b[i].price*0.1)+(b[i].price+b[i].price*0.1)*0.02;
        }
        else{
            b[i].newp=(b[i].price+b[i].price*0.1)+(b[i].price+b[i].price*0.1)*0.03;
        }
      i++;
    }
}

void output(vehicle b[],int count)
{
    int i=0;
    printf("\n\n\ncount= %d",count);
    while(i<count)
    {
        printf("\n\nVehicle type; %s",b[i].type);
        printf("\nManufactured year: %d",b[i].year);
        printf("\nOld Price: %d",b[i].price);
        printf("\nNew Price: %d",b[i].newp);

      i++;
    }


}

void main()
{
    vehicle b[50];
    int count;


    input(b,&count);
    calculate(b,count);
    output(b,count);


}
