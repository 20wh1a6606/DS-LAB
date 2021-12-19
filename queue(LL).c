/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

#include<stdlib.h>

struct node{
    int data;
    struct node* link;
};

struct node *front = NULL, *rear = NULL, *cur;
void enqueue(){
    cur = (struct node*)malloc(sizeof(struct node));
        printf("enter cur data");
        scanf("%d", &cur->data);
        cur->link = NULL;
        if(front == NULL){
            front = cur;
            rear= cur;
        }
        else{
            
            rear->link = cur;
            rear = cur;
        }
}
void dequeue(){
    if(front == NULL){
        printf("queue underflow");
    }
    else if(front==rear){
        printf("Deleted element is %d",front->data);
        front=NULL;
        rear=NULL;
    }
    else{
        printf("Deleted element is %d",front->data);
        front=front->link;
    }
    
}
void display(){
    if(front == NULL){
        printf("queue underflow");
    }
    else{
        cur=front;
        while(cur!=NULL){
            printf("%d\n",cur->data);
            cur=cur->link;
        }
    }
    
}
int main(){
	int ch, ele;
	while(1){
		printf("Enter your choice: \n");
		printf("1: enqueue\n2: dequeue\n3: display\n4: exit\n");
		scanf("%d", &ch);
		switch(ch){
			case 1:enqueue();
				   break;
			case 2:dequeue();
				   break;
			case 3:display();
				   break;
			case 4:
				exit(0);
		}
	}
}
