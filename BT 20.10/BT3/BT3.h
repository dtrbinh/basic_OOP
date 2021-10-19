#ifndef BT3_H
#define BT3_H

class polynomial{
    private:
        int n = 3;
        int *arr = new int[n];
        friend ostream& operator << (ostream& out, polynomial &a);
        friend istream& operator >> (istream& in, polynomial &a);
    public:
        polynomial();
        polynomial(int n);
        polynomial(int x[], int n);
        polynomial(const polynomial &obj_clone);
        ~polynomial();

};

istream& operator >> (istream& in, polynomial &a);
ostream& operator << (ostream& out, polynomial &a);

#endif