#include<iostream>
using namespace std;
#include"BT4.h"

int main(){
    //Khởi tạo: mặc định, từ 1 mảng, từ 1 đối tượng
    GroupInteger a;
    int x[5] = {3, 5, 2, 6, 7};
    int y[7] = { 1, 4, 8, 5, 9, 3, 2};
    GroupInteger b(x, 5);
    GroupInteger c(y, 7);
    GroupInteger d(b);

    //Lấy giá trị
    cout << b << "\n";
    cout << c << "\n";
    cout << d << "\n";
    cout << b[2] << "\n";
    cout << c[5] << "\n";

    //Tìm kiếm 
    int k;
    cout << "Tim kiem trong tap hop b: ";
    cout << b(1) << endl;  // 1 khong co trong x[]
    cout << "Tim kiem trong tap hop c: ";
    cout << c(8) << endl; // 8 co trong y[]

    //Toán tử gán
    a = b;
    cout << a << "\n";

    //Giao
    GroupInteger e(x, 5);
    e = b*c;
    cout << a << "\n";
    return 0;

}