#include<iostream>
#include<conio.h>
#include"BT2.h"

using namespace std;
complex z1, z2;

//Nguyên mẫu hàm
void menu();
void control();

void nhapSP();
void xuatSP();
void laySP(complex p);
void ganSP(complex p);

void congSP();
void truSP();
void nhanSP();
void chiaSP();
void sosanhSP();

int main(){
    system("cls");
    menu();
    control();
    
    return 0;
}

void menu(){
cout << "BAI TAP 2 - OOP." << endl;
cout << "   1. Nhap so thuc." << endl;
cout << "   2. Xuat so thuc da nhap." << endl;
cout << "   3. Lay phan thuc hoac phan ao tu so phuc da nhap." << endl;
cout << "   4. Gan phan thuc hoac phan ao moi cho so phuc." << endl;
cout << "   5. Tinh module." << endl;
cout << "   6. Cac phep tinh voi so phuc." << endl;
}

void control(){
    int q1,q2,q3;
    cout <<  "Chon chuc nang: ";
    cin >> q1;
    switch (q1)
    {
    case 1:
        nhapSP();
        break;

    case 2:
        xuatSP();
        break;

    case 3:
        cout << "   Chon so phuc can lay (z1 hoac z2): ";
        cin >> q2;
        if (q2 == 1){
            laySP(z1);
        }else if (q2 == 2){
            laySP(z2);
        }else {
            cout << " Co loi phat sinh." << endl;
            main();
        }
        break;

    case 4:
        cout << "   Chon so phuc can gan (1 hoac 2): ";
        cin >> q2;
        if (q2 == 1){
            ganSP(z1);
        }else if (q2 == 2){
            ganSP(z2);
        }else {
            cout << " Co loi phat sinh." << endl;
            main();
        }
        break;

    case 5:
        cout << "   Chon so phuc can tinh module." << endl;
        cout << "   1. z1 = " ; z1.xuat(z1); 
        cout << "   2. z2 = " ; z2.xuat(z2); cout << endl;
        cout << "   Lua chon: ";
        cin >> q2;
        if (q2 == 1){
            z1.module(z1);
        }else if (q2 == 2){
            z2.module(z2);
        }else {
            cout << " Co loi phat sinh." << endl;
            main();
        }
        break;

    case 6:
        cout << "       1. Cong hai so phuc." << endl;
        cout << "       2. Tru hai so phuc." << endl;
        cout << "       3. Nhan hai so phuc." << endl;
        cout << "       4. Chia hai so phuc." << endl;
        cout << "       6. So sanh hai so phuc." << endl;
        cout << "       Lua chon: ";
        cin >> q3;
        switch (q3)
        {
        case 1:
            congSP();
            break;
        case 2:
            truSP();
            break;
        case 3:
            nhanSP();
            break;
        case 4:
            chiaSP();
            break;
        case 5:
            sosanhSP();
            break;
        default:
            break;
        }

        break;
    default:
        break;
    }
    cout << "Nhan de tiep tuc." << endl;
    getch();
    main();
}

void nhapSP(){
    z1 = z1.nhap();
    z2 = z2.nhap();
}

void xuatSP(){

    cout << "   Ta co so phuc z1: "; z1.xuat(z1); cout << endl;
    cout << "   Ta co so phuc z2: "; z2.xuat(z2); cout << endl;

}

void laySP(complex p){
    int q;
    cout << "       1. Lay phan thuc." << endl;
    cout << "       2. Lay phan ao." << endl; 
    cout << "       Lua chon: ";
    cin >> q;
    switch (q)
    {
    case 1:
        p.layphanthuc(p);
        break;
    case 2:
        p.layphanao(z2);
        break;
    default:
        break;
    } 
}

void ganSP(complex p){
    int q;
    cout << "       1. Gan tu so." << endl;
    cout << "       2. Gan mau so." << endl; 
    cout << "       Lua chon: ";
    cin >> q;
    switch (q)
    {
    case 1:
        p.ganphanthuc(p);
        break;
    case 2:
        p.ganphanao(z2);
        break;
    default:
        break;
    } 
}


void congSP(){
    complex p;
    p.cong(z1, z2);
}

void truSP(){
    complex p;
    p.tru(z1, z2);
    p.in(p);
}

void nhanSP(){
    complex p;
    p.nhan(z1, z2);
}

void chiaSP(){
    complex p;
    p.chia(z1, z2);
}

void sosanhSP(){
    complex p;
    p.sosanh(z1, z2);
}