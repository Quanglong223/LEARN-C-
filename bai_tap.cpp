#include<iostream>

using namespace std;

int main() {
    // ting tong cac so tu 1 den N
    int N;
    cout <<"Moi nhap vao N : ";
    cin >> N;
    int sum = 0;
    for(int i=1; i <= N; i++) {
        sum +=i;
    }
    cout << "Tong cac so tu 1 den N la : " << sum << endl;

    // tinh tong so chan tu 1 den N
    int n;
    cout <<" n= " ;
    cin >> n;
    int SUM = 0;
    for (int i=1; i <= n; i++) {
        if(i %2 ==0) 
        SUM += i;
    }
    cout << "Tong la : " << SUM << endl;

    //tinh gia thua tu 1 den N 
    int a, result = 1;
    cout << "Nhap a : ";
    cin >> a;
    for(int i=1; i <= a; i++) {
        result *=i;
    }
    cout << "Ket qua la : " << result << endl;


    // in ra bang cuu chuong so 5
    for(int i=1; i <= 10; i++) {
        cout << "5 x " << i << "=" << 5*i << endl; 
    }




    return 0;
}