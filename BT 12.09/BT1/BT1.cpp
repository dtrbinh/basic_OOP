#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<conio.h>
#include<windows.h>

using namespace std;

//kiểu cấu trúc
typedef struct {
    int nam_nhuan;
    int day;
    int thu, ngay, thang, nam;
}date;

date date1,date2;
const int so_ngay_moi_thang[12]
    = { 31, 28, 31, 30, 31, 30,
       31, 31, 30, 31, 30, 31 };

//Nguyên mẫu hàm
date input();
void output(date dateA);
date dayofweek(date dateA);

date tang_giam(date dateA);
date tang(date dateA);
date giam(date dateA);


int dem_so_ngay_nhuan(date dateA);
int dem_tong_so_ngay(date dateA);
int sosanh(date dateA, date dateB);

void menu();
void dieukhien();
//--------------------------------------

int main(){
    system("cls");
    menu();
    dieukhien();

    cout << "\nKet thuc chuong trinh." << endl;
    return 0;
}

//nhập ngày tháng năm, kiểm tra tồn tại
date input(){
    date date1;
    string DATE,ngay,thang,nam;
    int lg;

    cout << "   Nhap ngay, thang, nam theo dinh dang dd/mm/yyyy: "; cin >> DATE;
    lg = DATE.length();

    if (lg == 10){
    	
    	ngay = DATE.substr(0,2);
    	thang = DATE.substr(3,5);
    	nam = DATE.substr(6,10);
    	
		date1.ngay = stoi(ngay);
		date1.thang = stoi(thang);
        date1.nam = stoi(nam);

        if (( date1.ngay > 0) && (date1.ngay <32) && (date1.thang >0) && (date1.thang <13))
        return date1;
            else {
                cout << "   \nNgay, thang khong ton tai. Xin moi nhap lai." << endl;
                date1 = input();
                return date1;
        }
    }
    else {
        cout << "   \nNhap sai dinh dang. Xin moi nhap lai." << endl;
        date1 = input();
        return date1; 
    };
}

//xuất dữ liệu ngày tháng năm
void output(date dateA){
	cout << "   Ket qua:" << " ngay " << dateA.ngay << " thang " << dateA.thang << " nam " << dateA.nam << endl;
}

//Tính ngày trong tuần
date dayofweek(date dateA){

    int day;

    cout << "\nKiem tra nam nhuan hay khong...";
    if (((dateA.nam % 4)==0) && ((dateA.nam % 100)!=0)){
        cout << "Day la nam nhuan." <<endl;
        dateA.nam_nhuan = 1;
        }
        else if ((dateA.nam % 400)==0){
        cout << "Day la nam nhuan." <<endl;
        dateA.nam_nhuan = 1;
        }
        else {
        cout << "Day la nam khong nhuan." <<endl;
        dateA.nam_nhuan = 0;

        }

    day = ((dateA.ngay + ((153 * (dateA.thang + 12 * ((14 - dateA.thang) / 12) - 3) + 2) / 5) +
    (365 * (dateA.nam + 4800 - ((14 - dateA.thang) / 12))) +
    ((dateA.nam + 4800 - ((14 - dateA.thang) / 12)) / 4) - 
    ((dateA.nam + 4800 - ((14 - dateA.thang) / 12)) / 100) + 
    ((dateA.nam + 4800 - ((14 - dateA.thang) / 12)) / 400)  - 32045) % 7) + 1;

    switch (day)
    {
    case 0:
        cout << "   Ngay " << dateA.ngay << " thang " << dateA.thang << " nam " << dateA.nam << " la Chu Nhat." << endl;
        break;

    case 1:
        cout << "   Ngay " << dateA.ngay << " thang " << dateA.thang << " nam " << dateA.nam << " la Thu Hai." << endl;
        break;

    case 2:
        cout << "   Ngay " << dateA.ngay << " thang " << dateA.thang << " nam " << dateA.nam << " la Thu Ba." << endl;
        break;

    case 3:
        cout << "   Ngay " << dateA.ngay << " thang " << dateA.thang << " nam " << dateA.nam << " la Thu Tu." << endl;
        break;

    case 4:
        cout << "   Ngay " << dateA.ngay << " thang " << dateA.thang << " nam " << dateA.nam << " la Thu Nam." << endl;
        break;

    case 5:
        cout << "   Ngay " << dateA.ngay << " thang " << dateA.thang << " nam " << dateA.nam << " la Thu Sau." << endl;
        break;

    case 6:
       cout << "    Ngay " << dateA.ngay << " thang " << dateA.thang << " nam " << dateA.nam << " la Thu Bay." << endl;
        break;
    
    default:
        cout << "   Ao ma Lazada. Khong co thu nay.";
        break;
    }

    return dateA;
}

