#include<stdio.h>

#define ARR_SIZE 5

void izhod(int arr[]){
    for(int i=0;i<ARR_SIZE;i++){
        printf("%d ",arr[i]);
    }
}

void purva_zad(int arr[]){
    izhod(arr);
}

int main(){
    int arr[ARR_SIZE]={7,2,15,6,3};
    //purva_zad(arr);
}