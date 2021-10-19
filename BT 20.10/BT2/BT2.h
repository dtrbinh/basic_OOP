
#ifndef BT2_h
#define BT2_h

class matrix{
    private:
        int n;
        //mảng 2 chiều cấp phát động        
        int **arr = new int*[n];

        friend ostream& operator << (ostream& out, matrix&A);
        friend istream& operator >> (istream& in, matrix& A);
        
        friend matrix operator +(matrix &a, matrix &b);
        friend matrix operator -(matrix &a, matrix &b); 
        friend matrix operator *(matrix &a, matrix &b);

    public:
        matrix();
        matrix(int n);
        matrix(int x[]);
        matrix(const matrix &b);

        ~matrix(){
            for (int i = 0; i < n; i++)
                delete []arr[i];
            delete []arr;
        };

};

        matrix operator +(matrix &a, matrix &b);
        matrix operator -(matrix &a, matrix &b); 
        matrix operator *(matrix &a, matrix &b);

#endif