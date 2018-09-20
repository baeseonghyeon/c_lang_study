#include <stdio.h>

int main(){
    int arr[10] = {0,1,2,3,4,5,6,7,8,9};

    // 이번엔 함수로 따로 뺴지 않음
    // 포인터 진도 이후에 배열을 넘기는 함수를 작성하는 것으로..
    int sizeOfArr = sizeof(arr) / sizeof(int);
    
    printf("result : ");
    for(int idx = 0 ; idx < sizeOfArr; idx++){
        if(idx == 0){ printf(" { "); }
        printf("%d" , arr[idx]);
        if(idx < sizeOfArr - 1){
            printf(", ");
        }
        else{
            printf(" }");
        }
    }

    return 0;
}