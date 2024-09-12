#include<stdio.h>
void insertionsort(int[], int);
void main(){
    int i,n;
    printf("Enter Size of array: ");
    scanf("%d", &n);
    int a[n];

    for(i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    insertionsort(a,n);
    for (i = 0; i < n; i++)
    {
        printf("\n%d", a[i]);
    }
}

void insertionsort(int a[], int n){
    int key, i, j;
    for(i=0;i<n;i++){
        key = a[i];
        j = i;
        while (j > 0 && a[j-1] > key){
            a[j] = a[j-1];
            j = j-1;
        }
        a[j] = key;
        
    }
}