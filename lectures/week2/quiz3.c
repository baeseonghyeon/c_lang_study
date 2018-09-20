#include <stdio.h>

/*
    별찍기 3

        *
       **
      ***
     ****
    *****
*/

/*
    height  | widthOfSpace  | widthOfStar (정의되어있지 않음) 
    1       | 4             | 1
    2       | 3             | 2
    3       | 2             | 3
    4       | 1             | 4
    5       | 0             | 5 
*/

// 별찍는 부분을 함수로 따로 분리합니다. 
void printStar(int size){
    for(int height = 1 ; height <= size; height++)
    // 기본 아이디어는 quiz1과 동일합니다.
    {
        int widthOfSpace = size - height;
        // 공백이 출력되어야 하는 갯수를 구해봅니다.
        // 별을 우측 정렬하기 위해서는 공백또한 출력해야하기 때문입니다.
        // 공백의 갯수는 height가 1로 초기화된다고 가정했을때, 
        // 출력할 크기 - height입니다. 
        for(int width = 0 ; width < size; width++){
            // 우선 width도 size만큼 반복합니다.

            if(width < widthOfSpace){
                // 만약 현재 width가 출력해야하는 공백 수 보다 작으면 
                // 공백을 출력하고
                printf(" ");
            }
            else{
                // width가 공백보다 커지면 *을 출력합니다.
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