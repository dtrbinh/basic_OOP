#include "BT3.h"
#include <iostream>
using namespace std;


//Hàm dựng

    student::student(){
        this->fullname = "NULL";
        this->math = 0;
        this->liter = 0;
    }

    student::student(string fullname, float math, float liter){
        this->fullname = fullname;
        this->math = math;
        this->liter =liter;
    }

    student::student(const student &obj_clone){
        this->fullname = obj_clone.fullname;
        this->math = obj_clone.math;
        this->liter = obj_clone.liter;
    }

//Hàm huỷ
    student::~student(){
        //cout << "Da huy.";
    }

//Hàm nhập, xuất
    void student::nhap() {
        student s;

        cout << "   Nhap ho ten hoc sinh: ";
        cin >> s.fullname;
        this->fullname = s.fullname;

        cout << "   Nhap diem Toan: ";
        cin >> s.math;
        this->math = s.math;

        cout << "   Nhap diem Van: ";
        cin >> s.liter;
        this->liter = s.liter;
    }

    void student::xuat(student s) {
        cout << "   Ho ten: "<< s.fullname << endl;
        cout << "   Diem Toan: " << s.math << endl;
        cout << "   Diem Van: " << s.liter << endl;
    }

//Hàm lấy thông tin
    void student::laythongtin(student s){
        int q;
        cout << "           1. Lay ho ten." << endl;
        cout << "           2. Lay diem Toan." << endl;
        cout << "           3. Lay diem Van." << endl;
        cout << "       Lua chon: ";
        cin >> q    ;
        switch (q)
        {
        case 1:
            cout << "               Hoc sinh co ho ten la: " << s.fullname << endl;
            break;
        case 2:
            cout << "               Hoc sinh co diem Toan la: " << s.math << endl;
            break;
        case 3:
            cout << "               Hoc sinh co diem Van la: " << s.liter << endl;
            break;
        default:
            cout << "   Nhap sai lua chon." << endl;
            break;
        }
    }

     void student::ganthongtin(student s){
        int q;
        cout << "           1. Thay doi ho ten." << endl;
        cout << "           2. Nhap diem Toan." << endl;
        cout << "           3. Nhap diem Van." << endl;
        cout << "           Lua chon: ";
        cin >> q    ;
        switch (q)
        {
        case 1:
            cout << "               Hoc sinh co ho ten la: ";
            cin >> s.fullname;
            this->fullname = s.fullname;
            break;
        case 2:
            cout << "               Hoc sinh co diem Toan la: ";
            cin >> s.math;
            this->math = s.math;
            break;
        case 3:
            cout << "               Hoc sinh co diem Van la: ";
            cin >> s.liter;
            this->liter = s.liter;
            break;
        default:
            cout << "   Nhap sai lua chon." << endl;
            break;
        }

    }

    void student::inten(student s){
        cout << s.fullname;
    }

    float student::diemTB(student s){
        float A;
        A = (s.math + s.liter)/2;
        cout << "       Hoc sinh "; s.inten(s);
        cout << " co diem trung binh la: " << A << endl;
        return A;
    }

//HÀm xếp loại
    void student::xeploai(student s){
        float A;
        A = s.diemTB(s);
        if( A < 5){
            cout << "       Xep loai hoc luc: Yeu." << endl;
        }else if((A>=5) && (A<7)){
            cout << "       Xep loai hoc luc: Trung Binh." << endl;
        }else if((A>=7) && (A<8)){
            cout << "       Xep loai hoc luc: Kha." << endl;
        }else if((A>=8)){
            cout << "       Xep loai hoc luc: Gioi." << endl;
        }
    }

//Hàm tạo nhập ds
    liststudent::liststudent():sohocsinh(0){
        cout << "   Chua nhap danh sach, khong co hoc sinh nao." << endl;
    };
    liststudent::liststudent(const int n, liststudent A):sohocsinh(n){
        string fullname;
        for( int i = 0; i<=n; i++){
                cout << "   Ho ten hoc sinh thu " << i+1 << " la: ";
                cin >> fullname;
                A.a[i] = fullname;
        };
    }

    void liststudent::xuatds(liststudent A){

        int n = A.sohocsinh;
        for( int i = 0; i <= n; i++){
                cout << " Ho ten hoc sinh thu " << n+1 << " la: " << A.a[i];
            
        }
    }