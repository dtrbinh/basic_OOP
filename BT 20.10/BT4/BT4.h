#ifndef BT4_H
#define BT4_H

class GroupInteger{

    private:
        int n;
        int *arr = new int[n];
        friend ostream& operator << (ostream& out, GroupInteger &a);
        friend istream& operator >> (istream& in, GroupInteger &a);
        friend GroupInteger operator +(GroupInteger &a, GroupInteger &b);
        friend GroupInteger operator -(GroupInteger &a, GroupInteger &b);
        friend GroupInteger operator *(GroupInteger &a, GroupInteger &b);
    public:
        GroupInteger();
        GroupInteger(int x[], int n);
        GroupInteger(const GroupInteger &obj_clone);
        ~GroupInteger();
        int& operator [] (int i);
        bool operator () (int i);
        const GroupInteger operator = (const GroupInteger &a);
        GroupInteger operator +(GroupInteger &a);
        GroupInteger operator -(GroupInteger &a);
};

istream& operator >> (istream& in, GroupInteger &a);
ostream& operator << (ostream& out, GroupInteger &a);
GroupInteger operator +(GroupInteger &a, GroupInteger &b);
GroupInteger operator -(GroupInteger &a, GroupInteger &b);
GroupInteger operator *(GroupInteger &a, GroupInteger &b);

#endif