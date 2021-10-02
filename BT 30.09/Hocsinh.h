#ifndef HOCSINH_H
#define HOCSINH_H
#include <string>
using namespace std;
class Hocsinh{
        string ht;
        double toan, van, dtb;
        string xl;
        static int count;
    public:
        Hocsinh(string ten="", double t=0, double v=0);
        Hocsinh(const Hocsinh &x);
        void Nhap();
        void Xuat() const;
};
#endif