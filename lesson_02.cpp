#include<iostream>
using namespace std;
int main() {
    // short syntax(ngan gon cu phap toan tu)
    int number1 = 10;
    int number2 = 11;
    number1 += number2;    // number1 = number1 + number2
    // x += y <=> x=x+y
    // x -=y <=> x=x-y
    // x /=y <=> x=x/y
    // x *=y <=> x=x*y
    // x %=y <=> x=x%y
    cout << number1 << endl;

    int number3 = 50;
    int number4 = 2;
    number3 /= number4;
    cout << number3 << endl;

    int number5 = 6;
    int number6 = 8;
    number5 ++;   // tang them 1 gia tri - tang o thoi diem sau
    ++number6;    // tang them 1 gia tri - tang o thoi diem truoc
    number5--;    // giam sau 1 don vi
    --number6;    // giam truoc 1 don vi

    int n1=9;
    int n2=8;
    int n3= (++n1) - (n2++) + (--n2) + (n1--) - (n2++) + (--n1) - (n1--);
    cout << n3 << endl;
    // n3=?  (10)  - (8)    +  8     +  10   -   8     +   8    -  8
    // n2 ở vị trí thứ 3 là 8 do nó nhớ lệnh công thêm 1 đơn vị ở vị trí số n2 số 2 
    // tuong tu nhu n1 ở vi tri so 4 se nho sang n1 o vi tri so 6

    int n4=3;
    int n5=5;
    int n6= (--n5) + (n4--) + (n5++) - (--n4) + (--n5) + (n4++);
    //       4     +   3    +    4   -    1   +    4   +    1
    cout << n6 << endl;
    return 0;
}