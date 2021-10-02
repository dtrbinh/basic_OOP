#include<iostream>
#include<conio.h>
#include "BT3.h"


//Nguyên mẫu hàm
void menu();
void control();
void laythongtinHS();
void ganthongtinHS();
void diemTBHS();
void xeploaiHS();

//Khai báo

student s1 = student("Nguyen Van A", 10, 8); //Khởi tạo từ tt cho trước
student s2 = student(s1); //Khởi tạo từ một hs khác
liststudent A;

int main(){

    system("cls");
    menu();
}

void menu(){
    cout << "BT3 - OOP" << endl;
    cout << "   1. Nhap thong tin hoc sinh." << endl;
    cout << "   2. Lay thong tin hoc sinh." << endl;
    cout << "   3. Thay doi thong tin hoc sinh." << endl;
    cout << "   4. Tinh diem trung binh." << endl;
    cout << "   5. Xep loai." << endl;
    cout << "   6. Nhap danh sach hoc sinh." << endl;
    cout << "   7. Xuat danh sach hoc sinh." << endl;
    control();
}

void control(){
    int q1;
    int n;
    cout << "   Lua chon: ";
    cin >> q1;
    switch (q1)
    {
    case 1:
        s1.nhap();
        s2.nhap();
        break;
    
    case 2:
        laythongtinHS();
        break;

    case 3:
        ganthongtinHS();
        break;

    case 4:
        diemTBHS();
        break;
    case 5:
        xeploaiHS();
        break;
    case 6:
        cout << "   Nhap so luong hoc sinh: ";
        cin >> n;
        liststudent(n, A);
        break;
    case 7:
        A.xuatds(A);
        break;

    default:
        break;
    }
    cout << "Nhap de tiep tuc." << endl;
    getch();
    main();
}

void laythongtinHS(){
    int q;
    cout << "       1. "; s1.inten(s1); cout << endl;
    cout << "       2. "; s2.inten(s2); cout << endl;
    cout << "       Lua chon: ";
    cin >> q;
    switch (q)
    {
    case 1:
        s1.laythongtin(s1);
        break;
    
    case 2:
        s2.laythongtin(s2);
        break;
    default:
        break;
    }
}

void ganthongtinHS(){
    int q;
    cout << "       1. "; s1.inten(s1); cout << endl;
    cout << "       2. "; s2.inten(s2); cout << endl;
    cout << "       Lua chon: ";
    cin >> q;
    switch (q)
    {
    case 1:
        s1.ganthongtin(s1);
        break;
    
    case 2:
        s2.ganthongtin(s2);
        break;

    default:
        break;
    }
}

void diemTBHS(){
    s1.diemTB(s1);
    s2.diemTB(s2);
}

void xeploaiHS(){
    s1.xeploai(s1);
    s2.xeploai(s2);
}
