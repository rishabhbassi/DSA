#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

int empty(struct node *top)
{
    if(top==NULL)
    {
        return 1;
    }
    else {
        return 0;
    }
}

int full(struct node *top)
{
    struct node *p=(struct node *)malloc(sizeof(struct node));
    if(p==NULL)
    {
        return 1;
    }
    else {
        return 0;
    }
}
struct node* push(struct node *top , int d)
{
    if(full(top))
    {
        printf("overflow\n");
    }
    else
    {
        struct node *p=(struct node*)malloc(sizeof(struct node));
        p->data=d;
        p->next=top;
        top=p;
        
        return top;
    }
}

int pop(struct node *top)
{
    struct node *n =top;
    top=top->next;
    int x ->n->data;
    free(n);
    return
}
void print(struct node *ptr)
{
    while(ptr!=NULL)
    {
        printf("ele : %d\n",ptr->data);
        ptr=ptr->next;
    }
}
/*struct *newnode(struct node *p,int data )
{
    p=(struct node *) malloc (struct node);
    p->data=data;
    p->next=NULL;
}*/

int main()
{
    struct node *top=NULL;
    top=push(top,78);
    top=push(top,34);
    
    print(top);
    //new node(first);
}