//Tăng, giảm một ngày
date tang_giam(date dateA){ 
    int n;

    cout << "\nTang hoac giam 1 ngay:" << endl;
    cout << "   1. Tang 1 ngay." << endl;
    cout << "   2. Giam 1 ngay." << endl;
    cout << "   Lua chon: ";
    cin >> n;

    switch (n)
    {
    case 1:
        dateA = tang(dateA);
        break;
    
    case 2:
        dateA = giam(dateA);
        break;
    
    default:
        cout << "   Nhap sai lua chon. Moi nhap lai.";
        tang_giam(dateA);
        break;
    }
    return dateA;
}

date tang(date dateB){
    switch (dateB.nam_nhuan)
    {
    case 1:
        //tháng 1
        if (dateB.thang == 1){
            if (dateB.ngay < 31){
                dateB.ngay = dateB.ngay + 1;
            }else if (dateB.ngay == 31){
                dateB.ngay = 01;
                dateB.thang = 02;
            };
            break;
        };

        //tháng 2
        if (dateB.thang == 2){
            if (dateB.ngay < 29){
                dateB.ngay = dateB.ngay + 1;
            }else if (dateB.ngay == 29){
                dateB.ngay = 01;
                dateB.thang = 03;
            };
            break;
        };

        //tháng 3
        if (dateB.thang == 3){
            if (dateB.ngay < 31){
                dateB.ngay = dateB.ngay + 1;
            }else if (dateB.ngay == 31){
                dateB.ngay = 01;
                dateB.thang = 04;
            };
            break;
        };

        //tháng 4
        if (dateB.thang == 4){
            if (dateB.ngay < 30){
                dateB.ngay = dateB.ngay + 1;
            }else if (dateB.ngay == 30){
                dateB.ngay = 01;
                dateB.thang = 05;
            };
            break;
        };

        //tháng 5
        if (dateB.thang == 5){
            if (dateB.ngay < 31){
                dateB.ngay = dateB.ngay + 1;
            }else if (dateB.ngay == 31){
                dateB.ngay = 01;
                dateB.thang = 06;
            };
            break;
        };

        //tháng 6
        if (dateB.thang == 4){
            if (dateB.ngay < 30){
                dateB.ngay = dateB.ngay + 1;
            }else if (dateB.ngay == 30){
                dateB.ngay = 01;
                dateB.thang = 07;
            };
            break;
        };

        //tháng 7
        if (dateB.thang == 7){
            if (dateB.ngay < 31){
                dateB.ngay = dateB.ngay + 1;
            }else if (dateB.ngay == 31){
                dateB.ngay = 1;
                dateB.thang = 8;
            };
            break;
        };

        //tháng 8
        if (dateB.thang == 8){
            if (dateB.ngay < 31){
                dateB.ngay = dateB.ngay + 1;
            }else if (dateB.ngay == 31){
                dateB.ngay = 1;
                dateB.thang = 9;
            };
            break;
        };

        //tháng 9
        if (dateB.thang == 9){
            if (dateB.ngay < 30){
                dateB.ngay = dateB.ngay + 1;
            }else if (dateB.ngay == 30){
                dateB.ngay = 01;
                dateB.thang = 10;
            };
            break;
        };

        //tháng 10
        if (dateB.thang == 10){
            if (dateB.ngay < 31){
                dateB.ngay = dateB.ngay + 1;
            }else if (dateB.ngay == 31){
                dateB.ngay = 01;
                dateB.thang = 11;
            };
            break;
        };

        //tháng 11
        if (dateB.thang == 11){
            if (dateB.ngay < 30){
                dateB.ngay = dateB.ngay + 1;
            }else if (dateB.ngay == 30){
                dateB.ngay = 01;
                dateB.thang = 12;
            };
            break;
        };

        //tháng 12
        if (dateB.thang == 12){
            if (dateB.ngay < 31){
                dateB.ngay = dateB.ngay + 1;
            }else if (dateB.ngay == 31){
                dateB.ngay = 01;
                dateB.thang = 01;
                dateB.nam = dateB.nam + 1;
            };
            break;
        };
        
        break;
    
    case 0:
        //tháng 1
        if (dateB.thang == 1){
            if (dateB.ngay < 31){
                dateB.ngay = dateB.ngay + 1;
            }else if (dateB.ngay == 31){
                dateB.ngay = 01;
                dateB.thang = 02;
            }
        };

        //tháng 2
        if (dateB.thang == 2){
            if (dateB.ngay < 28){
                dateB.ngay = dateB.ngay + 1;
            }else if (dateB.ngay == 28){
                dateB.ngay = 01;
                dateB.thang = 03;
            }
        };

        //tháng 3
        if (dateB.thang == 3){
            if (dateB.ngay < 31){
                dateB.ngay = dateB.ngay + 1;
            }else if (dateB.ngay == 31){
                dateB.ngay = 01;
                dateB.thang = 04;
            }
        };

        //tháng 4
        if (dateB.thang == 4){
            if (dateB.ngay < 30){
                dateB.ngay = dateB.ngay + 1;
            }else if (dateB.ngay == 30){
                dateB.ngay = 01;
                dateB.thang = 05;
            }
        };

        //tháng 5
        if (dateB.thang == 5){
            if (dateB.ngay < 31){
                dateB.ngay = dateB.ngay + 1;
            }else if (dateB.ngay == 31){
                dateB.ngay = 01;
                dateB.thang = 06;
            }
        };

        //tháng 6
        if (dateB.thang == 4){
            if (dateB.ngay < 30){
                dateB.ngay = dateB.ngay + 1;
            }else if (dateB.ngay == 30){
                dateB.ngay = 01;
                dateB.thang = 07;
            }
        };

        //tháng 7
        if (dateB.thang == 7){
            if (dateB.ngay < 31){
                dateB.ngay = dateB.ngay + 1;
            }else if (dateB.ngay == 31){
                dateB.ngay = 1;
                dateB.thang = 8;
            }
        };

        //tháng 8
        if (dateB.thang == 8){
            if (dateB.ngay < 31){
                dateB.ngay = dateB.ngay + 1;
            }else if (dateB.ngay == 31){
                dateB.ngay = 1;
                dateB.thang = 9;
            }
        };

        //tháng 9
        if (dateB.thang == 9){
            if (dateB.ngay < 30){
                dateB.ngay = dateB.ngay + 1;
            }else if (dateB.ngay == 30){
                dateB.ngay = 01;
                dateB.thang = 10;
            }
        };

        //tháng 10
        if (dateB.thang == 10){
            if (dateB.ngay < 31){
                dateB.ngay = dateB.ngay + 1;
            }else if (dateB.ngay == 31){
                dateB.ngay = 01;
                dateB.thang = 11;
            }
        };

        //tháng 11
        if (dateB.thang == 11){
            if (dateB.ngay < 30){
                dateB.ngay = dateB.ngay + 1;
            }else if (dateB.ngay == 30){
                dateB.ngay = 01;
                dateB.thang = 12;
            }
        };

        //tháng 12
        if (dateB.thang == 12){
            if (dateB.ngay < 31){
                dateB.ngay = dateB.ngay + 1;
            }else if (dateB.ngay == 31){
                dateB.ngay = 01;
                dateB.thang = 01;
                dateB.nam = dateB.nam + 1;
            }
        };
        
        break;
    
    default:
        cout << "Bug nay la qua." << endl;
        break;
    }
    return dateB;
}

