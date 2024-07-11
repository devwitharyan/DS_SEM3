#include<stdio.h>
#include<stdlib.h>

int push(int [],int,int,int);
int pop(int [],int,int);
void peep(int [],int,int,int);
void change(int[], int, int, int);
void display(int [],int, int);

void main(){
	int choice, a[50], top = -1, n=5, x, i;

	do{
		printf("1 for push.\n");
		printf("2 for pop.\n");
		printf("3 for peep.\n");
		printf("4 for change.\n");
		printf("5 for display.\n");
		printf("0 for exit.\n");

		scanf("%d", &choice);

		switch(choice){
			case 1:
				printf("push operation \n");
				printf("Enter value\n");
		 		scanf("%d",&x);
		 		top=push(a,top,x,n);
		 		break;
			case 2:
				printf("POP operation\n");
				top = pop(a, top, n);
				break;
			case 3:
				printf("PEEP operation\n");
				printf("Enter number from top: \n");
				scanf("%d", &i);
				peep(a, top, i, n);
				break;
			case 4:
				printf("CHANGE operation\n");
				printf("Enter position & value:\n");
				scanf("%d %d", &i, &x);
				change(a, top, i, x);
				break;
			case 5:
				printf("Display operation\n");
				display(a, top, n);
				break;
			case 0:
				exit(0);
				break;
			default:
		 		printf("Enter valid choice");						
		 	}

	}while(1);

}


int push(int a[],int top,int x,int n){
	printf("TOP = %d\n", top);
	if(top >= n-1)
		printf("stack is overflow\n");
	else{
		top = top + 1;
		a[top] = x;
	}
	return top;
}

int pop(int a[],int top,int n){
	printf("TOP = %d\n", top);
	int value;
	if(top < 0){
		printf("Underflow\n");
	}
	else{
		value = a[top];
		top--;
		printf("POPPED: %d\n", value);
		return top;
	}
}

void peep(int a[],int top,int i,int n){
	printf("TOP = %d\n", top);
	int temp;
	if(top < 0){
		printf("Stack is Underflow");
	}
	else{
		if(top-i+1 < 0){
			printf("Stack is underflow 2\n");
		}
		else{
			temp = a[top-i+1];
			printf("ith element is: %d\n", temp);
		}
	}
}

void change(int a[], int top, int i, int x){
	printf("TOP = %d\n", top);
	if(top < 0){
		printf("Stack is empty");
	}
	else{
		if(top-i+1 < 0){
			printf("Stack is Underflow\n");
		}
		else{

			a[top-i+1] = x;
			printf("Change is done.\n");
		}
	}
}


void display(int a[],int top, int n){
	int i;
	if(top <= 0){
		printf("Stack is empty");
	}
	else{
		for(i=top;i>=0;i--){
			printf("%d\n", a[i]);
		}
	}
}
