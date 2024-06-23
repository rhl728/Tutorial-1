#include<stdio.h>
#define size 3

typedef struct{
    int year;
    int month;
    int date;
}date;

typedef struct{
    char name[size];
    float salary;
    date jdate;
}emp;

void input(emp e[])
{
    int i;
    for(i=0;i<size;i++)
    {

        printf("\nEnter the employee name:");
        scanf("%s",e[i].name);
        printf("\nEnter the employee salary:");
        scanf("%f",&e[i].salary);
        printf("\nEnter the employee joined date(year,month,date):");
        scanf("%d%d%d",&e[i].jdate.year,&e[i].jdate.month,&e[i].jdate.date);

    }
}

void calculate(emp e[])
{
    int i;

    for(i=0;i<size;i++)
    {


    if(e[i].salary<=10000)
    {
        e[i].salary=e[i].salary+e[i].salary*0.15;
    }
    else if(e[i].salary>10000 &&e[i].salary<=30000)
    {
       e[i].salary=e[i].salary+e[i].salary*0.10;
    }
    else{
        e[i].salary=e[i].salary*1;
    }
    }

}

void output(emp e[])
{
    int i;
    for(i=0;i<size;i++)
    {
    printf("\n\nName: %s",e[i].name);
    printf("\n\nsalary %.2f:",e[i].salary);
    printf("\n\nDate joined:%d_%d_%d",e[i].jdate.year,e[i].jdate.month,e[i].jdate.date);
    }
}


void main()
{
    emp e[size];

    input(e);
    calculate(e);
    output(e);

}
