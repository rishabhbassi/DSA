#include<stdio.h>
#include<stdlib.h>

struct stack
{
    int size;
    int top;
    int *arr;
};

int full(struct stack p)
{
    if(p.top==(p.size-1))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int empty(struct stack p)
{
    if(p.top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void push(struct stack p , int val)
{
    if(full(p))
    {
        printf("the stack is full\n");
    }
    else{
        p.top=p.top++;
        p.arr[p.top]=val;
        
        }

}

int main()
{
    struct stack s;
    s.size= 6;
    s.top= -1;
    s.arr=(int*)malloc(s.size*sizeof(int));

    push(s,12);
    //push(s,12);
    //push(s,12);
    
    //s.arr[s.top]=12;
    //s.top++;
    

    if(full(s)){
        printf("the stack is full\n");
    
    }
  
    if(empty(s))
    {
        printf("the stack is empty\n");
        printf("%d",s.arr[s.top]);  
        
    }
    else {
        printf("not empty\n");
          
        }

}