#include<stdio.h>
void bubblesort(int[], int);
void main(){
    int i,n;
    printf("Enter Size of array: ");
    scanf("%d", &n);
    int a[n];

    for(i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    bubblesort(a,n);
    for (i = 0; i < n; i++)
    {
        printf("\n%d", a[i]);
    }
}

void bubblesort(int a[], int n){
    int i, j, temp = 0;
    
    for(i=0;i<n-1;i++){
        for(j=0;j<=n-1;j++){
            if(a[j] > a[j+1]){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
}
