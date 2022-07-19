#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
// numbers_len은 배열 numbers의 길이입니다.
int solution(int numbers[], size_t numbers_len) {
    int answer = 0;
    int i;
    for (i = 0; i<10; i++){
        int count = 0;
        for (int j = 0; j<numbers_len; j++){
            if (i == numbers[j]){
                count = 1;
            }
        }
        if (count == 0)
            answer +=i;
    }
    return answer;
}
