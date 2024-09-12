#include<stdio.h>
void selectionsort(int[], int);
void main(){
    int i,n;
    printf("Enter Size of array: ");
    scanf("%d", &n);
    int a[n];

    for(i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    selectionsort(a,n);
    for (i = 0; i < n; i++)
    {
        printf("\n%d", a[i]);
    }
}

void selectionsort(int a[], int n){
    int i, j, temp = 0, min;

    for(i=0;i<n-1;i++){

        min = i;
        for(j = i+1; j<n;j++){
            if(a[min] > a[j]){
                min = j;
            }
        }
       
        if(min != i){
            temp = a[i];
            a[i] = a[min];
            a[min] = temp;
        }
    }

}