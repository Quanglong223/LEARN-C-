#include<iostream> 
using namespace std;
int main(){
    // tim hieu ve cau truc dieu kien trong C++
    // ban chat la yeu cau may tinh ra quyet dinh xu li cac tinh huong khac nhau
    int my_age;
    cout << "Moi ban nhap so tuoi : ";
    cin >> my_age;
    if(my_age >= 18){
        cout << "Ban du tuoi de hoc lai xe may pkl" << endl;
    }
    // if: la tu khoa lap trinh 
    // () la cu phap bieu dien dieu kien cho if: my_age >=18 la bieu thuc dieu kien
    // {} la cu phap xu li logic cho dieu kien
    // neu bieu thuc dieu kien la dung thi se thuc thi lenh ben trong
    // neu bieu thuc dieu kien la sai thi se khong thuc thi lenh ben trong dau {}
    else{
        cout << "Ban chua du tuoi de hoc lai xe may pkl" << endl;
    }
    // else là keyword va no se thuc thi lenh ben trong {} neu bieu thuc dieu kien trong if la sai





    float my_point;
    cout << "Moi nhap diem so cua ban vao day : ";
    cin >> my_point;
    //thong bao xep loai hoc luc cua sinh vien kem,trng binh,kha,gioi
    // 0 - <5 : kem 
    // 5 - <7 : trung binh 
    // 7 - <9 : kha 
    // >9     : gioi
    if(my_point < 5 && my_point >=0) {
        cout << "Hoc luc kem" << endl;
    } else if(my_point >5 && my_point <7) {
        cout << "Hoc luc trung binh" << endl;
    } else if(my_point >7 && my_point <9){
        cout << "Hoc luc kha" << endl;
    } else if(my_point >9 && my_point <=10) {
        cout <<"Hoc luc gioi" << endl;
    } else {
        cout << "Diem nhap vao du lieu khong hop le" << endl;
    }
    
    // if else nhieu dieu kien re nhanh hay if else dang bac thang

    // if else long nhau(nested)
    // giai phuong trinh bac nhat : ax+b=c
    float hsa=3;
    float hsb=-6;
    //3x-6=0
    if(hsa==0) {
        if(hsb==0) {
            cout <<"Phuong trinh vo so nghiem" << endl;
        }else {
        //hsb !=0 ~ 0x+b=0
        cout << "Phuong trinh vo nghiem" << endl;
    }
    } else {
        // hsa !=0 ~ 3x-6=0
        float result= -hsb/hsa;
        cout << "Phuong trinh co nghiem la : " << result <<endl ;
    }
    
    return 0;
}