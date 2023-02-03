
//Q1. Write a program to insert a node in a linked list.
#include <stdio.h>
#include <stdlib.h>



struct node {
    int data;         
    struct node *next; 
}*head;


void createList(int n);
void insertNode(int data);
void displayList();


int main()
{
    int n, data;

    printf("Enter the total number of nodes: ");
    scanf("%d", &n);
    createList(n);

    printf("\nData in the list \n");
    displayList();

   
    printf("\nEnter insert  ");
    scanf("%d", &data);
    insertNode(data);

    printf("\n[after]Data in the list \n");
    displayList();

    return 0;
}



void createList(int n)
{
    struct node *newNode, *temp;
    int data, i;

    head = (struct node *)malloc(sizeof(struct node)); // malloc() -> memory allocation.

   
    if(head == NULL)
    {
        printf("Unable to allocate memory.");
    }
    else
    {
        
        printf("Enter the data of node 1: ");
        scanf("%d", &data);

        head->data = data; 
        head->next = NULL; 

        temp = head;

       
        for(i=2; i<=n; i++)
        {
            newNode = (struct node *)malloc(sizeof(struct node));

        
            if(newNode == NULL)
            {
                printf("Unable ");
                break;
            }
            else
            {
                printf("Enter the data of node %d: ", i);
                scanf("%d", &data);

                newNode->data = data; 
                newNode->next = NULL; 

                temp->next = newNode; 
                
                temp = temp->next; 
            }
        }

        printf("SINGLY LINKED LIST CREATED \n");
    }
}

void insertNode(int data)
{
    struct node *newNode;

    newNode = (struct node*)malloc(sizeof(struct node));

    if(newNode == NULL)
    {
        printf("Unable .");
    }
    else
    {
        newNode->data = data; 
        newNode->next = head; 

        head = newNode;          

        printf("DATA INSERTED ");
    }
}

void displayList()
{
    struct node *temp;

   
    if(head == NULL)
    {
        printf("List is empty.");
    }
    else
    {
        temp = head;
        while(temp != NULL)
        {
            printf("Data  %d\n", temp->data); 
            temp = temp->next;                 
        }
    }
}
