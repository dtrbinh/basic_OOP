#include "Hocsinh.h"
struct DSHS
{
    Hocsinh Data;
    DSHS *next;
};
typedef DSHS *List;
void create(List &F);
List createb(List F);
void huy(List &a);
List &operator+(List &a,Hocsinh x);
List &operator-(List &a,Hocsinh x);
ostream &operator<<(ostream &out,const List &a);