#include <stdio.h>
#include <stdlib.h>

int main(){
    int N = 0;
    int sum = 0;

    printf("请输入需要处理的数据个数（整数）：\n");
    scanf("%d",&N);

    if (N <= 0){
        printf("无效的数字，请重试。\n");
        return 1;
    }

    int *arr = malloc(N * sizeof(*arr));    //sizeof(指针名)可以让编译器自己推断，这样更安全方便。
    if (arr == NULL) {
        printf("请求失败，请重试。\n");
        return 1;
    }

    for (int i ; i < N ; i++){
        printf("请输入第%d位数字（整数）：\n",i + 1);
        scanf("%d",&arr[i]);
    }
    
    for (int i ; i < N ; i++) {
        sum = sum + arr[i];
    }
    
    printf("输入的数字之和为：%d",sum);
    free(arr);  //先释放内存
    arr = NULL; //再取消掉指向内存的地址，也就是指针

    return 0;
}