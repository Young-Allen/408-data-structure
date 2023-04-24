#include <iostream>

#define  MaxSize 50
typedef int ElemType;

//静态分配
typedef struct {
    ElemType data[MaxSize];
    int length; //顺序表长度
}SqList;


int main() {
    SqList L;   //顺序表的名称

    return 0;
}
