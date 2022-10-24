#include <stdio.h>
#include <stdlib.h>

//�ص�����
//int (*f)(void)��f��һ������ָ�룬�����Խ��յĺ����Ƿ���int��û���βεĲ���
//f���ⱻinitArray���ã��䵱�˻ص������Ľ�ɫ
void initArray(int *array, int arraySize, int (*f)(void)){
    int i;
    for(i = 0; i < arraySize; i++){
        array[i] = f(); //ͨ������ָ�����getNextRandomValue������(*f)()=f()
    }
}

//��ȡ���ֵ
int getNextRandomValue(void){
    return rand();  //randϵͳ�������᷵��һ���������
}

int main(){
    int myarray[10], i; //����һ�������int
    //˵����
    //1.����initArray����
    //2.������һ��������getNextRandomValue����ַ������Ҫʹ�ú���ָ��������
    initArray(myarray, 10, getNextRandomValue);
    for ( i = 0; i < 10; i++){
        printf("%d\n", myarray[i]);
    }
    printf("\n");
    return 0;
}