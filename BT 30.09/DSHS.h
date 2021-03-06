#ifndef DSHS_H
#define DSHS_H
#include "Hocsinh.h"
class DSHS{
        const int n; // số học sinh trong danh sách
        Hocsinh *data; //mảng động chứa ds học sinh
    public:
        DSHS(int m = 3); //default constructor
        DSHS(const DSHS &ds);
        ~DSHS() {
            delete [] data;
        }
        void Nhap();
        void Xuat() const;
};
#endif