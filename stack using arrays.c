#include<stdio.h>
#include<stdlib.h>
#define SIZE 5
int top = -1,stack[SIZE];
void push(int ele)
{
stack[++top] = ele;
}
int pop()
{
return(stack[top--]);
}
int peek()
{
return(stack[top]);
}
void display()
{
for(int i = top;i >= 0;i--)
{
printf("%d\n",stack[i]);
}
}
int main()
{
int ch,ele;
while(1){
//printf("enter the elements of the stack");
//for(int i = top;i >= 0;i--){
//scanf("%d",&stack[i]);
//}
printf("\n1 push,\n2 pop,\n3 peek,\n4 display,\n5 exit\n");
printf("enter your choice");
scanf("%d",&ch);
switch(ch)
{
case 1: if(top == SIZE - 1)
            printf("stack is overflow");
        else{
            printf("Enter element ");
            scanf("%d",&ele);
            push(ele);
        }
        break;
case 2: if(top == -1)
            printf("stack is underflow");
        else{
            printf("deleted element is %d",pop());
            }
            break;
case 3: if(top == -1)
            printf("stack is underflow");
        else{
            printf("top element is %d",peek());
            }
            break;
case 4: if(top == -1)
            printf("stack is underflow");
        else{
            display();
        }
        break;
case 5: exit(0);
}
}
}             
