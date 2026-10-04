#include<iostream>

using namespace std;

int main() {
    int N;
    cout << "Nhap vao : ";
    cin >> N;
    for(int i=1; i <= N; i++) {
        if(i % 2 ==0 ) {
            continue;
        }
        cout << "Cac so le la : " << i << endl;
    }
    return 0;
}