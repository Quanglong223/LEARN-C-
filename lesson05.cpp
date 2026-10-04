#include<iostream> 
using namespace std;
int main() {
    // tim hieu ve cau truc switch.. case
    // kiem tra 1 thang co bao nhieu ngay
    int month = 12; // thang nay co the thay doi tu 1 den 12
    switch(month) {
        case 1: // so sanh month co == 1 hay khong
        cout << "31 days" << endl;
        break; // dung de thoat khoi cau lenh switch khong thuc thi cau lenh ben duoi hay thoat khoi khoi lenh switch
        case 2: // so sanh month == 2?
        cout << "28 days" << endl;
        break;
        case 12: 
        cout << "31 days" << endl;
        break;
        default:
        cout << "Thang chi ton tai tu 1 den 12, ban nhap khong dung" << endl;
        break;
    }
        // muon cau lenh switch...case chay dung thi phai reup nhung thang trong vong do tu 1 den 12 con neu khong thi nó se in ra nhap du lieu khong dung

        // duyet - chay lan luot tu 1 den 10

    return 0;
}