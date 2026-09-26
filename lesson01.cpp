#include<iostream>
#include<string> 

using namespace std;

#define BASIC_SALARY 300
// # define: keyword cua khai bao hang so
// BASIC_SALARY: ten cua hang so
// 300: gia tri cua hang so
// hang so: gia tri cua no khong bi thay doi trong suot qua trinh thuc thi

int main() {
    string full_name = "Pham Quang Long"; // khai bao 1 bien luu tru ho ten
    string my_age = "20 year old";        // khai bao 1 bien luu tru tuoi
    string my_address = "Phao dai lang";  // khai bao 1 bien luu tru dia chi
    
    bool checking = true;
    char letter = 'A';                    // su dung dau nhay don
    float my_point = 8.9;                 // so thuc (dung dau cham)
    double my_money = 100.543;            // so thuc

    cout << full_name << endl;           // in ho ten
    cout << my_money << endl;            // in so tien
    cout << "Luong co ban : " << BASIC_SALARY << endl;
    // su dung tu khoa const de khai bao hang so
    const double PI= 3.14;
    cout << "Gia tri cua so PI : " << PI << endl;
    //khong duoc thay doi gia tri hang so 
    //uu tien su dung tu khoa const de khai bao (han che dung #define)

    int number1 =4;
    int number2 =9;
    int result = number2 % number1; // phep chia lay du chi ap dung cho so nguyen
    cout<< result << endl;
    cout << (number1+number2) << endl;     // phep cong
    cout << (number2 - number1) <<endl; //phep tru

    // =:phep gan gia tri 
    // ==: phep bang so sanh

    bool kiem_tra= number1==number2 ;
    cout << kiem_tra << endl; // 0-false:khong bang nhau
    // kiem tra so sanh number1 co bang number 2 không

    bool kiem_tra2= number1 != number2;
    cout << kiem_tra2 << endl; // 1-true: bang nhau

    int number3 = 9;
    int number4 = 10;
    bool kiem_tra3 = (number1 > number2) && (number3 < number4); // AND => 0==FALSE
    bool kiem_tra4 = (number1 > number2) || (number3 < number4);  // OR =>1 == TRUE
    cout << kiem_tra3 << endl;   // 0 == false 
    cout << kiem_tra4 << endl;   // 1 == true
    
    return 0;
}