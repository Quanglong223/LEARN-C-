#include <iostream>
using namespace std;

int main() {
    int tuoi = 16;
    double thuNhap = 15000000;

    if (tuoi >= 18) {
        cout << "Kiem tra tuoi: OK" << endl;
        cout << "Nguoi nay du dieu kien tuoi de vay von." << endl;
    } else {
        cout <<"Khong du dieu kien tuoi de vay von." << endl;
    }
    if(thuNhap >= 10000000) {
        cout << "Kiem tra dieu kien thu nhap: OK" <<endl;
    } else {
        cout << " Khong du dieu kien thu nhap de vay von." << endl;
    } if( tuoi <18 || thuNhap <10000000 ){
        cout << "Khong du dieu kien de vay von." << endl;
    }
 
    return 0;
}