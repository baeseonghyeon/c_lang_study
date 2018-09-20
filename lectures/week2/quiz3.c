#include <stdio.h>

/*
    별찍기 3

        *
       **
      ***
     ****
    *****
*/

// 별찍는 부분을 함수로 따로 분리합니다. 
void printStar(int size){
    for(int height = 1 ; height <= size; height++)
    {
        int widthOfSpace = size - height;
        for(int width = 0 ; width < size; width++){
            if(width < widthOfSpace){
                printf(" ");
            }
            else{
                printf("*");
            }
        }
        if(height < size){ printf("\n"); }
    }
}

int main(){
    printStar(5);
    return 0;
}