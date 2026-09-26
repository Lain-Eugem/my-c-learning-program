#include <stdio.h>

void int_switch(int *a,int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int ver1;
    int ver2;
    printf("请输入两个数字：\n");
    scanf("%d %d",&ver1,&ver2);

    printf("你输入的是%d，和%d\n",ver1, ver2);

    int_switch(&ver1,&ver2);
    printf("交换后你输入的是%d，和%d\n",ver1, ver2);

    return 0;
}