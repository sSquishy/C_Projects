#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

	struct node
	{ 
		struct node *prev; // another pointer variable to a node designated as prev
		int x;
		struct node *next;
		
		
	};
	
	
	
		struct node *head, *curr, *tail;

	void createList()
	{
		head=curr=tail=NULL;
 		// allocate a node
 		curr = (struct node *) malloc(sizeof(struct node));
 		printf("\nEnter a value for x: ");
 		scanf("\t%d", &curr->x);
		 
				while(curr->x != 0)
 				{ 
		 			if (head == NULL)
						{ 
							head = curr;
 							head->prev = NULL; //head->prev is also assigned the value NULL
 							head->next = NULL;
 							tail = curr;
						}
 						else
						{ 
							tail->next = curr;
							curr->prev = tail;
							curr->next = NULL;
							tail = curr;
 						}
 						
						curr = (struct node *) malloc(sizeof(struct node));
 						printf("Enter a value for x: ");
 						scanf("%d", &curr->x);
 						
						if (head == NULL)
 						{ 
							printf("No record/s entered!");
 							printf("\n\nLinked list data:\n\n");
 							curr = head;
 							while (curr != NULL)
 						{ 
							printf("%3d", curr->x);
							curr = curr->next;
 						}
 						}
 				}
	}

	void displayNormOrd()
	{	
		struct node * curr;
    	int n = 1;
    	
			if(head == NULL)
    		{
    			printf("No data found in the list yet.");
    		}
   			else
    		{
        		curr = head;
        		printf("\n\nNORMAL ORDER:\n");
 
        		while(curr != NULL)
        		{
            		printf("Node %d: %d\n", n, curr->x);
            		n++;
            		curr = curr->next;
    			}
    		}
		}
		
	void displayRevOrd()
		{
			struct node * curr;
    		int n = 0;
			
			if(tail == NULL)
    		{
        		printf("No data found in the list yet.");
    		}
    		else
    		{
        		curr = tail;
        		printf("\nREVERSE ORDER:\n");
        
				while(curr != NULL)
        		{				
            		printf("Node %d: %d\n", n+1, curr->x);
            		n++;
            		curr = curr->prev;
        		}
    		}
		}
	
	/* function to display linked list elements after being sorted */
	void displaySortedList() 
	{
		struct node * curr;
		int n = 1;
		
		if(head == NULL) {
			printf("No data found in the list yet.");
		} 
		else 
		{
			curr = head;
			printf("\n\nSORTED LIST ELEMENTS:\n");
			
			while(curr != NULL) 
				{
				printf("Node %d: %d\n", n, curr->x);
				n++;
				curr = curr->next;
			    }
		}
	}

	/* function to swap data of two nodes a and b*/
	void swap(struct node *a, struct node *b) 
	{
	    int temp = a->x;
	    a->x = b->x;
	    b->x = temp;
	}	

	void sortListAscendingOrder(struct node *node) 
	{
	    int swapped, i;
	    struct node *ptr1;
	    struct node *lptr = NULL;
	
	    /* Checking for empty list, do just return and do nothing*/
	
	    if(node == NULL)
	        return;
	
	    // if node list is not empty, run thru list of nodes
	    do {
	        swapped = 0;
	        ptr1 = node;
	
	        // loop as long as ptr1->next is not null
	        while(ptr1->next != lptr) {
	          // check if ptr1 x value is greater than ptr1 next x value
	            if(ptr1->x > ptr1->next->x) {
	              // call swap function
	                swap(ptr1, ptr1->next);
	                swapped = 1;
	            }
	            ptr1 = ptr1->next;
	        }
	        lptr = ptr1;
	    }
	    while(swapped);
	
	    // display sorted list in ascending order
	    displaySortedList();
	}

	
	void sortListDescendingOrder(struct node *node) {
    int swapped, i;
    struct node *ptr1;
    struct node *lptr = NULL;

    /* Checking for empty list, if it is, then return */

    if(node == NULL)
        return;

    // loop thru list
    do {
        swapped = 0;
        ptr1 = node;

        // loop until ptr1 is not equal to null
        while(ptr1->next != lptr) {
          // check if ptr1 x value is less than ptr1 next x value
            if(ptr1->x < ptr1->next->x) {
              // call swap function
                swap(ptr1, ptr1->next);
                swapped = 1;
            }
            ptr1 = ptr1->next;
        }
        lptr = ptr1;
    }
    while(swapped);
    // display sorted list in descending order
    displaySortedList();
	}

	void insert()
	{
        struct node *comp;

		sortListAscendingOrder(head);
		comp = (struct node *) malloc(sizeof(struct node));
		
		printf("Enter a value to insert: ");
		scanf("%d ", &comp->x);

        //if the node to be inserted is less that or equal to head
        if (comp->x <= head->x)
        {
            curr = comp;
            head->prev = curr;
            curr->next = head;
            curr = head;
        }
        //if the node to be inserted is greater than or equal to tail
        else if (comp->x >= tail->x)
        {
            curr = comp;
            tail->next = curr;
            curr->prev = tail;
            curr = tail;
        }
        
	}




