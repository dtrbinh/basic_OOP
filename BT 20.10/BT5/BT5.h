#ifndef BT5_H
#define BT5_H

#include<string>
#include<iostream>
#include <iomanip>
using namespace std;
class Hocsinh
{
    private:
        string ht;
        double toan,van,DTB;
    public:
        Hocsinh(string ten ="",double t=0,double v=0);
        Hocsinh(const Hocsinh &x);
        ~Hocsinh();
        Hocsinh operator=(const Hocsinh &);
        friend bool operator>(const Hocsinh &,const Hocsinh &);
        friend bool operator<(const Hocsinh &,const Hocsinh &);
        friend bool operator==(const Hocsinh &,const Hocsinh &);
        friend bool operator>=(const Hocsinh &,const Hocsinh &);
        friend bool operator<=(const Hocsinh &,const Hocsinh &);
        friend bool operator!=(const Hocsinh &,const Hocsinh &);
        friend istream &operator>>(istream &in,Hocsinh &x);
        friend
         ostream &operator<<(ostream &out,const Hocsinh &x);
        
};
istream &operator>>(istream &in,Hocsinh &x)
{
    cout<<"Nhap ho va ten : ";
    in>>x.ht;
    cout<<"Nhap diem toan : ";
    in>>x.toan;
    cout<<"Nhap diem van : ";
    in>>x.van;
    x.DTB=(x.toan+x.van)/2;
    return in;
}
ostream &operator<<(ostream &out,const Hocsinh &x)
{
    out<<setw(40)<<x.ht<<setw(5)<<x.toan<<setw(5)<<x.van<<setw(8)<<x.DTB<<endl;
    return out;
}

#endif