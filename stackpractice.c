#include<stdio.h>
#include<stdlib.h>

struct stack {
    int size;
    int top;
    int *arr;
};

int empty(struct stack *s)
{
    if(s->top==-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int full(struct stack *s )
{
    if(s->top==s->size-1)
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
        printf("the stack is full\n");
    }
    else
    {
        s->top++;
        s->arr[s->top]=val;
        printf("added %d at %d position\n",s->arr[s->top],s->top);
    }
}
int pop(struct stack *s )
{
    if(empty(s))
    {
        printf("the stack is empty\n");
    }
    else
    {
        int a;
        a=s->arr[s->top];
        printf("poped %d\n",s->arr[s->top]);

        s->top--;
        return a;
        }
        }

void print(struct stack *s)
    {
        struct stack *p=(struct stack*)malloc(sizeof(struct stack));
        p->top=s->top;
        int i;
        for(i=p->top;i>=0;i--)
        {
            printf("ele : %d ---- pos : %d\n",s->arr[p->top],p->top );
            p->top--;
        }
        
    }

int main(){

    struct stack *st;
    st=(struct stack*)malloc(sizeof(struct stack));
    st->size=10;
    st->top=-1;
    st->arr=(int *)malloc(st->size*sizeof(int));  

    push(st,12);
    push(st,13);
    push(st,14);
    push(st,15);
    push(st,16);
    push(st,17);
    push(st,18);
    push(st,19);
    push(st,20);
    push(st,21);

    printf("\n");

    printf("before popping\n");
    print(st);

    printf("\n");

    pop(st);
    pop(st);
    pop(st);

    printf("\n");

    printf("after popping\n");
    print(st);



    if(full(st))
    {
        printf("the stack is full\n");
    } 

    if(empty(st))
    {
        printf("the stack is empty\n");
    }

    
}
