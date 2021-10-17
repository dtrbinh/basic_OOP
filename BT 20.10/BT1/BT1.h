#include<iostream>
using namespace std;
#include<string.h>

#ifndef BT1_H
#define BT1_H


class student{
    private:
        string name;
        float math, liter;
    public:
    //Khai báo friend
        friend istream& operator >> (istream& in, student& A);
        friend ostream& operator << (ostream& out, student&A);


    //Nhóm tạo huỷ
        student();
        student(string S);
        student(string S, float a, float b);
        student(const student &clone_obj);
        ~student();

    //Nhóm toán tử
        //Nhập
        istream& operator >>(istream& in, student& A);
        //Xuất
        ostream& operator <<(ostream& out, student&A);


};
#endif