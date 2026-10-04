
// viet chuong trinh nhap vao mot khoang thoi gian tinh bang tong so giay ( so nguyen duong). Hay quy doi thoi gian do thanh dinh dang: so gio so phut va so giay con lai
// input: mot so nguyen duong duy nhat Tong_so_giay(>=0) Zum Besspiel: Input:3665
// output: in ra ket qua quy doi theo dinh dang: X giay doi thanh: H gio,M phut,S giay In ra: 3665 giay doi thanh : 1 gio 1 phut 5 giay

#include<iostream>
#include<string>
using namespace std;
int main() {
    int Tong_so_giay;
    cout << " Nhap vao tong so giay : " ; // ly do cout truoc cin vi nhu vay se xuat hien dong lenh: Nhap vao tong so giay , sau do moi tiep tuc nhap so giay de chuong trinh chay dung voi yeu cau bai toan
    cin >> Tong_so_giay;
   
    int gio = Tong_so_giay / 3600;
    int phut = (Tong_so_giay % 3600) / 60;
    int giay = Tong_so_giay % 60;
    cout << gio << "gio," << phut << "phut," << giay << "giay," << endl;
    return 0;
}