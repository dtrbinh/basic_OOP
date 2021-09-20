#include <iostream>
using namespace std;

typedef struct {
    int *mang = new int[size];
    int size;
}mang;

mang mang1;

//Nguyen mau ham
mang nhap();
void xuat(mang mangA);
void swap(int &a, int &b);
bool ascending(int left, int right);
bool descending(int left, int right);

//pp Quicksort
void Sx_tangdan(mang mangA);
void Sx_giamdan(mang mangA);

//pp selectionsort
void selectionSort(mang mangA, bool (*comparisonFunc)(int, int));


int main()
{   
    mang mang1;
    mang1 = nhap();
    xuat(mang1);

    cout << "\n" << endl;

    //void (*pSx_tangdan)
    Sx_tangdan(mang1);
    cout << "\n" << endl;
    Sx_giamdan(mang1);
    cout << "\n" << endl;

    //selectionsort
    selectionSort(mang1, ascending);
    xuat(mang1);
    cout << "\n" << endl;
    selectionSort(mang1, descending);
    xuat(mang1);

	return 0;
}

mang nhap(){
    mang mang1;
    //nhập mảng
	cout << "Nhap kich thuoc mang: ";
	int size;
	cin >> mang1.size;
	int *mang = new int[mang1.size]; 
	for(int i=0; i < mang1.size; i++)
	{
		cout << "       Gia tri phan tu a["<< i+1 << "]= " ;
		cin >> mang1.mang[i];
	};
    delete[] mang;
    return mang1;
}

void xuat(mang mangA){
    //xuất mảng
    cout << "Ta co mang: ";
    for (int i = 0; i < mangA.size; i++){
        cout << mangA.mang[i] << " ";
    };
}

void swap(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}

void Sx_tangdan(mang mangA)
{
    int i, j, pt_min;
    // Di chuyển ranh giới của mảng đã sắp xếp và chưa sắp xếp
    cout << "\nSap xep mang da cho theo thu tu tang dan." << endl;
    for (i = 0; i < mangA.size-1; i++)
    {
    // Tìm phần tử nhỏ nhất trong mảng chưa sắp xếp
    pt_min = i;
    for (j = i+1; j < mangA.size; j++)
        if (mangA.mang[j] < mangA.mang[pt_min])
        pt_min = j;
 
    // Đổi chỗ phần tử nhỏ nhất với phần tử đầu tiên
        swap(mangA.mang[pt_min], mangA.mang[i]);
    }
    xuat(mangA);
}

void Sx_giamdan(mang mangA){

    int i, j, pt_max;
    // Di chuyển ranh giới của mảng đã sắp xếp và chưa sắp xếp
    cout << "\nSap xep mang da cho theo thu tu giam dan." << endl;
    for (i = 0; i < mangA.size-1; i++)
    {
    // Tìm phần tử lớn nhất trong mảng chưa sắp xếp
    pt_max = i;
    for (j = i+1; j < mangA.size; j++)
        if (mangA.mang[j] > mangA.mang[pt_max])
        pt_max = j;
 
    // Đổi chỗ phần tử nhỏ nhất với phần tử đầu tiên
        swap(mangA.mang[pt_max], mangA.mang[i]);
    }
    xuat(mangA);

}

bool ascending(int left, int right)
{
	return left > right;
}

bool descending(int left, int right)
{
	return left < right;
}

void selectionSort(mang mangA, bool (*comparisonFunc)(int, int))
{
	for (int i_start = 0; i_start < mangA.size; i_start++)
	{
		int minIndex = i_start;

		for (int i_current = i_start + 1; i_current < mangA.size; i_current++)
		{
			if (comparisonFunc(mangA.mang[minIndex], mangA.mang[i_current])) 
			{
				minIndex = i_current;
			}
		}

		swap(mangA.mang[i_start], mangA.mang[minIndex]);
	}
}