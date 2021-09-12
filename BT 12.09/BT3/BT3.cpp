#include<iostream>
#include<stdio.h>
#include<conio.h>

using namespace std;

typedef struct {
    int size;
    int a[1000];
}mang;

mang mang1;

//Nguyen mau ham
mang nhap();
void xuat(mang mangA);

void array_size(mang mangA);

void laypt( mang mangA);

void swap(int &x, int &y);
void sx_tangdan(mang mangA);
void sx_giamdan(mang mangA);

void search(int x, mang mangA);

void menu();
void dieukhien();

//-----------------------------------------
int main(){

    menu();
    dieukhien();

    return 0;
}

// Hỗ trợ thao tác
void menu(){
    system("cls");
    cout << "\nMENU TINH NANG" << endl;
    cout << "   1. Nhap du lieu vao mang (bat buoc)." << endl;
    cout << "   2. Xuat mang da nhap." << endl;
    cout << "   3. Tinh kich thuoc mang." << endl;
    cout << "   4. Lay phan tu tai mot vi tri trong mang." << endl;
    cout << "   5. Sap xep mang." << endl;
    cout << "   6. Tim vi tri xuat hien cua mot phan tu." << endl;
    cout << "   7. Ket thuc chuong trinh." << endl;
}

void dieukhien(){
    int q,d;
    cout << "\nLua chon: ";
    cin >> q;
    switch (q)
    {
    case 1:
        cout << "\nNhap du lieu vao mang." << endl;
        mang1 = nhap();

        cout << "\nNhan nut bat ky." << endl;
        getch();
        system("cls");
        break;

    case 2:
        cout << "\nXuat du lieu tu mang ra man hinh" << endl;
        xuat(mang1);

        cout << "\nNhan nut bat ky." << endl;
        getch();
        system("cls");

        break;
    
    case 3:
        cout << "\nTinh kich thuoc mang." << endl;
        array_size(mang1);

        cout << "\nNhan nut bat ky." << endl;
        getch();
        system("cls");

        break;
    
    case 4:

        laypt(mang1);
        

        cout << "\nNhan nut bat ky." << endl;
        getch();
        system("cls");
        break;
    
    case 5:

        cout << "\nSap xep mang da co theo thu tu tang dan hoac giam dan." << endl;
        cout << "   1. Tang dan" << endl;
        cout << "   2. Giam dan" << endl;
        cout << "   Lua chon: ";
        cin >> d;

        switch (d)
        {
        case 1:
            sx_tangdan(mang1);
            break;
        
        case 2:
            sx_giamdan(mang1);
            break;

        default:
            cout << "   Lua chon khong hop le. Hay nhap lai." << endl;
            getch();
            system("cls");
            menu();
            dieukhien();
            break;
        }

        cout << "\nNhan nut bat ky." << endl;
        getch();
        system("cls");
        break;

    case 6:
        int x;
        cout << "\nTim kiem cac vi tri xuat hien cua mot phan tu." << endl;
        cout << "   Nhap gia tri phan tu can tim kiem: ";
        cin >> x;
        search(x, mang1);
        cout << "\nNhan nut bat ky." << endl;
        getch();
        system("cls");
        break;

    case 7:
        cout << "\nXin cam on. Chuong trinh ket thuc!" << endl;
        exit(0);
        break;

    default:
        cout << "\nLua chon khong chinh xac. Moi nhap lai." << endl;
        break;
    }

    menu();
    dieukhien();
}

//Hàm nhập mảng
mang nhap() {
    mang mangA;

    do
	{
		cout << "   Cho biet so phan tu cua mang: ";
		cin >> mangA.size;
	}while(mangA.size <= 0);
	for(int i=0; i < mangA.size; i++)
	{
		cout << "       Gia tri phan tu a["<< i+1 << "]= " ;
		cin >> mangA.a[i];
	}

    return mangA;
}

//Hàm xuất mảng
void xuat(mang mangA) {
    cout << "Ta co mang: ";
    for (int i = 0; i < mangA.size; i++){
        cout << mangA.a[i] << " ";
    }
}

//Xuất kích thước mảng
void array_size(mang mangA){
    cout << "Kich thuoc cua mang da nhap la: " << mangA.size << endl;
}

//Lay phan tu tai mot vi tri
void laypt( mang mangA){
    int x,k;
    xuat(mangA);
    cout << "\n   Mang nay co " << mangA.size << " phan tu." << endl;
    cout << "   Chon vi tri muon lay mot phan tu: ";
    cin >> x;

    if( x <= mangA.size ) {
    k = mangA.a[x-1];
    cout << "   Da lay phan tu o vi tri thu " << x << ": " << k << endl;
    }else{
        cout << "   Phan tu muon lay khong hop le. Hay nhap lai." << endl;
        cout << "   Nhan nut bat ky." << endl;
        getch();
        system("cls");
        laypt(mangA);
    }
}

//SX Chọn trực tiếp

void swap(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}

//selection sort

void sx_tangdan(mang mangA)
{
    int i, j, pt_min;
    // Di chuyển ranh giới của mảng đã sắp xếp và chưa sắp xếp
    cout << "\nSap xep mang da cho theo thu tu tang dan." << endl;
    for (i = 0; i < mangA.size-1; i++)
    {
    // Tìm phần tử nhỏ nhất trong mảng chưa sắp xếp
    pt_min = i;
    for (j = i+1; j < mangA.size; j++)
        if (mangA.a[j] < mangA.a[pt_min])
        pt_min = j;
 
    // Đổi chỗ phần tử nhỏ nhất với phần tử đầu tiên
        swap(mangA.a[pt_min], mangA.a[i]);
    }
    xuat(mangA);
}

void sx_giamdan(mang mangA){

    int i, j, pt_max;
    // Di chuyển ranh giới của mảng đã sắp xếp và chưa sắp xếp
    cout << "\nSap xep mang da cho theo thu tu giam dan." << endl;
    for (i = 0; i < mangA.size-1; i++)
    {
    // Tìm phần tử lớn nhất trong mảng chưa sắp xếp
    pt_max = i;
    for (j = i+1; j < mangA.size; j++)
        if (mangA.a[j] > mangA.a[pt_max])
        pt_max = j;
 
    // Đổi chỗ phần tử nhỏ nhất với phần tử đầu tiên
        swap(mangA.a[pt_max], mangA.a[i]);
    }
    xuat(mangA);

}

//Tìm phần tử theo pp tuần tự
void search(int x, mang mangA){
    int j = 0;
    cout << "   Vi tri xuat hien phan tu " << x << " la: ";
    for( int i = 0; i < mangA.size; i++){
        if (x == mangA.a[i]){
            cout << i+1 << ", ";
            j++;
        }
    };
    if (j==0){
        cout << "\n   Phan tu " << x << " khong xuat hien trong mang!";
    }
}