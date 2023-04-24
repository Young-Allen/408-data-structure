#include <iostream>

using namespace std;
#define  MaxSize 50
typedef int ElemType;

//静态分配
typedef struct {
    ElemType data[MaxSize];
    int length; //顺序表长度
} SqList;

//插入操作
bool ListInsert(SqList &L, int i, ElemType e) {
    //判断插入的位置是否合法
    if (i < 1 || i > L.length + 1) return false;
    //如果存储空间满了，不能插入
    if (L.length >= MaxSize) return false;

    //将第i个元素都向后移
    for (int j = L.length - 1; j >= i - 1; j--)
        L.data[j + 1] = L.data[j];

    L.data[i - 1] = e;
    L.length++;
    return true;
}

int main() {
    SqList L;   //顺序表的名称
    L.data[0] = 1;
    L.data[1] = 2;
    L.data[2] = 3;
    L.length = 3;

    bool res = ListInsert(L, 2, 10);
    for (int i = 0; i < L.length; i++) {
        cout << L.data[i] << ' ';
    }
    return 0;
}
