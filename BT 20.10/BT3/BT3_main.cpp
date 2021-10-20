#include<iostream>
using namespace std;
#include"BT3.h"

int main(){

    //Khởi tạo từ mảng
    int x[] = {5, 7, 8, 4}; //n là số phần tử của mảng x
    polynomial f1(x, 4);
    cout << f1;

    //Khởi tạo từ bậc cho trước
    polynomial f2(5);
    //cout << "\n" << f2;

    //Khởi tạo bằng nhâp
    polynomial f3;
    cin >> f3;
    cout << f3;

    //Khởi tạo bằng nhâp
    polynomial f4;
    cin >> f4;
    cout << f4;

    //Sao chép
    polynomial f5(f3);

    //Cộng
    polynomial f6 = f3 + f4;
    cout << "\n" << f6;

    //Trừ
    polynomial f7 = f4 - f3;
    cout << "\n" << f7;


}