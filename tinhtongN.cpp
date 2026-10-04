#include<iostream>

using namespace std;

int main() {
    int N, result = 0;
    cout << " Nhap N : ";
    cin >> N;
    for( int i=1; i <= N; i++) {
        result += i;
    } 
    cout << "Tong la : " << result << endl;
}