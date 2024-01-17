#include <stdio.h>
int main () {
    //input arr
    int n,j;
    printf("Enter the arr size :");
    scanf("\n%d",&n);

    int i,arr[n],temp;
    for ( i = 0; i < n; i++) {
        printf("\nEnter the arr %deliment",i+1);
        scanf("%d",&arr[i]);
    }

    //arr output
    for ( i = 0; i < n; i++)
    {
        printf("%d  ",arr[i]  );
    }
    printf("\n");
    //bubble sort 
    int count = 1;
    while (count<n)
    {
        for(i =0;i<n-count;i++){

            if (arr[i]>arr[i+1]){
            int temp;
            temp = arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
            }
        }
        count++;
    }
    //arr output
    for ( i = 0; i < n; i++){
        printf("%d  ",arr[i]  );
    }
    
    return 0;
}