#include<iostream>
using namespace std;
int main() {
    int thang;
    cout << "Nhap so thang (1-12): ";
    cin >> thang;
    switch (thang) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
        cout << "Thang " << thang << " la thang co 31 ngay. " << endl;
        break;
        case 4:
        case 6:
        case 9:
        case 11:
        cout << "Thang " << thang << " la thang co 30 ngay." << endl;
        break;
        case 2:
        cout << "Thang " << thang << " la thang co 28 hoac 29 ngay." << endl;
        break;
        default:
        cout << "Loi: Thang nhap vao khong dung voi lich cua nam." << endl;
        return 0;

    }
}