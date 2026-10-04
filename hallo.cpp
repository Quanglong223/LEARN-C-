#include<iostream>
#include<string>
using namespace std;
int main() {
    float toan,ly,hoa;
    cout << "Toan : ";
    cin >> toan;
    cout << "Ly : ";
    cin >> ly;
    cout << "Hoa : ";
    cin >> hoa;
    float Tong_diem= toan + ly + hoa;
    
    bool khong_liet =(toan>= 4) && (ly >=4) && (hoa >=4);
    bool du_diem = (Tong_diem >=21) || (toan >=9);
    bool trung_tuyen = khong_liet && du_diem;
    cout << boolalpha;
    cout << "Tong diem 3 mon : " << Tong_diem << endl;
    cout << "Khong bi liet : " << khong_liet << endl;
    cout << "Du dieu kien diem : " << du_diem << endl; 
    cout << "Ket qua trung tuyen : " << trung_tuyen << endl;
    return 0;
    
}