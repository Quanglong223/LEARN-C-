#include<iostream>
using namespace std;
int main() {

    // dieu kien ? dieu kien dung thi chay code o day : dieu kien sai thi chay code o day
    int number = 3;
    if(number >=5) {
        cout << "Pass" << endl;
    } else {
        cout << " Fail" << endl;
    }


    int number1 =8;
    (number1 >=5) ? cout << "Pass" << endl : cout << "Fail" << endl;

    // kiem tra tinh chan le bang toan tu 3 ngoi
    int number2;
    cout << "Nhap so: ";
    cin >> number2;
    (number2 %2 ==0) ? cout << "So chan" << endl : cout << "So le" << endl;

    // kiem tra tuoi xem da du tuoi hay chua
    int my_age;
    cout << "Nhap so tuoi: ";
    cin >> my_age;
    string result = (my_age >18) ? "Du tuoi" : "Chua du tuoi";
    cout << result << endl;

    // kiem tra mat khau 
    string password= "12345";
    string result1 = (password == "12345") ? "Dang nhap thanh cong" : "Khong the dang nhap";
    cout << result1 << endl;
     
    // khai bao string thi dau là dau ""



     return 0;
       


}