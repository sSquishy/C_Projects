#include<stdio.h>
#include<conio.h>
#include<malloc.h> 

struct node
{
	int x;
	struct node *next;
};

struct node *p1, *p2, *p3;

main()
{
	p1 = (struct node*)malloc(sizeof(node));
	p2 = (struct node*)malloc(sizeof(node));
	p3 = (struct node*)malloc(sizeof(node));
	p1->x=123;
	p1->next = NULL;
	p2->x=456;
	p2->next = NULL;
	p3-> x = 789;
	p3->next=NULL;
	p1->x=p3->x-p2->x;
	printf("%4d%4d%4d\n", p1->x, p2->x, p3->x);
	p1->next = p2;
	p2->next = p3;
	p3->next = p1;
	p3->x = p2 -> x;
	p2=p1;
	p1=p2->next;
	printf("%4d%4d%4d\n", p1->x, p2->x, p3->x);
	p1->next->x=123;
	p2->next->x=p3->x;
	p3=p2;
	printf("%4d%4d%4d\n", p1->x, p2->x, p3->x);
	return 0;
	
	
	
	
	
	
}

