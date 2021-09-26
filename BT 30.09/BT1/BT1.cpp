#include<iostream>
#include"BT1.h"

using namespace std;

//Hàm dựng
    //Mặc định phân số bằng 0
    phanso::phanso(){

        this->tuso = 0;
        this->mauso = 0;
    }
    //Dựng từ tử và mẫu cho trước
    phanso::phanso(int x, int y){
        this->tuso = x;
        this->mauso = y;
    }
    //Dựng từ giá trị nguyên cho trước
    phanso::phanso(int n){
        this->tuso = n;
        this->mauso = 1;
    }
    //Dựng từ 1 phân số khác
    phanso::phanso(const phanso &clone){
        this->tuso = clone.tuso;
        this->mauso = clone.mauso;
    }

//Hàm huỷ
    phanso::~phanso(){
        //cout << "\nDa thu hoi bo nho.";
    }

//Hàm nhập
    phanso phanso::nhap(){
        int a, b;
        phanso p;

        cout << "Nhap tu so: ";
        cin >> a;
        cout << "Nhap mau so: ";
        cin >> b;

        this->tuso = a;
        this->mauso = b;

        p.tuso = a;
        p.mauso = b;

        return p;
    }

//Hàm xuất
    void phanso::xuat(phanso p){
        cout << p.tuso << "/" << p.mauso;
    }

//Hàm lấy tử số, mẫu số
    void phanso::laytuso(phanso p){
        cout << "Phan so "; phanso::xuat(p); cout << " co tu so la: " << p.tuso << endl;
    }

    void phanso::laymauso(phanso p){
        cout << "Phan so "; phanso::xuat(p); cout << " co mau so la: " << p.mauso << endl;
    }

//Gán giá trị mới cho tử số, mẫu số
    void phanso::gantuso(phanso p){
        int x;
        cout << "Nhap tu so moi: ";
        cin >> x;
        
        p.tuso = x;
        p.mauso = p.mauso;

        this->tuso = p.tuso;
        this->mauso = p.mauso;

        cout << "Ta co phan so moi: ";
        phanso::xuat(p);
        cout << endl;
    }
    void phanso::ganmauso(phanso p){
        int y;
        cout << "Nhap mau so moi: ";
        cin >> y;

        p.mauso = y;
        p.tuso = p.tuso;

        this->tuso = p.tuso;
        this->mauso = p.mauso;

        cout << "Ta co phan so moi: ";
        phanso::xuat(p);
        cout << endl;
    }

//Nghịch đảo, rút gọn
    void phanso::nghichdao(phanso p){
        int temp;
        temp = p.mauso;
        p.mauso = p.tuso;
        p.tuso = temp;

        this->tuso = p.tuso;
        this->mauso = p.mauso;

        cout << "Ta co phan so sau nghich dao: ";
        p.xuat(p);
        cout << endl;
    }

    int phanso::UCLN(phanso p){
        int a,b, tmp;

        a = p.tuso;
        b = p.mauso;

        while(b != 0) {
            tmp = a % b;
            a = b;
            b = tmp;
        }
        return a;
    }

    phanso phanso::rutgon(phanso p){
        int x = UCLN(p);
        p.tuso = p.tuso / x;
        p.mauso = p.mauso / x;

        this->tuso = p.tuso;
        this->mauso = p.mauso;
        return p;
    }

 //Các phép tính + - * / và so sánh  
    void phanso::cong(phanso p1, phanso p2){
        phanso p;
        p.tuso = p1.tuso*p2.mauso + p2.tuso*p1.mauso;
        p.mauso = p1.mauso*p2.mauso;
        p.rutgon(p);
        p.in(p);
    }

    phanso phanso::tru(phanso p1, phanso p2){
        phanso p;
        p.tuso = p1.tuso*p2.mauso - p2.tuso*p1.mauso;
        p.mauso = p1.mauso*p2.mauso;
        p.rutgon(p);
        return p;
    }
    
    void phanso::nhan(phanso p1, phanso p2){
        phanso p;
        p.tuso = p1.tuso*p2.tuso;
        p.mauso = p1.mauso*p2.mauso;
        p.rutgon(p);
        p.in(p);
    }

    void phanso::chia(phanso p1, phanso p2){
        phanso p;
        p.tuso = p1.tuso*p2.mauso;
        p.mauso = p1.mauso*p2.tuso;
        p.rutgon(p);
        p.in(p);
    }

    void phanso::sosanh(phanso p1, phanso p2){
        phanso p;
        float x;
        p = tru(p1, p2);
        x = p.tuso / p.mauso;

        if (x > 0){
            cout << "       Phan so 1 lon hon phan so 2." << endl;
        }else cout << "        Phan so 2 lon hon phan so 1." << endl;

    }

    //Hàm in
    void phanso::in(phanso p){
        cout << "       Ket qua: " << p.tuso << "/" << p.mauso << endl;
    }