#include <stdio.h>

/*
    별찍기 2
    *****
    ****
    ***
    **
    *
*/

// 별찍는 부분을 함수로 따로 분리합니다. 
void printStar(int size){
    for(int height = size ; height > 0; height--){
        for(int width = height; width > 0; width--){
            printf("*");
        }
        if(height < size-1){ printf("\n"); }
    }
}

int main(){
    printStar(5);
    return 0;
}