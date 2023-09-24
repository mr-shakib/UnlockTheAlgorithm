#include <stdio.h>
#include <stdlib.h>

int main(){
    int match,count=0;
    scanf("%d",&match);
    int arr[match];
    int temp;
    for (int i = 0; i < match; i++) {
        scanf("%d",&arr[i]);
    }

    for (int i = 0; i < match; i++){
        for(int j = 0 ; j < match-i-1; j++){
            if(arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    for (int i = 0; i < match; i++){
        printf("%d ",arr[i]);
    }

    for (int i = 0; i < match; i++){
        if(arr[i]>50)
            count++;

    }

    printf("\n%d",count);

}
