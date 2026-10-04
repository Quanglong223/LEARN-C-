#include<iostream>

using namespace std;

int main() {
    for(int i=1; i <= 100; i++) {
        if(i % 7 ==0) {
            cout << "So dau tien chia het cho 7 trong khoang tu 1 den 100 la : " << i << endl;
            break;
        }
    }
    return 0;
} 