#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

//Khai bao kiểu
typedef struct{
    string name;
    float van, toan;
    string hocluc;
}student;

student hs1,hs2;

//Nguyen mẫu hàm
student nhap();
void xuat(student hsA);
float dtb(student hsA);
string xeploai(student hsA);
bool sosanh(student hsA, student hsB);

void menu();
void dieukhien();

int main(){
    menu();
    dieukhien();

    return 0;
}

//Nhập thông tin
student nhap(){
    student hsA;
    cout << "\nNhap Ho va Ten hoc sinh (viet lien khong dau): ";
    cin >> hsA.name;
    cout << "   Nhap diem Van: ";
    cin >> hsA.van;
    cout << "   Nhap diem Toan: ";
    cin >> hsA.toan;
    return hsA;
}
//Xuất thông tin
void xuat(student hsA){
    cout << "\nHo va ten hoc sinh: " << hsA.name << endl;
    cout << "   Diem mon Van: " << hsA.van << endl;
    cout << "   Diem mon Toan: " << hsA.toan << endl;
}

//Tính điểm trung bình
float dtb(student hsA){
    float tb;
    tb = (hsA.toan + hsA.van)/2;
    return tb;
}

//Xếp loại hs
string xeploai(student hsA){
    float avg = dtb(hsA);
    if (avg >= 8.000){
        hsA.hocluc = "Gioi";
    }else if( (avg >= 7.000) && (avg < 8.000) ){
        hsA.hocluc = "Kha";
    }else if( (avg >= 5.000) && (avg < 7.000) ){
        hsA.hocluc = "Trung Binh";
    }else if(avg < 5.000){
        hsA.hocluc = "Yeu";
    }
    cout << "\nHoc luc cua hoc sinh " << hsA.name << " la: " << hsA.hocluc;
    return hsA.hocluc;
}

//So sánh hai học sinh
bool sosanh(student hsA, student hsB){
    bool kq;
    if ( dtb(hsA) > dtb(hsB) ) {
        cout << "\nHoc sinh " << hsA.name << " co hoc luc tot hon hoc sinh " << hsB.name << endl;
        kq = true;
    };
    if ( dtb(hsA) < dtb(hsB) ) {
        cout << "\nHoc sinh " << hsA.name << " co hoc luc kem hon hoc sinh " << hsB.name << endl;
        kq = false;
    };
    if ( dtb(hsA) == dtb(hsB) ) {
        cout << "\nHai hoc sinh nay co hoc luc nhu nhau." << endl;
        kq = NULL;
    };
    return kq;
}

//hỗ trợ thao tác
void menu(){
    cout << "\nMENU TINH NANG" << endl;
    cout << "   1. Nhap du lieu 2 hoc sinh (bat buoc)." << endl;
    cout << "   2. Xuat thong tin 2 hoc sinh." << endl;
    cout << "   3. Tinh diem trung binh." << endl;
    cout << "   4. Xep loai hoc luc." << endl;
    cout << "   5. So sanh hoc luc 2 hoc sinh." << endl;
    cout << "   6. Ket thuc chuong trinh!." << endl;
}

void dieukhien(){
    int q,d;
    float avg1, avg2;
    cout << "   Lua chon: ";
    cin >> q;
    switch (q)
    {
    case 1:
        hs1 = nhap();
        hs2 = nhap();

        cout << "\nNhan nut bat ky." << endl;
        getch();
        system("cls");
        break;

    case 2:
        xuat(hs1);
        xuat(hs2);

        cout << "\nNhan nut bat ky." << endl;
        getch();
        system("cls");

        break;
    
    case 3:
        avg1 = dtb(hs1);
        cout << "\nDiem trung binh cua hoc sinh " << hs1.name << " la: " << avg1 << endl;

        avg2 = dtb(hs2);
        cout << "\nDiem trung binh cua hoc sinh " << hs2.name << " la: " << avg2 << endl;

        cout << "\nNhan nut bat ky." << endl;
        getch();
        system("cls");

        break;
    
    case 4:

        hs1.hocluc = xeploai(hs1);
        hs2.hocluc = xeploai(hs2);

        cout << "\nNhan nut bat ky." << endl;
        getch();
        system("cls");
        break;
    
    case 5:

        sosanh(hs1, hs2);
        cout << "\nNhan nut bat ky." << endl;
        getch();
        system("cls");
        break;

    case 6:
        cout << "\nXin cam on. Chuong trinh ket thuc!" << endl;
        exit(0);
        break;

    default:
        cout << "\nLua chon khong chinh xac. Moi nhap lai." << endl;
        break;
    }

    menu();
    dieukhien();
}
