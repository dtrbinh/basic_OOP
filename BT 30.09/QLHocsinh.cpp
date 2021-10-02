#include "Hocsinh.h"
#include <iostream>
#include "DSHS.h"
int main(){
    DSHS ds;
    ds.Nhap();
    cout<<"Danh sach hoc sinh vua nhap:"<<endl;
    ds.Xuat();
    return 0;
}