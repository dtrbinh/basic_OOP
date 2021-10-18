#include<string.h>
#include"BT1.h"
#include<iostream>
using namespace std;

//Nhóm tạo huỷ
    student::student(){
        this->name = "NULL";
        this->math = 0;
        this->liter = 0;
    }
    student::student(string S){
        this->name = S;
        this->math = 0;
        this->liter = 0;
    }
    student::student(string S, float a, float b){
        this->name = S;
        this->math = a;
        this->liter = b;
    }
    student::student(const student &clone_obj){
        this->name = clone_obj.name;
        this->math = clone_obj.math;
        this->liter = clone_obj.liter;
    }
    student::~student(){
        cout << "Da thu hoi bo nho!" << endl;
    }

//Nhóm toán tử
    //Nhập
    istream& operator >> (istream& in, student& A){
        cout << "Nhap ten hoc sinh: "; in >> A.name;
        cout << "Nhap diem mon Toan: "; in >> A.math;
        cout << "Nhap diem mon Van: "; in >> A.liter;
        return in;
        }
    //Xuất
    ostream& operator<<(ostream& out, student&A){
        out << "Hoc sinh " << A.name << " :" << " diem Toan la " << A.math << ", " << "diem Van la " << A.liter << "." << endl;
        return out;
        }
    
    bool operator > (student &a, student &b){
        float dtb1 = (a.math + a.liter)/2;
        float dtb2 = (b.math + b.liter)/2;
        if (dtb1 > dtb2){
            cout << "Hoc sinh "<< a.name <<" co diem trung binh cao hon hoc sinh "<< b.name <<"." << endl;
            return true;
            
                        }
            else{
                cout << "Hoc sinh "<< b.name <<" co diem trung binh cao hon hoc sinh "<< a.name <<"." << endl;
                return false;
                }
        }

    bool operator < (student &a, student &b){
        float dtb1 = (a.math + a.liter)/2;
        float dtb2 = (b.math + b.liter)/2;
        if (dtb1 < dtb2){
            cout << "Hoc sinh "<< a.name <<" co diem trung binh thap hon hoc sinh "<< b.name <<"." << endl;
            return true;
            
                        }
            else{
                cout << "Hoc sinh "<< b.name <<" co diem trung binh thap hon hoc sinh "<< a.name <<"." << endl;
                return false;
                }
        }

      bool operator == (student &a, student &b){
        float dtb1 = (a.math + a.liter)/2;
        float dtb2 = (b.math + b.liter)/2;
        if (dtb1 == dtb2){
            cout << "Hoc sinh "<< a.name <<" co diem trung binh bang voi hon hoc sinh "<< b.name <<"." << endl;
            return true;
            
                        }
            else{
                cout << "Hoc sinh "<< a.name <<" co diem trung binh khac voi hon hoc sinh "<< b.name <<"." << endl;
                return false;
                }
        }

      bool operator != (student &a, student &b){
        float dtb1 = (a.math + a.liter)/2;
        float dtb2 = (b.math + b.liter)/2;
        if (dtb1 != dtb2){
            cout << "Hoc sinh "<< a.name <<" co diem trung binh khac hoc sinh "<< b.name <<"." << endl;
            return true;
            
                        }
            else{
                cout << "Hoc sinh "<< a.name <<" co diem trung binh bang voi hon hoc sinh "<< b.name <<"." << endl;
                return false;
                }
        }