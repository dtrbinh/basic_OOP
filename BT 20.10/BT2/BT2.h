
#ifndef BT2_h
#define BT2_h

class matrix{
    private:
        int n;
        //mảng 2 chiều cấp phát động        
        int **arr = new int*[n];

        friend ostream& operator << (ostream& out, matrix&A);
        friend istream& operator >> (istream& in, matrix& A);
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

#endif