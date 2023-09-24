//Masha and Stones
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int size;
    scanf("%d",&size);
    int arr[size];
    int even = 0;
    int odd = 0;
    for(int i = 0 ; i<size ; i++){
        scanf("%d",&arr[i]);
    }
    for(int i = 0 ; i<size ; i++){
        if(arr[i]%2==0){
            even++;
        }else if(arr[i]%2!=0){

            odd++;
        }
    }
    if(even == size || odd == size){
        printf("Yes\n");
    }else{
        printf("No\n");
    }
    return 0;
}
