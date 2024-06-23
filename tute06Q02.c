#include<stdio.h>

typedef struct{
    char brand[10];
    int qty;
    float price;
}soap;

void input(soap saban[],int *size)
{
    int count=0;
    char ch;
   while(1)
   {
   printf("\nEnter the brand name:");
   scanf("%s",saban[count].brand);
   printf("\nEnter the quantity:");
   scanf("%d",&saban[count].qty);
   printf("\nEnter the price:");
   scanf("%f",&saban[count].price);

   count++;
   *size=count;

   printf("\n\n***To terminate type N***\nTo continue type any key!***\n\n");
   scanf(" %c",&ch);

   if(ch == 'N')
    {break;
    }
   }
}

void output(soap saban[],int size)
{   int i;
    printf("\nNumber of brands : %d",size);

   for(i=0;i<size;i++)
   {
       printf("\nBrand code: %s",saban[i].brand);
       printf("\nTotal Value: %.2f",saban[i].price*saban[i].qty);
   }
}

void main()
{
    soap saban[10];
    int size;
    void input(soap saban[],int *size);

    input(saban,&size);
    output(saban,size);

}
