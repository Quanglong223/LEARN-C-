#include<iostream>
#include<cmath> // thu vien toan hoc
using namespace std;
int main() {

    // 1 - xu li ve vong lap for
    // hien thi cac so lan luot tu 1-10
    for( int run =1; run <=10; run++) 
    {
        // toan bo logic xu li cua vong lap for nam o day
        // int run=1 la diem bat dau cua vong lap
        // run <=10 la diem ket thuc cua vong lap
        // run++ la buoc nhay cua vong lap ( de vong sau do - tiep theo duoc xay ra phai thoa man nhu the nao)
        //run : coi nhu 1 bien chay tu 1 den 10
        cout << "Gia tri cac so : " << run << endl;
    }

    // hien thi cac so chay tu 10 ve den 1
    for(int i=10; i >=1; i--) {
        cout <<"Gia tri cac so : " << i << endl;
    }

    // su dung vong lap for de in ra cac so chia het cho 3 va 5 trong pham vi 10 den 30
    // goi y : su dung if else de lam bai tap
    for(int a=10; a <=30; a++) {
        if(a % 3 ==0 && a % 5 ==0) {
            cout << "Cac so chia het cho 3 va 5 la : " << a << endl;
        } 
    }

    // su dung tu khoa break trong vong lap for
    // ban chat tu break giúp thoat khoi vong lap for, vong lap for se bi dung - khong xu li het toan bo

    // de bai : tu 1 den 20 tim so dau tien chia het cho 6 - chi in ra so dau tien
    for( int number =1 ; number <=20; number++) 
    {
        if(number % 6 ==0) {
            cout << number << " la so dau tien chia het cho 6." << endl;
            break; // break se giup minh thoat khoi vong lap
        }
    }

    // tu khoa continue : Bo qua phan con lai cua luot lap hien tai va chuyen ngay sang luot lap tiep theo
    // de bai : in ra cac so tu 1 den 5 nhung bo qua so 3 khong can in
    // -> output : 1 2 4 5
    for(int i=1; i <= 5; i++) {
        if(i == 3) {
            continue; // bo qua cac doan code phia duoi va sang vong lap tiep theo luon
        }
        cout << "Gia tri cua i : " << i << endl;
    }

    // viet chuong trinh kiem tra 1 so co phai so nguyen to hay khong?
    // su dung if else và vong lap for
    // ap dung tu khoa break

    bool isPrime = true; // kiem tra mac dinh la dung
    int my_number = 21;
    for( int i =2; i <= sqrt(my_number); i++) {
      // sqrt() la ham can bac 2 cua 1 so
      if(my_number % i == 0) {
        isPrime = false;
        break ;   // tiet kiem vong lap - dung vong lap
      }
    } 
    if (isPrime) {        // cho isPrime thi no se gan cho gia tri la dung 
        cout << my_number << " la so nguyen to." << endl;
    } else {
        cout << my_number << " khong phai la so nguyen to." << endl;
    }
    return 0;
}