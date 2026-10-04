// viet chuong trinh tinh chi so BMI su dung cac bien logic(bool) de kiem tra xem nguoi do thuoc nhom nao
// Nhe can: BMI < 18,5
// Binh thuong : 18,5 <= BMI <24,9
// Nang can: BMI >=24,9
// BMI= CAN NANG/( CHIEU CAO)^2



#include<iostream>
#include<string>
using namespace std;
int main() {
    double can_nang,chieu_cao;
    cout << "Can nang(kg) : " << endl;
    cin >> can_nang;
    cout << "Chieu cao(m) : " << endl;
    cin >> chieu_cao;
    
    double BMI = can_nang/(chieu_cao * chieu_cao);    // cong thuc tinh chi so BMI
    cout << "Chi so BMI cua ban la : " << BMI << endl;      // in ra cau dan chi so BMI truoc de cho nguoi doc hieu duoc
    cout << "Ket qua la : " << endl;

    bool gay = BMI < 18.5;
    bool binh_thuong = (BMI >= 18.5) && (BMI < 24.9);
    bool beo = BMI >= 24.9;

    cout << boolalpha; // cau lenh nay de in ra true/false thay vi in ra gia tri 1/0
    cout << "- Nhe can : " << gay << endl;
    cout << "- Binh thuong : " << binh_thuong << endl;
    cout << "- Nang can : " << beo << endl;
    
    return 0;

    
} 
