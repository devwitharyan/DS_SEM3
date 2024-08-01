#include <stdio.h>
#include <stdlib.h>

int front = -1, rear = -1;

void enqueue(int [],int,int);
void dequeue(int [],int);
void display(int [],int);

void main(){
	int a[100], n, x, choice;

	printf("Enter size of queue: \n");
	scanf("%d", &n);

	do{
		printf("Press 1 for Enqueue operation!!\n");
		printf("Press 2 for Dequeue operation!!\n");
		printf("Press 3 for display operation!!\n");
		printf("Press 0 for exit operation!!\n");

		scanf("%d", &choice);

		switch(choice){
		
			case 1:
				printf("Enqueue operation!!\n");
				printf("Enter value:");
				scanf("%d",&x);
				enqueue(a,n,x);
				break;
			case 2:
				printf("Dequeue operation!!\n");
				dequeue(a,n);
				break;
			case 3:
				printf("display!!\n");
				display(a,n);
				break;
			case 0:
				printf("Exit!!\n");
				exit(0);
				break;


		}
	}while(1);

}

void enqueue(int a[], int n, int x){
	if((front == 0&& rear >= n-1  ) || (front == rear+1))
	{
		printf("Queue is overflow!!\n");
	}
	else if(front == -1 && rear == -1){
		front = 0;
		rear = 0;
	}
	else if(front != 0 && rear ==n-1){
		rear = 0;
	}
	else{
		rear = rear + 1;
	}
	a[rear] = x;
}

void dequeue(int a[],int n){
	int x;
	if(front == -1){
		printf("Queue is underflow\n");
	}
	else{
		x = a[front];
		printf("%d", x);
	}
	
	if(front == rear){
		front = -1;
		rear = -1;
	}
	else if(front == n){
		front = 0;
	}
	else{
		front = front + 1;
	}
}
void display(int a[],int n){
	if(front == -1){
		printf("Queue is underflow");
	}
	else{
		if(rear < front){
			for(int i = front; i<n; i++)
				printf("%d\n", a[i]);
			for(int i=0;i<=rear;i++)
				printf("%d\n", a[i]);
		}
		else{
			for(int i = front; i<=rear;i++)
				printf("%d\n", a[i]);
		}
	}
}