#include <stdio.h>
#include <stdlib.h>

typedef struct Student {
    char name[20];
    int score;
} Student;

int main(){
    int N;
    printf("请输入学生人数：\n");
    if (scanf("%d",&N) != 1 || N <= 0) {
    printf("输入无效\n");
    return 1;
    }

    Student *student = malloc(N * sizeof(*student));
    if (student == NULL){
        printf("内存不足，申请失败。");
        return 1;
    }

    for (int i = 0 ; i < N ; i++) {
        printf("请输入第%d位学生的姓名：\n",i + 1);
        scanf("%19s",student[i].name);

        printf("请输入第%d位学生的成绩：\n",i + 1);
        scanf("%d",&student[i].score);
    }

    for (int i = 0 ; i < N ; i++) {
        printf("学生的姓名：%19s\n",student[i].name);
        printf("学生的成绩：%d\n",student[i].score);
    }

    free(student);
    student = NULL;

    return 0;
}