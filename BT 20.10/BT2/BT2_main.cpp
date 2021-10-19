#include<iostream>
using namespace std;
#include"BT2.h"

int main(){
    matrix m1(5);
    cout << "\nNhap ma tran." << endl;
    cin >> m1;
    printf("\nMa tran vua nhap la:\n");
    cout << m1;

    cout << "\nMa tran lay tu mang la: " << endl;
    int x[5] = {1, 2, 3, 4, 5};
    matrix m2(x[5]);
    cout << m2;

    cout << "Ma tran sao chep tu ma tran 1 la:"<< endl;
    matrix m3(m1);
    cout << m3;

    
    return 0;
}