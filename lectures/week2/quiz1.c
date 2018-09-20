#include <stdio.h>

/*
    별찍기 1
    *
    **
    ***
    ****
    *****
*/

// 별찍는 부분을 함수로 따로 분리합니다. 
void printStar(int size){
    for(int height = 0 ; height < size; height++){
        for(int width = 0; width <= height; width++){
            printf("*");
        }
        if(height < size-1){ printf("\n"); }
    }
}

int main(){
    printStar(5);
    return 0;
}