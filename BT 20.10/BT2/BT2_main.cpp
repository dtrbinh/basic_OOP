#include<iostream>
using namespace std;
#include"BT2.h"

int main(){
    matrix m1;
    cout << "\nNhap ma tran." << endl;
    cin >> m1;
    printf("\nMa tran vua nhap la:\n");
    cout << m1;

    matrix m2;
    cout << "\nNhap ma tran." << endl;
    cin >> m2;
    printf("\nMa tran vua nhap la:\n");
    cout << m2;

    matrix m3 = m1+m2;
    cout << m3;


    return 0;
}