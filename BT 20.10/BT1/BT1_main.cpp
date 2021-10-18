#include<string.h>
#include"BT1.h"
#include<iostream>
using namespace std;

int main(){

    student a = student("Tran Van B", 5, 7);
    student b = student("Nguyen Van A");
    student c = student("Vo Van C", 8, 8);
    student d;
    student e = student (a);

    cout << a;
    cout << b;
    cout << c;
    cout << "Nhap thong tin hoc sinh:" << endl;
    cin >> d;


    a < b;
    c > d;
    a==e;
    a!=e;


    return 0;
}