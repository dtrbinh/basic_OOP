#include<iostream>
using namespace std;

#ifndef BT1_H
#define BT1_H

class complex {
    private:
        int phanthuc;
        int phanao;
    public:
        complex();
        complex(int x, int y);
        complex(int n);
        complex(const complex &clone);

        complex nhap();
        void xuat(complex z);

        void layphanthuc(complex z);
        void layphanao(complex z);

        void ganphanthuc(complex z);
        void ganphanao(complex z);

        void module(complex z);

        void cong(complex z1, complex z2);
        void tru(complex z1, complex z2);
        void nhan(complex z1, complex z2);
        void chia(complex z1, complex z2);
        void sosanh(complex z1, complex z2);

        void in(complex z);

        //Hàm huỷ
        ~complex();

};


#endif