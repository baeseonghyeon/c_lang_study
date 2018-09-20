#include <stdio.h>

/*
    별찍기 2
    *****
    ****
    ***
    **
    *
*/

/*
    # 변수 실행 표 
    height  | width         | 줄바꿈 여부
    5       | 5 4 3 2 1     | O
    4       | 4 3 2 1       | O
    3       | 3 2 1         | O
    2       | 2 1           | O
    1       | 1             | X
*/

// 별찍는 부분을 함수로 따로 분리합니다. 
void printStar(int size){
    // 입력받은 size 변수의 값을 높이와 너비로 갖는 직각 역삼각형을 출력합니다.
    
    for(int height = size ; height > 0; height--){
        // 높이 5의 삼각형을 출력하므로 height의 값은 size와 같도록 초기화하고 
        // 범위는 0보다 큰 경우로 설정하여 5번 실행하도록 합니다.
        // 0으로 초기화하여 size보다 작도록 실행해도 무방하다
        // 하단의 내부 for문을 실행할 때 좀 더 매끄럽도록 위와 같이 설정합니다.
        for(int width = 0; width < height; width++){
            // width는 0부터, 매번 변경되는 height만큼 반복됩니다.
            // height는 1씩 줄어들기때문에, 다음줄은 현재보다 1 작습니다.
            printf("*");
        }
        if(height > 0){ printf("\n"); }
    }
}

int main(){
    printStar(5);
    return 0;
}