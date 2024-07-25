#include<stdio.h>
#include<stdlib.h>

int front=-1,rear=-1;

int enqueue(int [],int,int);
int dequeue(int [],int);
void display(int [],int);
void avg(int []);

void main()
{		
	int choice,a[100],n,x;
	printf("Enter Queue size:");

	scanf("%d",&n);
	do
	{
		printf("Press 1 for Enqueue operation!!\n");
		printf("Press 2 for Dequeue operation!!\n");
		printf("Press 3 for display operation!!\n");
		printf("Press 4 for average!!\n");
		printf("Press 0 for exit operation!!\n");

		scanf("%d",&choice);
		switch(choice)
		{
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
			case 4:
				printf("average!!\n");
				avg(a);
				break;
			case 0:
				printf("Exit!!\n");
				exit(0);
				break;
		}
	}while(1);
}
int enqueue(int a[],int n,int x)
{
	if(rear>=n-1)
	{
		printf("Queue is overflow!!\n");
	}
	else
	{
		if(front==-1)
		{	
			rear=rear+1;
			front=front+1;
		}
		else
		{
			rear=rear+1;
		}
		a[rear]=x;
	}

}

int dequeue(int a[],int n)
{
	int value;
	if(front==-1)
	{
		printf("Queue Underflow\n");
	}
	else
	{
		value = a[front];
		// printf("");
		if(front==rear)
		{
			front=rear=-1;
		}
		else
		{
			front = front + 1;
		}
	}

}

void display(int a[],int n)
{
	if(rear==-1)
	{
		printf("Queue is empty!!");
	}
	else
	{
		for(int i=front;i<=rear;i++)
		{
			printf("%d\n",a[i]);
		}
	}
}

void avg(int a[]){
	float sum=0;
	int temp=0;
	if(rear==-1){
		printf("Queue is empty!!");
	}
	else{
		for(int i=front;i<=rear;i++){
			sum = sum+a[i];
			temp++;
		}
		sum = sum/temp;
		printf("Average of queue is: %f \n", sum);
	}
}