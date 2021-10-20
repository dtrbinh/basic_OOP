#include<iostream>
#include "BT5.h"
#include "QL.h"
using namespace std;
void create(List &F)
{
    F=NULL;
}
List createb(List F)
{
    List B,p=F,pp;
    create(B);
    List x=B;
    while(p!=NULL)
    {
        pp=new DSHS;
        pp->Data=p->Data;
        (*pp).next=NULL;
        if(x==NULL) x=pp;
        else 
        {
            x->next=pp;
            x=x->next;
        }
        p=p->next;
    }
    return B;
}
void huy(List &a)
{
    delete [] a;
    cout<<"Da huy!"<<endl;
}
List &operator+(List &a,Hocsinh x)
{
    List p=a,pp=new DSHS;
    pp->Data=x;pp->next=NULL;
    if(p == NULL) 
    {
        a=pp;
        return a;
    }
    while(p->next!=NULL && p!=NULL)
    {
        p=p->next;
    }
    p->next=pp;
    return a;
}
List &operator-(List &a,Hocsinh x)
{
    List p=a,t=a;
    while(p!=NULL)
    {
        if(p->Data==x)
        {
            if(p!=t) t->next=p->next;
            else a=a->next;
            delete p;    
        }
        t=p;
        p=p->next;
    }
    return a;
}
ostream &operator<<(ostream &out,const List &a)
{
    List p=a;
    while(p!=NULL)
    {
        out<<p->Data;
        p=p->next;
    }
    return out;
}