#include <stdio.h>

int main(){
    int arr[10] = {4, 6, 1, 67, 2, 456, 3, 0 , 24, 1};
    for(int i=0; i<10; i++){
        for(int j=0; j<10-1; j++){
            if(arr[j]>arr[j+1]){
                int t=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=t;
            }
        }
    } for(int i=0; i<10; i++){
        printf("%d ", arr[i]);
    } return 0;
}