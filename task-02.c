#include <stdio.h>

int main(){
    int sum = 0;
    int i = 100;

    while (i) {
        if (i % 2 != 0){
            sum = sum + i;
    }
    i--;
    }

    printf("100以内奇数加和为%d\n",sum);

    return 0;
}