date giam(date dateB){

    switch (dateB.nam_nhuan)
    {
    case 1:
        //tháng 1
        if (dateB.thang == 1){
            if ((dateB.ngay < 32) && (dateB.ngay > 1)){
                dateB.ngay = dateB.ngay - 1;
            }else if (dateB.ngay == 1){
                dateB.ngay = 31;
                dateB.thang = 12;
            };
            break;
        };

        //tháng 2
        if (dateB.thang == 2){
            if ((dateB.ngay < 30) && (dateB.ngay > 1)){
                dateB.ngay = dateB.ngay - 1;
            }else if (dateB.ngay == 1){
                dateB.ngay = 31;
                dateB.thang = 1;
            };
            break;
        };

        //tháng 3
        if (dateB.thang == 3){
            if ((dateB.ngay < 32) && (dateB.ngay > 1)){
                dateB.ngay = dateB.ngay - 1;
            }else if (dateB.ngay == 1){
                dateB.ngay = 29;
                dateB.thang = 2;
            };
            break;
        };

        //tháng 4
        if (dateB.thang == 4){
            if ((dateB.ngay < 31) && (dateB.ngay > 1)){
                dateB.ngay = dateB.ngay - 1;
            }else if (dateB.ngay == 1){
                dateB.ngay = 31;
                dateB.thang = 3;
            };
            break;
        };

        //tháng 5
        if (dateB.thang == 5){
            if ((dateB.ngay < 32) && (dateB.ngay > 1)){
                dateB.ngay = dateB.ngay - 1;
            }else if (dateB.ngay == 1){
                dateB.ngay = 30;
                dateB.thang = 4;
            };
            break;
        };

        //tháng 6
        if (dateB.thang == 6){
            if ((dateB.ngay < 31) && (dateB.ngay > 1)){
                dateB.ngay = dateB.ngay - 1;
            }else if (dateB.ngay == 1){
                dateB.ngay = 31;
                dateB.thang = 5;
            };
            break;
        };

        //tháng 7
        if (dateB.thang == 7){
            if ((dateB.ngay < 32) && (dateB.ngay > 1)){
                dateB.ngay = dateB.ngay - 1;
            }else if (dateB.ngay == 1){
                dateB.ngay = 30;
                dateB.thang = 6;
            };
            break;
        };

        //tháng 8
        if (dateB.thang == 8){
            if ((dateB.ngay < 32) && (dateB.ngay > 1)){
                dateB.ngay = dateB.ngay - 1;
            }else if (dateB.ngay == 1){
                dateB.ngay = 31;
                dateB.thang = 7;
            };
            break;
        };

        //tháng 9
        if (dateB.thang == 9){
            if ((dateB.ngay < 31) && (dateB.ngay > 1)){
                dateB.ngay = dateB.ngay - 1;
            }else if (dateB.ngay == 1){
                dateB.ngay = 31;
                dateB.thang = 8;
            };
            break;
        };

        //tháng 10
        if (dateB.thang == 10){
            if ((dateB.ngay < 32) && (dateB.ngay > 1)){
                dateB.ngay = dateB.ngay - 1;
            }else if (dateB.ngay == 1){
                dateB.ngay = 30;
                dateB.thang = 9;
            };
            break;
        };

        //tháng 11
        if (dateB.thang == 11){
            if ((dateB.ngay < 31) && (dateB.ngay > 1)){
                dateB.ngay = dateB.ngay - 1;
            }else if (dateB.ngay == 1){
                dateB.ngay = 31;
                dateB.thang = 10;
            };
            break;
        };

        //tháng 12
        if (dateB.thang == 11){
            if ((dateB.ngay < 32) && (dateB.ngay > 1)){
                dateB.ngay = dateB.ngay - 1;
            }else if (dateB.ngay == 1){
                dateB.ngay = 30;
                dateB.thang = 11;
            };
            break;
        };

        break;
    
    case 0:
        //tháng 1
        if (dateB.thang == 1){
            if ((dateB.ngay < 32) && (dateB.ngay > 1)){
                dateB.ngay = dateB.ngay - 1;
            }else if (dateB.ngay == 1){
                dateB.ngay = 31;
                dateB.thang = 12;
            };
            break;
        };

        //tháng 2
        if (dateB.thang == 2){
            if ((dateB.ngay < 29) && (dateB.ngay > 1)){
                dateB.ngay = dateB.ngay - 1;
            }else if (dateB.ngay == 1){
                dateB.ngay = 31;
                dateB.thang = 1;
            };
            break;
        };

        //tháng 3
        if (dateB.thang == 3){
            if ((dateB.ngay < 32) && (dateB.ngay > 1)){
                dateB.ngay = dateB.ngay - 1;
            }else if (dateB.ngay == 1){
                dateB.ngay = 28;
                dateB.thang = 2;
            };
            break;
        };

        //tháng 4
        if (dateB.thang == 4){
            if ((dateB.ngay < 31) && (dateB.ngay > 1)){
                dateB.ngay = dateB.ngay - 1;
            }else if (dateB.ngay == 1){
                dateB.ngay = 31;
                dateB.thang = 3;
            };
            break;
        };

        //tháng 5
        if (dateB.thang == 5){
            if ((dateB.ngay < 32) && (dateB.ngay > 1)){
                dateB.ngay = dateB.ngay - 1;
            }else if (dateB.ngay == 1){
                dateB.ngay = 30;
                dateB.thang = 4;
            };
            break;
        };

        //tháng 6
        if (dateB.thang == 6){
            if ((dateB.ngay < 31) && (dateB.ngay > 1)){
                dateB.ngay = dateB.ngay - 1;
            }else if (dateB.ngay == 1){
                dateB.ngay = 31;
                dateB.thang = 5;
            };
            break;
        };

        //tháng 7
        if (dateB.thang == 7){
            if ((dateB.ngay < 32) && (dateB.ngay > 1)){
                dateB.ngay = dateB.ngay - 1;
            }else if (dateB.ngay == 1){
                dateB.ngay = 30;
                dateB.thang = 6;
            };
            break;
        };

        //tháng 8
        if (dateB.thang == 8){
            if ((dateB.ngay < 32) && (dateB.ngay > 1)){
                dateB.ngay = dateB.ngay - 1;
            }else if (dateB.ngay == 1){
                dateB.ngay = 31;
                dateB.thang = 7;
            };
            break;
        };

        //tháng 9
        if (dateB.thang == 9){
            if ((dateB.ngay < 31) && (dateB.ngay > 1)){
                dateB.ngay = dateB.ngay - 1;
            }else if (dateB.ngay == 1){
                dateB.ngay = 31;
                dateB.thang = 8;
            };
            break;
        };

        //tháng 10
        if (dateB.thang == 10){
            if ((dateB.ngay < 32) && (dateB.ngay > 1)){
                dateB.ngay = dateB.ngay - 1;
            }else if (dateB.ngay == 1){
                dateB.ngay = 30;
                dateB.thang = 9;
            };
            break;
        };

        //tháng 11
        if (dateB.thang == 11){
            if ((dateB.ngay < 31) && (dateB.ngay > 1)){
                dateB.ngay = dateB.ngay - 1;
            }else if (dateB.ngay == 1){
                dateB.ngay = 31;
                dateB.thang = 10;
            };
            break;
        };

        //tháng 12
        if (dateB.thang == 11){
            if ((dateB.ngay < 32) && (dateB.ngay > 1)){
                dateB.ngay = dateB.ngay - 1;
            }else if (dateB.ngay == 1){
                dateB.ngay = 30;
                dateB.thang = 11;
            };
            break;
        };

        break;
    
    default:
        cout << "Bug nay la qua." << endl;
        break;
    }
    return dateB;
}

