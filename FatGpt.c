#include<stdio.h>

void mostYogurt(int arr[],int size){
    int index=0;
    int max = arr[0];
    for(int i = 0 ; i < size ; i++){
        if(arr[i]>max){
            max=arr[i];
            index = i+1;
        }
    }
    printf("%d\n",index);

}

int main(){
    int size,i;
    scanf("%d",&size);
    int arr[size];
    for(i = 0 ; i < size ; i++){
        scanf("%d",&arr[i]);
    }

    mostYogurt(arr,size);

}
