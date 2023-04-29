#include<stdio.h>
#include<stdlib.h>

//creating a node.
struct node
{
    int data;
    struct node *next;
};

// for priting.
void printing(struct node *head)
{
    struct node *ptr=head;
    do
    {
        printf("%d\n",ptr -> data);
        ptr=ptr-> next;
    }while(ptr!=head);
}

int main()
{
    struct node *head;
    struct node *second;
    struct node *third;

    //allocation
    head= (struct node *)malloc (sizeof(struct node));
    second= (struct node *)malloc (sizeof(struct node));
    third= (struct node *)malloc (sizeof(struct node));

    head -> data = 1;
    head -> next = second;

    second -> data = 2;
    second -> next = third;

    third -> data = 3;
    third -> next = head;
    
    printing(second);
    return 0;
}