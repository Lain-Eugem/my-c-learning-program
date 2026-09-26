#include <stdio.h>

int main(){
    int ans_1;
    int ans_2;
    
    printf("请输入第一个整数：");
    scanf("%d" , &ans_1);

    printf("请输入第二个整数：");
    scanf("%d" , &ans_2);

    printf("请选择需要的操作：\n1.加法\n2.减法\n3.乘法\n4.除法\n");
    int operation;
    scanf("%d" , &operation);

    // if (operation == 1) {
    //     printf("结果为：%d\n", ans_1 + ans_2);
    // } else if (operation == 2) {
    //     printf("结果为：%d\n", ans_1 - ans_2);
    // } else if (operation == 3) {
    //     printf("结果为：%d\n", ans_1 * ans_2);
    // } else if (operation == 4) {
    //     if (ans_2 != 0) {
    //         printf("结果为：%d\n", ans_1 / ans_2);
    //     } else {
    //         printf("错误：除数不能为零。\n");
    //     }
    // } else {
    //     printf("无效的操作选择。\n");
    // }

    switch (operation) {
        case 1:
            printf("结果为：%d\n", ans_1 + ans_2);
            break;
        case 2:
            printf("结果为：%d\n", ans_1 - ans_2);
            break;
        case 3:
            printf("结果为：%d\n", ans_1 * ans_2);
            break;
        case 4:
            if (ans_2 != 0) {
                printf("结果为：%d\n", ans_1 / ans_2);
            } else {
                printf("错误：除数不能为零。\n");
            }
            break;
        default:
            printf("无效的操作选择。\n");
            break;
    }

    return 0;
}