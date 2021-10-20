#ifndef BT3_H
#define BT3_H

class polynomial{
    private:
        int n=3;
        int *arr = new int[n];
        friend ostream& operator << (ostream& out, polynomial &a);
        friend istream& operator >> (istream& in, polynomial &a);
        friend polynomial operator + (polynomial &f1, polynomial &f2);
        friend polynomial operator - (polynomial &f1, polynomial &f2);
    public:
        polynomial();
        polynomial(int n);
        polynomial(int x[], int n);
        polynomial(const polynomial &obj_clone);
        ~polynomial();

        //in bac da thuc
        void inbacdathuc(polynomial &f);
        int sosanh(polynomial &a, polynomial &b);
        polynomial operator [] (polynomial &f);

};

istream& operator >> (istream& in, polynomial &a);
ostream& operator << (ostream& out, polynomial &a);

polynomial operator + (polynomial &f1, polynomial &f2);
polynomial operator - (polynomial &f1, polynomial &f2);


#endif