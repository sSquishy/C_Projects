#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct node 						
{
    int data;
    struct node *link;
};

typedef struct node newn;

struct node *head = NULL;


void createList()
{
    struct node *curr = NULL;
    struct node *tail = NULL;

    curr = (struct node *)malloc(sizeof(struct node));

    printf("\nEnter value: ");
    scanf("%d", &curr -> data);

    while(curr -> data != 0)
    {
        if(head == NULL)
        {
            head = curr;
            head -> link;
            tail = curr;
        }
        else
        {
            tail -> link = curr;
            curr -> link = NULL;
            tail = curr;
        }

        curr = (struct node *)malloc(sizeof(struct node));
        
        printf("Enter value: ");
        scanf("%d", &curr -> data);
    }
}

void computeList()
{
	int sum = 0;
    struct node *ptr = NULL;

    if(head == NULL)
        printf("\nError no linked list!\n");
    else
    {
        ptr = head;

        while(ptr != NULL)
        {
            sum = sum + ptr -> data;
            ptr = ptr -> link;
        }
    
        printf("\nSum of Linked List: %d", sum);
    }
    
}

void dispHighVal()
{
    struct node *ptr = NULL;
    int max;
    
    if(head == NULL)
        printf("\nLink List is empty\n");
    else
    {
        ptr = head;
        max = ptr -> data;

        while(ptr != NULL)
        {
            if(max < ptr -> data)
                max = ptr -> data;
            ptr = ptr -> link;
        }
        printf("\nMaximum Number: %d\n", max);
    }
        
}

void dispLowVal()
{
    struct node *ptr = NULL;
    int min;
    
    if(head == NULL)
        printf("\nLink List is empty\n");
    else
    {
        ptr = head;
        min = ptr -> data;

        while(ptr != NULL)
        {
            if(min > ptr -> data)
                min = ptr -> data;
            ptr = ptr -> link;
        }
        printf("\nMinimum Number: %d\n", min);
    }
}

void dispOddNums()
{
    struct node *ptr = NULL;

    if(head == NULL)
        printf("\nLink List is empty\n");
    else
    {
        ptr = head;
        
        printf("The odd numbers are: ");
        while (ptr != NULL)
        {
            if(ptr -> data %2 == 1)
                printf("%3d", ptr -> data);
            ptr = ptr -> link;
        }
        
    }

}

void dispEvenNums()
{
    struct node *ptr = NULL;

    if(head == NULL)
        printf("\nLink List is empty\n");
    else
    {
        ptr = head;
        
        printf("The even numbers are: ");
        while (ptr != NULL)
        {
            if(ptr -> data %2 == 0)
                printf("%3d", ptr -> data);
            ptr = ptr -> link;
        }
        
    }

}

main()				
{
    char ch;												//Initializer list
    int temp = 1;

    while(temp == 1)										//Printing
    {
        printf("\n\t\tMAIN MENU\n");

        printf("\nA. Enter linked list values\n");
        printf("B. Compute and display sum of values\n");
        printf("C. Display highest value\n");
        printf("D. Display lowest value\n");
        printf("E. Display odd numbers\n");
        printf("F. Display even numbers\n");
        printf("G. Exit\n");

        printf("\nSYSTEM PROMPT: ");
        scanf("\n");
        scanf("%c", &ch);

        switch(ch)										//Switch case 
        {
        case 'A':
            createList();
            break;
        case 'B':
            computeList();
            break;
        case 'C':
            dispHighVal();
            break;
        case 'D':
            dispLowVal();
            break;
        case 'E':
            dispOddNums();
            break;
        case 'F':
            dispEvenNums();
            break;
        case 'G':
            temp = 0;
            break;
        default:
            break;
        }

    }


    return 0;
}
