#include<stdio.h>

typedef struct{
	int inch;
	int feet;
}distance;

void main()
{
	distance dis1,dis2,tot;
	void input(distance *dis1);
	distance calculate(distance dis1,distance dis2,distance *tot);
	void output(distance tot);

	input(&dis1);
	input(&dis2);
	calculate(dis1,dis2,&tot);
	output(tot);
}

void input(distance *dis1)
{
	printf("Enter the distance (inch):");
	scanf("%d",&dis1->inch);
	printf("Enter the distance (feet):");
	scanf("%d",&dis1->feet);
}



distance calculate(distance dis1,distance dis2,distance *tot)
{
	tot->feet=(dis1.inch+dis2.inch)/12;
	tot->feet=tot->feet+(dis1.feet+dis2.feet);
	tot->inch=(dis1.inch+dis2.inch)%12;
}

void output(distance tot)
{
	printf("\n\nTotal distance is %d feet & %d inches.\n\n",tot.feet,tot.inch);
}
