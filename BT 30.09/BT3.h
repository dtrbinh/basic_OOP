#ifndef BT3_H
#define BT3_H
#include <string>
#include<iostream>

using namespace std;

class student{
    private:
        string fullname;
        float math, liter;
        friend class liststudent;

    public:

        student();
        student(string fullname, float math, float liter);
        student(const student &obj_clone);

        ~student();
        
        void nhap();
        void xuat(student s);

        void laythongtin(student s);
        void inten(student s);
        void ganthongtin(student s);

        float diemTB(student s);

        void xeploai(student s);

};

class liststudent{
    private:
        const int sohocsinh; //Khai báo hằng số hs trong ds
        string *a; //Khai báo mảng ds học sinh tĩnh

    public:
        liststudent();
        liststudent(const int n, liststudent A);

        void xuatds(liststudent A);


        void SXtangdan(liststudent A);
        void SXgiamdan(liststudent A);
};
#endif