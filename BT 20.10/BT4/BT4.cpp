#include<iostream>
using namespace std;
#include"BT4.h"

GroupInteger::GroupInteger(){
    this->n = 0;
    int *a = new int[n];
    this->arr = a;
}

GroupInteger::GroupInteger(int x[], int n){
    this->n = n;
    for(int i = 0; i < n; i++) this->arr[i] = x[i];
}

GroupInteger::GroupInteger(const GroupInteger &obj_clone){
    this->n = obj_clone.n;
    this->arr = obj_clone.arr;
}

GroupInteger::~GroupInteger(){
    delete []arr;
}

//Nhập
    istream& operator >> (istream& in, GroupInteger &a){
        
        cout << "\nNhap so phan tu: ";
        cin >> a.n;
        cout << "Nhap phan tu:";
        for (int i = 0; i < a.n; i++)
            {
                cout << "a[" << i + 1 <<"] = ";
                cin >> a.arr[i];
            }
        return in;
    }

//Xuất
    ostream& operator << (ostream& out, GroupInteger &a){
        for(int i = 0; i < a.n ; i++)
        {   
           cout << a.arr[i] << " ";

        }
        return out;
        }

//Overload
    //Lấy giá trị
    int& GroupInteger::operator[] (int i) {
        return arr[i+1];
    }

    //Tìm kiếm (tuyến tính)
    bool GroupInteger::operator() (int x) {

        int i = 0;
        arr[n] = x;
        while (arr[i] != x)
            i++;
        if (i == n)
            return false;
        return true;
    }

    //Gán 
    const GroupInteger GroupInteger::operator = (const GroupInteger &a){
        this->n = a.n;
        this->arr = a.arr;
        return *this;
    }

    //Tìm hợp
    GroupInteger operator +(GroupInteger &a, GroupInteger &b){
        
    }

    //Tìm hiệu
    GroupInteger operator -(GroupInteger &a, GroupInteger &b){

    }

    //Tìm giao
    GroupInteger operator *(GroupInteger &a, GroupInteger &b){
        GroupInteger a;
        for (int i = 0; i < a.n; i++){
                if( a(a.arr[i]) && b(a.arr[i]) )
                    

        };
        return a;
    }
