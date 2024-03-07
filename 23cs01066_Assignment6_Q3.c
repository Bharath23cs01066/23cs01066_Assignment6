#include<stdio.h>

void reverse(int arr[],int i){
    int temp,j;
    if(i==1) return;
    for(j=0;j<i-1;j++){
        temp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = temp;
    }
    reverse(arr,i-1);
}

int main(){
    int arr[100],size,i;
    printf("Enter the size of array : ");
    scanf(" %d",&size);
    for(i=0;i<size;i++){
        printf("enter a number : ");
        scanf(" %d",&arr[i]);
    }
    reverse(arr,size);
    printf("{");
    for(i=0;i<size;i++){
        printf("%d",arr[i]);
        if(i!=size-1)printf(",");
    }
    printf("}");
    return 0;
}