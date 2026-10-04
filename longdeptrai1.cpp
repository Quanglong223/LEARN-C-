#include<iostream>
using namespace std;
int main() {
    float Diem_cuoi_ki;
    cout << "Nhap diem cuoi ki vao day : ";
    cin >> Diem_cuoi_ki;

    if(Diem_cuoi_ki >= 8)
    {
        cout << " Hoc luc gioi " << endl;
    }
    else{
        if(Diem_cuoi_ki >= 6.5) {
            cout << " Hoc luc kha" << endl;
        }
        else {
            if(Diem_cuoi_ki >=5 ) {
                cout << "Hoc luc trung binh " << endl;
            }
            else {
                if(Diem_cuoi_ki < 5) {
                    cout << "Hoc luc yeu" << endl;
                }
            }
        }
    }
    return 0;
}