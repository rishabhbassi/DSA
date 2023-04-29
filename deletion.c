#include<stdio.h>
#include<stdlib.h>

//creating a node.
struct node{
    int data;
    struct node *next;
};

// for priting.
void printing(struct node *ptr)
{
    while(ptr!=NULL)
    {
        printf("%d\n",ptr -> data);
        ptr=ptr-> next;
    }
}

struct node *deleteatfirst(struct node *head)
{
    struct node *ptr=head;
    head=head->next;
    free(ptr);
    return head;
}

struct node *deleteatend(struct node *head)
{
    struct node *p=head;
    struct node *q=head->next;


    while(q->next!=NULL)
    {
        p=p->next;
        q=q->next;
    }
    p->next=NULL;
    free(q);
    return head;
}

struct node *deleteatindex(struct node *head,int index)
{
    struct node *p=head;
    struct node *q=head->next;
    int i=0;
    while(i!=(index-1))
    {
        p=p->next;
        q=q->next;
        i++;
    }
    p->next=q->next;
    free(q);

    return head;
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
    third -> next = NULL;

    int num;
    printf("1. delete at start. ");
    printf("2. delete at end. ");
    printf("3. delete at index. ");

    scanf("%d",&num);
w

    
    printing(head);

    printf("\n new \n");
    head=deleteatindex(head,1);
    
    printing(head);

    return 0;

}