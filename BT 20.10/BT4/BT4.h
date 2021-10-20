#ifndef BT4_H
#define BT4_H

class GroupInteger{

    private:
        int n;
        int *arr = new int[n];
        friend ostream& operator << (ostream& out, GroupInteger &a);
        friend istream& operator >> (istream& in, GroupInteger &a);
    public:
        GroupInteger();
        GroupInteger(int x[], int n);
        GroupInteger(const GroupInteger &obj_clone);
        ~GroupInteger();

        int& operator [] (int i);
        bool operator () (int i);
        const GroupInteger operator = (const GroupInteger &a);

};

istream& operator >> (istream& in, GroupInteger &a);
ostream& operator << (ostream& out, GroupInteger &a);

#endif