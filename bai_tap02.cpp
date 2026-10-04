#include<iostream>
using namespace std;
int main() {
    // bai 1: Kiem tra so am - so duong - so 0
    
    int number;
    cout << "Nhap so vao day: " ;
    cin >> number;
    if(number>0) {
        cout <<number <<" la so duong." << endl;
    } else if(number <0) {
        cout << number << " la so am." << endl;
    } else {
        cout << "La so 0." << endl;
    }

     // bai 2: Kiem tra gio trong ngay : Nhap vao tu ban phim gio tu 0->23h
     // kiem tra xem do la buoi sang hay chieu hay toi 

     int hour;
     cout << "Moi nhap vao so gio: ";
     cin >> hour;

     if(hour >=0 && hour <=12) {
        cout << hour << " gio la buoi sang." << endl;
     } else if(hour >12 && hour <=18) {
        cout << hour << " gio la buoi chieu. " << endl;
     } else {
        cout << hour << " gio la buoi toi." << endl;
     }

     // bai 4: Kiem tra xem nhiet do thoi tiet la lanh nong hay troi mat
     // lanh <15, nong>30 con lai la troi mat
     
    int temperature;
    cout << "Moi nhap vao nhiet do: " ;
    cin >> temperature;

    if(temperature <15) {
        cout << "Troi lanh." << endl;
    } else if(temperature >30) {
        cout << "Troi nong." << endl;
    } else {
        cout << "Troi mat." << endl;
    }
     
    return 0;
}