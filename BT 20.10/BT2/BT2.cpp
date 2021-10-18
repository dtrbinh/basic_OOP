#include<iostream>
using namespace std;
#include"BT2.h"

//Nhóm tạo huỷ
    matrix::matrix(){
        this->n = 0;
        int **arr = new int*[n];
        for(int i = 0; i < n; i++) arr[i] = new int[n];
        cout << "Da tao ma tran vuong cap n = 0.";
        this->arr;    }

    matrix::matrix(int n){
        this->n = n;
        for(int i = 0; i < n; i++) arr[i] = new int[n];

        for (int i = 0; i < n; i++)
            for(int j = 0; j < n; j++){
                arr[i][j] = 0;
            }
        this->arr;
    }

    matrix::matrix(const matrix &b){
        matrix a;
        this->n = b.n;
        this->arr = b.arr;
    }

    //Đa năng hoá toán tử
        //Nhập
        istream& operator >> (istream& in, matrix&a){
        cout << "Nhap cap ma tran: ";
        cin >> a.n;

        for(int i=0;i<a.n;i++)
        {
            for(int j=0;j<a.n;j++)
            {   
                cout << "a[" << i <<"][" << j << "]: ";
                cin >> a.arr[i][j];
            }
            cout << "\n";
        }

        return in;
        }

        //Xuất
        ostream& operator << (ostream& out, matrix &a){
        printf("\nMa tran vua nhap la:\n");
        for(int i = 0; i<a.n; i++)
        {
            for( int j = 0; j < a.n; j++)
            {
            cout << a.arr[i][j];
            }
            cout << "\n";
        }
        return out;
        }