main()													//MAIN
{
	
    int ch;												//Initializer list
    int temp = 1;
	int order;
	int main;
	
	printf("\n\t\tMENU\n");
	printf("\n[1] Create a Doubly Linked List");
	printf("\n[7] Exit");
	
	
	printf("\nEnter Choice: ");
	scanf("%d", &main);
	
	switch(main)
	{
		case 1:
			createList();
			
			while(temp == 1)
	    	{
				
				
	        	printf("\n\t\tMAIN MENU\n");
	
	        	printf("\n[1] Create a Doubly Linked List");
	        	printf("\n[2] Display a Doubly Linked List");
	        	printf("\n[3] Sort a Doubly Linked List");
	        	printf("\n[4] Insert Node");
	        	printf("\n[5] Delete Node");
	        	printf("\n[6] Search a Number in the List");
	        	printf("\n[7] Exit");
	
	        	printf("\nEnter Choice: ");
	        	scanf("\n");
	        	scanf("%d", &ch);
			
	        	switch(ch)										//Switch case for main menu
	        	{
	        		case 1:
	            		createList();
	            		break;
	        
					case 2:
	        			printf("\n\t\t[1] Normal Order ");
	        			printf("\n\t\t[2] Reverse Order");
	        			printf("\n\t\nEnter Choice: ");
	        			scanf("%d", &order);
	        		
						switch(order)
	        			{
	        				case 1:
	            				displayNormOrd();            			
							break;
							
							case 2: 
								displayRevOrd();						
							break;
							
							default:
								printf("\nInvalid choice!\n");
							break; 
						}
	            		break;
	        		case 3:
	            		//Sorting();
						// prompt user to choose type of sorting
						
						printf("\nSort Doubly Linked List:\n");
						printf("1. Ascending\n");
						printf("2. Descending\n");
						printf("\nEnter Choice: ");
						scanf("%d", &order);
						switch(order) 
						{
							case 1:
						    	// display list elements in ascending order
						    	sortListAscendingOrder(head);
						    	
						    break;
						
							case 2:
						    	// display list elements in descending order
						    	sortListDescendingOrder(head);
						    	
						    break;
						
							default:
						    	printf("\nInvalid choice!\n");
						    	
						    break;
					    } 
	            		break;
	            		
	        		case 4:
	            	insert();
	            		break;
	        		case 5:
	           		//Delete();
	            		break;
	       			 case 6:
	            	//search();
	            		break;
	        		case 7:
	    				temp = 0;
	            		break;
	        			default:
	            		break;
	        		}
			}
			break;
		case 7:
			temp = 0;
	        break;
	    default:
	    	printf("\nInvalid choice!\n");
	    break;
	}
    return 0;
}



