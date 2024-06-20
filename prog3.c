//WAP to insert an element in to an array at given position,
//insert(array, position, size, x(value)).

#include <stdio.h>
void ins(int);
void main(){
	int n;
	printf("enter N here: ");
	scanf("%d", &n);
	ins(n);
}

void ins(int n){
	int a[n+1],i,b,pos,ind;
	printf("Enter %d elements: ", n);
	for (i = 0; i < n; ++i){

		scanf("%d", &a[i]);
	}

	printf("Enter position and value: ");
	scanf("%d%d", &pos,&b);
	// ind = pos-1;
	for(i=n-1;i>=(pos-1);i--){
		a[i+1]= a[i];
	}

	a[pos-1] = b;

	printf("after Insertion: \n");

	for(i=0;i<n+1;i++){
		printf("%d\n", a[i]);
	}
}
