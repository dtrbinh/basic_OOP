#include<iostream>
using namespace std;
#include"BT3.h"

polynomial::polynomial(){
    this->n = 3;
    for(int i = 0; i<n; i++) this->arr[i] = 0;
}

polynomial::polynomial(int n){
    
    for(int i = 0; i<n; i++) this->arr[i] = 0;
    this->n = n;
}

polynomial::polynomial(int x[],int n){
    this->n = n;
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
        cout << "Nhap bac da thuc: ";
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
        for(int i = 0; i < a.n ; i++)
        {
            cout << a.arr[i] << "x^" << k-- << "+ ";

        }
        return out;
        }