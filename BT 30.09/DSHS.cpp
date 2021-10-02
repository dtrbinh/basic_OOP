#include "DSHS.h"
#include "Hocsinh.h"
#include <iostream>
#include <iomanip>
using namespace std;
DSHS::DSHS(int m):n(m){
    data = new Hocsinh [n];
}
DSHS::DSHS(const DSHS &ds):n(ds.n){
    data = new Hocsinh [n];
    for(int i = 0; i<n; i++){
        data[i] = ds.data[i];
    }
}
void DSHS::Nhap(){
    for(int i=0; i<n; i++){
        cout<<"Nhập hoc sinh thu "<<i<<":"<<endl;
        this->data[i].Nhap();
    }
}
void DSHS::Xuat() const{
    for(int i=0;i<n; i++) {
        cout<<setw(3)<<i+1;
        data[i].Xuat();
    }
}