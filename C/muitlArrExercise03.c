#include <stdio.h>

void main(){
    double score[3][5];
    int rows = 3, cols = 5;
    double classTotalScore = 0.0, totalScore = 0.0;
    for (int i = 0; i < rows; i++){ //初始化
        for (int j = 0; j < cols; j++){
            score[i][j] = 0;
        }
    }
    for (int i = 0; i < rows; i++){ //保存数值
        for (int j = 0; j < cols; j++){
            printf("请输入第%d班的第%d个学生的成绩：", i+1, j+1);
            scanf("%lf", &score[i][j]);
        }
    }
    for (int i = 0; i < rows; i++){ //计算每个班的平均分和全部班的平均分总分
        classTotalScore = 0.0;
        for (int j = 0; j < cols; j++){
            classTotalScore += score[i][j];
        }
        printf("第%d班级平均分为：%.2f\n", i+1, classTotalScore/cols);
        totalScore += classTotalScore;
    }
    printf("所有班级总分分为：%.2f", totalScore);
    printf("所有班级平均分为：%.2f", totalScore/rows);
}