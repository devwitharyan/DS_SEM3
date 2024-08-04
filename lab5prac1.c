#include <stdio.h>
#include <stdlib.h>

int push(int [], int, int, int);
int pop(int [],int,int);
void peep(int [],int,int,int);
void change(int[], int, int, int);
void display(int [], int, int);

void main(){
    int a[100], n, x, choice, top = -1, i;

    printf("Enter size of stack: ");
    scanf("%d", &n);

    
    do{
        printf("1 for push\n");
        printf("2 for pop\n");
        printf("3 for peep\n");
        printf("4 for change\n");
        printf("5 for display\n");
        printf("0 for exit\n");

        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
        	printf("PUSH operation!\n");
            printf("Enter element to push: ");
            scanf("%d", &x);
            top=push(a, top, x, n);
            break;
        case 2:
            printf("POP operation!\n");
            top = pop(a, top, n);
            break;
        case 3:
            printf("PEEP operation!\n");
            printf("Enter value from top: \n");
            scanf("%d", &i);
            peep(a, top, i, n);
            break;
        case 4:
        	printf("Change operation!\n");
        	printf("Enter value and position to change: \n");
        	scanf("%d %d", &x, &i);
        	change(a, top, i, x);
        	break;
        case 5:
            printf("Display operation. \n");
            display(a, top, n);
            break;
        case 0:
			exit(0);
			break;
        default:
            printf("Invalid choice\n");
            break;
        }
    }while(1);    
}

int push(int a[], int top, int x, int n){
    printf("top is: %d\n", top);
    if(top >= n-1){
        printf("Stack Overflow\n");
    }
    else{
        top = top + 1;
        a[top] = x;
    }
    return top;
}

int pop(int a[],int top,int n){
	int value;
	printf("top is: %d\n", top);
	if(top == -1){
		printf("Stack is underflow or empty \n");
	}
	else{
		value = a[top];
		top--;
		printf("POPPED: %d \n", value);
	}
	return top;
}

void peep(int a[],int top,int i,int n){
	printf("Top is: %d\n", top);
	int value;
	if(top < 0){
		printf("Stack is empty.\n");
	}
	else{
		if(top-i + i<0){
			printf("Stack is underflow.\n");
		}
		else{
			value = a[top-i+1];
			printf("Peeped value is: %d\n", value);
		}
	}
}

void change(int a[], int top, int i, int x){
	printf("Top is: %d\n", top);
	if(top < 0){
		printf("Stack is empty.\n");
	}	
	else{
		if(top-i + 1 < 0){
			printf("Stack is underflow.\n");
		}
		else{
			a[top-i+1] = x;
		}
	}
}

void display(int a[],int top, int n){
	int i;
	if(top <= 0){
		printf("Stack is empty\n");
	}
	else{
		for(i=top;i>=0;i--){
			printf("%d\n", a[i]);
		}
	}
}
