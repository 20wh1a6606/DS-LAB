/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<stdio.h>
#include<stdlib.h>

#define size 5

int front = -1, rear = -1, a[size];

void enque(int ele){
	a[++rear] = ele;
	if(front == -1)
		front = 0;
}

void deque(){
	if(front == rear){
		printf("Deleted element = %d\n", a[front]);
		front = rear = -1;
	}
	else{
		printf("Deleted element = %d\n", a[front]);
		front++;
	}
}

void display(){
	for(int i = front; i != rear; i++){
		printf("%d \t", a[i]);
	}
	printf("%d", a[rear]);
}

int main(){
	int ch, ele;
	while(1){
		printf("Enter your choice: \n");
		printf("1: enque\n2: deque\n3: display\n4: exit\n");
		scanf("%d", &ch);
		switch(ch){
			case 1:
				if(rear == size - 1){
					printf("Queue Overflow");
				}
				else{
					printf("Enter the element inserted into the queue: \n");
					scanf("%d", &ele);
					enque(ele);
				}
				break;
			case 2:
				if(front == -1){
					printf("Queue Underflow");
				}
				else{
					deque();
				}
				break;
			case 3:
				if(front == -1){
					printf("Queue is Empty");
				}
				else{
					display();
				}
				break;
			case 4:
				exit(0);
		}
	}
}
