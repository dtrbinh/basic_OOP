#include<iostream>
using namespace std;
#include"BT3.h"

polynomial::polynomial(){
    this->n = 3;
    for(int i = 0; i<n; i++) this->arr[i] = 0;
}

polynomial::polynomial(int n){
    this->n = n;
    for(int i = 0; i<n; i++) this->arr[i] = 0;

}

polynomial::polynomial(int x[],int n){
    this->n;
    for(int i = 0; i<n; i++) this->arr[i] = x[i];
}
polynomial::polynomial(const polynomial &clone_obj){
    this->n = clone_obj.n;
    this->arr = clone_obj.arr;

}

polynomial::~polynomial(){
    delete []arr;
    //cout << "Da thu hoi bo nhơ!";
}

//Nhập
   istream& operator >> (istream& in, polynomial &a){
        
        int n;
        cout << "\nNhap bac da thuc: ";
        cin >> a.n;
        n = a.n;
        cout << "Nhap he so da thuc:";
        for (int i = 0; i <= (a.n); i++)
            {

                cout << "a[" << n <<"] = ";
                cin >> a.arr[i];
                n--;
            }
        return in;
    }

//Xuất
    ostream& operator << (ostream& out, polynomial &a){
        int k = a.n;
        for(int i = 0; i <= a.n ; i++)
        {   
            if(k==0) {cout << a.arr[i]; }
             else cout << a.arr[i] << "x^" << k-- << "+ ";

        }
        return out;
        }

    void polynomial::inbacdathuc(polynomial &f){
        cout << "\nBac da thuc la: " << f.n;
}
    int polynomial::sosanh(polynomial &a, polynomial &b){
        if (a.n >= b.n) return a.n; 
            else return b.n;
    }

//Toán tử
    polynomial operator + (polynomial &f1, polynomial &f2){
        f1.n = f1.sosanh(f1, f2);
        polynomial f(f1.n);
        int j = 0;
        if(f1.n > f2.n){
            int k = f1.n - f2.n;
            f.n = f1.n;
            for (int i = 0; i < k; i++){
                f.arr[i] = f1.arr[i];
                
            };
            for (int i = k; i <= f1.n; i++){
                f.arr[i] = f1.arr[i] + f2.arr[j];
                j++;

            };
        }else if( f1.n < f2.n){
            int k = f2.n - f1.n;
            f.n = f2.n;
            for (int i = 0; i < k; i++){
                f.arr[i] = f2.arr[i];
            };
            for (int i = k; i <= f2.n; i++){
                f.arr[i] = f1.arr[i] + f2.arr[j];
                j++;
            };
        }else if(f1.n == f2.n){
            for (int i = 0; (i <= f2.n); i++){
                f.arr[i] = f1.arr[i] + f2.arr[i];
            }
        }
        return f;
    }

    polynomial operator - (polynomial &f1, polynomial &f2){
        f1.n = f1.sosanh(f1, f2);
        polynomial f(f1.n);
        int j = 0;
        for( int i = 0; i < f2.n; i++){
            f2.arr[i] = -f2.arr[i];
        }
        if(f1.n > f2.n){
            int k = f1.n - f2.n;
            f.n = f1.n;
            for (int i = 0; i < k; i++){
                f.arr[i] = f1.arr[i];
                
            };
            for (int i = k; i <= f1.n; i++){
                f.arr[i] = f1.arr[i] + f2.arr[j];
                j++;

            };
        }else if( f1.n < f2.n){
            int k = f2.n - f1.n;
            f.n = f2.n;
            for (int i = 0; i < k; i++){
                f.arr[i] = f2.arr[i];
            };
            for (int i = k; i <= f2.n; i++){
                f.arr[i] = f1.arr[i] + f2.arr[j];
                j++;
            };
        }else if(f1.n == f2.n){
            for (int i = 0; (i <= f2.n); i++){
                f.arr[i] = f1.arr[i] + f2.arr[i];
            }
        }
        return f;
    }

    int polynomial::operator [] (polynomial &f){
        int i = 0;
        cout << "Chọn phần tử cần lấy";
        cin >> i;
        cout << "f[" << i << "] = " << f.arr[i];
        return f.arr[i];
    }

    float polynomial::operator () (polynomial &f){
        float Z;
        
        return 0;
    }

    /*

                              _
                               _ooOoo_
                              o8888888o
                              88" . "88
                              (| -_- |)
                              O\  =  /O
                           ____/`---'\____
                         .'  \\|     |//  `.
                        /  \\|||  :  |||//  \
                       /  _||||| -:- |||||_  \
                       |   | \\\  -  /'| |   |
                       | \_|  `\`---'//  |_/ |
                       \  .-\__ `-. -'__/-.  /
                     ___`. .'  /--.--\  `. .'___
                  ."" '<  `.___\_<|>_/___.' _> \"".
                 | | :  `- \`. ;`. _/; .'/ /  .' ; |
                 \  \ `-.   \_\_`. _.'_/_/  -' _.' /
       ===========`-.`___`-.__\ \___  /__.-'_.'_.-'================
    no bugs pls nooo
    */