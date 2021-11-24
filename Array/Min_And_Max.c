#include <stdio.h>
#include <stdlib.h>

void minmaxLinear(int arr[], int n,int min, int max){ 
    for(int i=1;i<n;i++){
        if(arr[i]>max)max=arr[i];
        if(arr[i]<min)min=arr[i];
    }
    printf("Minimum element is %d and Maximum element is %d ",min,max);
}

int main(){
    int min,max,n;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of array: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    minmaxLinear(arr,n,arr[0],arr[0]);
    return 0;
}
