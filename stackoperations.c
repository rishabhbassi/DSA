#include<stdio.h>
#include<stdlib.h>

struct stack 
{
    int size;
    int top;
    int *arr;
};

int empty(struct stack *ptr)
{
    if(ptr->top==-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int full(struct stack *ptr)
{
    if(ptr->top==ptr->size-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void push(struct stack *s , int val)
{
    if(full(s))
    {
        printf("stack overflow\n");
    }
    else
    {
        s->top++;
    s->arr[s->top]=val;
    }
}


int main()
{
    struct stack *s;
    s=(struct stack *)malloc(sizeof(struct stack));
    s->size=6;
    s->top= -1;
    s->arr= (int *)malloc(s->size*sizeof(int));

    push(s,33);
     push(s,33);
      push(s,33);
       push(s,33);
        push(s,33);
         push(s,33);
          push(s,33);


    if(empty(s))
        {
            printf("the stack is empty\n");
            printf("%d",s->arr[0]);
        }
        else
        {
            printf("the stack is not empty\n");
            printf("%d",s->arr[0]);
        }      

}