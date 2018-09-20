#include <stdio.h>

/*
    별찍기 4

    *
    **
    ***
    **
    *
*/

// 별찍는 부분을 함수로 따로 분리합니다. 
void printStar(int size){
    int sizeOfUpperSide = size / 2;
    for(int height = 0 ; height < size ; height++){
        if(height < sizeOfUpperSide){
            for(int width = 0 ; width <= height ; width++){
                printf("*");
            }
        }
        else{
            int maxOfWidth = size - height;
            for(int width = maxOfWidth ; width > 0 ; width--){
                printf("*");
            }
        }
        if(height < size - 1){ printf("\n"); }
    }
}

int main(){
    printStar(5);
    return 0;
}