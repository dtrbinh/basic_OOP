#include<iostream>
#include<conio.h>
#include"BT1.h"

using namespace std;
phanso p1, p2;

//Nguyên mẫu hàm
void menu();
void control();

void nhapPS();
void xuatps();
void layPS(phanso p);
void ganPS(phanso p);
void nghichdaoPS();
void rutgonPS();

void congPS();
void truPS();
void nhanPS();
void chiaPS();
void sosanhPS();

int main(){
    system("cls");
    menu();
    control();
    
    return 0;
}

void menu(){
cout << "BAI TAP 1 - OOP." << endl;
cout << "   1. Nhap phan so." << endl;
cout << "   2. Xuat phan so." << endl;
cout << "   3. Lay tu so hoac mau so tu phan so." << endl;
cout << "   4. Gan tu so hoac mau so moi cho phan so." << endl;
cout << "   5. Nghich dao hai phan so da nhap." << endl;
cout << "   6. Rut gon hai phan so da nhap." << endl;
cout << "   7. Cac phep tinh voi phan so." << endl;
}

void control(){
    int q1,q2,q3;
    cout <<  "Chon chuc nang: ";
    cin >> q1;
    switch (q1)
    {
    case 1:
        nhapPS();
        break;

    case 2:
        xuatps();
        break;

    case 3:
        cout << "   Chon phan so can lay (1 hoac 2): ";
        cin >> q2;
        if (q2 == 1){
            layPS(p1);
        }else if (q2 == 2){
            layPS(p2);
        }else {
            cout << " Co loi phat sinh." << endl;
            main();
        }
        break;

    case 4:
        cout << "   Chon phan so can gan (1 hoac 2): ";
        cin >> q2;
        if (q2 == 1){
            ganPS(p1);
        }else if (q2 == 2){
            ganPS(p2);
        }else {
            cout << " Co loi phat sinh." << endl;
            main();
        }
        break;

    case 5:
        nghichdaoPS();
        break;

    case 6:
        rutgonPS();
        break;

    case 7:
        cout << "       1. Cong hai phan so." << endl;
        cout << "       2. Tru hai phan so" << endl;
        cout << "       3. Nhan hai phan so." << endl;
        cout << "       4. Chia hai phan so" << endl;
        cout << "       5. So sanh hai phan so" << endl;
        cout << "       Lua chon: ";
        cin >> q3;
        switch (q3)
        {
        case 1:
            congPS();
            break;
        case 2:
            truPS();
            break;
        case 3:
            nhanPS();
            break;
        case 4:
            chiaPS();
            break;
        case 5:
            sosanhPS();
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

void nhapPS(){
    p1 = p1.nhap();
    p2 = p2.nhap();
}

void xuatps(){

    cout << "Ta co phan so: "; p1.xuat(p1); cout << endl;
    cout << "Ta co phan so: "; p2.xuat(p2); cout << endl;

}

void layPS(phanso p){
    int q;
    cout << "       1. Lay tu so." << endl;
    cout << "       2. Lay mau so." << endl; 
    cout << "       Lua chon: ";
    cin >> q;
    switch (q)
    {
    case 1:
        p.laytuso(p);
        break;
    case 2:
        p.laymauso(p2);
        break;
    default:
        break;
    } 
}

void ganPS(phanso p){
    int q;
    cout << "       1. Gan tu so." << endl;
    cout << "       2. Gan mau so." << endl; 
    cout << "       Lua chon: ";
    cin >> q;
    switch (q)
    {
    case 1:
        p.gantuso(p);
        break;
    case 2:
        p.ganmauso(p2);
        break;
    default:
        break;
    } 
}

void nghichdaoPS(){

    p1.nghichdao(p1);
    p2.nghichdao(p2);

}

void rutgonPS(){
    phanso p;

    p = p1.rutgon(p1);
    p.in(p);

    p = p2.rutgon(p2);
    p.in(p);

}

void congPS(){
    phanso p;
    p.cong(p1, p2);
}

void truPS(){
    phanso p;
    p.tru(p1, p2);
    p.in(p);
}

void nhanPS(){
    phanso p;
    p.nhan(p1, p2);
}

void chiaPS(){
    phanso p;
    p.chia(p1, p2);
}

void sosanhPS(){
    phanso p;
    p.sosanh(p1, p2);
}