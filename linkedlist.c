#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

void print(struct node *head)
{
    struct node *p=head;
    while(p!=NULL)
    {
        printf("%d\n",p->data);
        p=p->next;
    }
}

struct node *insertion(struct node *head,int data)
{
    struct node *p=head;
    p=(struct node *)malloc(sizeof(struct node));
    p->data=data;
    p->next=head;

    return p;
    
}

struct node *insertatend(struct node *head,int data)
{
    struct node *p=head;
    struct node *q;
    q=(struct node *)malloc(sizeof(struct node));
    while(p->next!=NULL)
    {
        p=p->next;
    }
    p->next=q;
    q->next=NULL;
    q->data=data;

    return q;
}

/*void insert()
{
    int c;
    printf("1. at beginning\n");
    printf("2.at index\n");
    printf("3. at end\n");
    printf("\n");

    scanf("%d",&c);
    printf("\n"); 

    int de;
    printf("enter data\n");
    scanf("%d",&de);
    struct node*head;
    switch(c)
    {
        case 1 : head=insertion(head,de);
        print(head);
        break;
    }
}

void delete()
{
    int d;
    printf("1. at beginning\n");
    printf("2.at index\n");
    printf("3. at end\n");
    printf("\n");

    scanf("%d",&d);
    printf("\n");
}
*/
int main()
{
    struct node *head;
    struct node *second;
    struct node *third;

    head= (struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));

    head->data=1245;
    head->next=second;

    second->data=1345;
    second->next=third;

    third->data=1445;
    third->next=NULL;

    /*int choice;

    printf("enter the number of operation\n");
    printf("1. insertion\n");
    printf("2. deletion\n");
    printf("\n");
    scanf("%d",&choice);
    printf("\n");



    switch(choice)
    {
        case 1 :insert();
        break;

        case 2 :delete();
        break;
    }
*/
    int choice ;

    printf("1. insert at beg\n");
    printf("2. insert at end\n");
    printf("1. insert at index\n");

    scanf("%d",&choice);

    switch(choice)
    {
        case 1 : head= insertion(head,123);
        break;

        case 2 : head= insertatend(head,123);
        break;
    }
    print(head);

    return 0;
}
