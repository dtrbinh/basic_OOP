#include<iostream>
using namespace std;

#ifndef BT1_H
#define BT1_H

class phanso {
    private:
        int tuso;
        int mauso;
    public:
        phanso();
        phanso(int x, int y);
        phanso(int n);
        phanso(const phanso &clone);

        phanso nhap();
        void xuat(phanso p);

        void laytuso(phanso p);
        void laymauso(phanso p);

        void gantuso(phanso p);
        void ganmauso(phanso p);

        void nghichdao(phanso p);
        int UCLN(phanso p);
        phanso rutgon(phanso p);

        void cong(phanso p1, phanso p2);
        phanso tru(phanso p1, phanso p2);
        void nhan(phanso p1, phanso p2);
        void chia(phanso p1, phanso p2);
        void sosanh(phanso p1, phanso p2);

        void in(phanso p);

        //Hàm huỷ
        ~phanso();

};


#endif