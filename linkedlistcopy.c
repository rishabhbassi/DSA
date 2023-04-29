#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

void printing(struct node *ptr)
{
    while(ptr!=NULL)
    {
        printf("element: %d\n",ptr->data);
        ptr=ptr->next;
    }
    
}

void counting(struct node *head)
{
    struct node *p=head;
    int count=0;
    while(p!=NULL)
    {
        p=p->next;
        count++;
    }
    printf("number of nodes is %d",count);
}

struct node *insertatstart(struct node *head, int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    
    ptr->next=head;
    ptr->data=data;
    return ptr;
}

struct node *insertatend(struct node *head, int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data=data;
    struct node *p=head;

    while(p->next!=NULL)
    {
        p=p->next;
    }
    p->next=ptr;
    ptr->next=NULL;
    return head;
}


struct node *insertatindex(struct node *head, int data, int index)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    int i=0;
    ptr->data=data;
    struct node *p=head;

    while(i!=(index-1))
    {
        p=p->next;
        i++;
    }
    ptr->next=p->next;
    p->next=ptr;

    return head;

}


int main()
{
   struct node *head;
   struct node *second;
   struct node *third;

   head=(struct node *)malloc(sizeof(struct node));
   second=(struct node *)malloc(sizeof(struct node));
   third=(struct node *)malloc(sizeof(struct node));

   head->data=1;
   head->next=second;

   second->data=2;
   second->next=third;

   third->data=3;
   third->next=NULL;

   printing(head);

   printf("\nnew\n \n");

   //head=insertatstart(head,12);
   head=insertatend(head,13);

   printing(head);
   //head=insertatindex(head,14,1);
   //printing(head);
   //counting(head);

}
