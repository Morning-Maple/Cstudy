#include <stdio.h>

void main(){
    double score[3][5];
    int rows = 3, cols = 5;
    double classTotalScore = 0.0, totalScore = 0.0;
    for (int i = 0; i < rows; i++){ //��ʼ��
        for (int j = 0; j < cols; j++){
            score[i][j] = 0;
        }
    }
    for (int i = 0; i < rows; i++){ //������ֵ
        for (int j = 0; j < cols; j++){
            printf("�������%d��ĵ�%d��ѧ���ĳɼ���", i+1, j+1);
            scanf("%lf", &score[i][j]);
        }
    }
    for (int i = 0; i < rows; i++){ //����ÿ�����ƽ���ֺ�ȫ�����ƽ�����ܷ�
        classTotalScore = 0.0;
        for (int j = 0; j < cols; j++){
            classTotalScore += score[i][j];
        }
        printf("��%d�༶ƽ����Ϊ��%.2f\n", i+1, classTotalScore/cols);
        totalScore += classTotalScore;
    }
    printf("���а༶�ַܷ�Ϊ��%.2f", totalScore);
    printf("���а༶ƽ����Ϊ��%.2f", totalScore/rows);
}