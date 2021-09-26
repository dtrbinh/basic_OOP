#include<iostream>
#include"BT2.h"
#include<math.h>

using namespace std;

//Hàm dựng
    //Mặc định số phức bằng 0
    complex::complex(){

        this->phanthuc = 0;
        this->phanao = 0;
    }
    //Dựng từ phần thực, ảo cho trước
    complex::complex(int a, int b){
        this->phanthuc = a;
        this->phanao = b;
    }
    //Dựng từ giá trị thực cho trước
    complex::complex(int n){
        this->phanthuc = n;
        this->phanao = 0;
    }
    //Dựng từ 1 số phức khác
    complex::complex(const complex &clone){
        this->phanthuc = clone.phanthuc;
        this->phanao = clone.phanao;
    }

//Hàm huỷ
    complex::~complex(){
        //cout << "\nDa thu hoi bo nho.";
    }

//Hàm nhập
    complex complex::nhap(){
        int a, b;
        complex z;

        cout << "       Nhap phan thuc: ";
        cin >> a;
        cout << "       Nhap phan ao: ";
        cin >> b;

        this->phanthuc = a;
        this->phanao = b;

        z.phanthuc = a;
        z.phanao = b;

        return z;
    }

//Hàm xuất
    void complex::xuat(complex z){
        if (z.phanao >= 0){
            cout << z.phanthuc << "+" << z.phanao << "i";
        }else {
            cout << z.phanthuc << z.phanao << "i";
        }
    }

//Hàm lấy phần thực, phần ảo
    void complex::layphanthuc(complex z){
        cout << "       So phuc "; complex::xuat(z); cout << " co phan thuc la: " << z.phanthuc << endl;
    }

    void complex::layphanao(complex z){
        cout << "       So phuc "; complex::xuat(z); cout << " co phan ao la: " << z.phanao << endl;
    }

//Gán giá trị mới 
    void complex::ganphanthuc(complex z){
        int x;
        cout << "Nhap phan thuc moi: ";
        cin >> x;
        
        z.phanthuc = x;
        z.phanao = z.phanao;

        this->phanthuc = z.phanthuc;
        this->phanao = z.phanao;

        cout << "Ta co so phuc moi: ";
        complex::xuat(z);
        cout << endl;
    }
    void complex::ganphanao(complex z){
        int y;
        cout << "Nhap phan ao moi: ";
        cin >> y;

        z.phanao = y;
        z.phanthuc = z.phanthuc;

        this->phanthuc = z.phanthuc;
        this->phanao = z.phanao;

        cout << "Ta co so phuc moi: ";
        complex::xuat(z);
        cout << endl;
    }

//Hàm tính module
    void complex::module(complex z){
        double x;
        x = sqrt(z.phanthuc*z.phanthuc + z.phanao*z.phanao);
        cout << "   Module cua so phuc "; z.xuat(z);
        cout << " la: " << x << endl;
    }

//Hàm các phép tính + - * / và so sánh số phức
    void complex::cong(complex z1, complex z2){
        complex z;
        z.phanthuc = z1.phanthuc + z2.phanthuc;
        z.phanao = z1.phanao + z2.phanao;
        z.in(z);
    }
    
    void complex::tru(complex z1, complex z2){
        complex z;
        z.phanthuc = z1.phanthuc - z2.phanthuc;
        z.phanao = z1.phanao - z2.phanao;
        z.in(z);
    }

    void complex::nhan(complex z1, complex z2){
        
    }

    void complex::chia(complex z1, complex z2){
        
    }

    void complex::sosanh(complex z1, complex z2){
        
    }

//Hàm in
    void complex::in(complex z){
        if (z.phanao >= 0){
            cout << "      Ket qua: " << z.phanthuc << "+" << z.phanao << "i" << endl;
        }else {
            cout << "      Ket qua: " << z.phanthuc << z.phanao << "i" << endl;
        }
    }