//hỗ trợ thao tác
void menu(){
    cout << "\nMENU TINH NANG" << endl;
    cout << "   1. Nhap du lieu ngay I, II (bat buoc)." << endl;
    cout << "   2. Xac dinh thu trong tuan." << endl;
    cout << "   3. Tang, giam 1 ngay." << endl;
    cout << "   4. So sanh ngay I va ngay II." << endl;
    cout << "   5. Ket thuc chuong trinh." << endl;
}

void dieukhien(){
    int q,d;
    cout << "Lua chon: ";
    cin >> q;
    switch (q)
    {
    case 1:
        cout << "\nNhap du lieu ngay I." << endl;
        date1 = input();
        cout << "\nNhap du lieu ngay II." << endl;
        date2 = input();
        cout << "\n" << endl;
        output(date1);
        output(date2);

        cout << "\nNhan nut bat ky." << endl;
        getch();
        system("cls");
        break;

    case 2:
        date1 = dayofweek(date1);
        date2 = dayofweek(date2);

        cout << "\nNhan nut bat ky." << endl;
        getch();
        system("cls");

        break;
    
    case 3:
        cout << "\nDoi voi ngay I." << endl;
        date1 = tang_giam(date1);
        output(date1);

        cout << "\nDoi voi ngay II." << endl;
        date2 = tang_giam(date2);
        output(date2);

        cout << "\nNhan nut bat ky." << endl;
        getch();
        system("cls");

        break;
    
    case 4:

        d = sosanh(date1, date2);

        //cho đẹp
        cout << "\nDang so sanh";
        Sleep(100); cout <<".";
        Sleep(100); cout <<".";
        Sleep(100); cout <<".";

        if (d > 0){
            cout << "   \nNgay I gan hien tai hon va cach ngay II la " << d << " ngay." << endl;
        };
        if (d < 0)
        {
            cout << "   \nNgay II gan hien tai hon va cach ngay I la " << abs(d) << " ngay." << endl;
        };
        if (d == 0){
            cout << "   \nHai ngay da nhap trung nhau!" << endl;
        }
        

        cout << "\nNhan nut bat ky." << endl;
        getch();
        system("cls");
        break;
    
    case 5:
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

//So sánh 2 ngày

//đếm số ngày nhuận đã có từ mốc thời gian A
int dem_so_ngay_nhuan(date dateA)
{
    int nam = dateA.nam;
 
    if (dateA.thang <= 2)
        nam--;

    return nam / 4
           - nam / 100
           + nam / 400;
}

int dem_tong_so_ngay(date dateA){
    long int n = dateA.nam * 365 + dateA.ngay;

    for (int i = 0; i < dateA.thang - 1; i++)
        n += so_ngay_moi_thang[i];

    n += dem_so_ngay_nhuan(dateA);
    return n;
}

int sosanh(date dateA, date dateB){

    int n1 = dem_tong_so_ngay(dateA);
    int n2 = dem_tong_so_ngay(dateB);
    int n3 = n1 - n2;

    //debug
    //cout << n3;

    return n3;

}

