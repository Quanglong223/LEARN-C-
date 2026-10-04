#include<iostream>
using namespace std;
int main() {
    // De bai: kiem tra do dai cua 3 canh co tao thanh 1 tam giac hay khong?
    // a,b,c thi dieu kien la (a+b)>c && (b+c)>a && (a+c)>b **
    // input: do dai cua 3 canh

    int canh_thu_nhat = 3;
    int canh_thu_hai = 4;
    int canh_thu_ba = 5;

    // output: co tao thanh 1 tam giac hay khong?
    // cach giai quyet van de la phan **
    
    if((canh_thu_nhat+canh_thu_hai)>canh_thu_ba && (canh_thu_nhat+canh_thu_ba)>canh_thu_hai && (canh_thu_hai+canh_thu_ba)>canh_thu_nhat) {
        cout << "Co tao thanh 1 tam giac" <<endl;
    }
    else {
        cout << "Khong tao thanh 1 tam giac" << endl;
    }


    // kiem tra 1 nam duong lich co phai nam nhuan hay khong?
    // nam nhuan co 366 ngay va ngay them la 29/2
    // chu ki 4 nam lap lai 1 lan
    // thuat toan: 1 nam ma chia het cho 400 => nam nhuan duong lich
    //             1 nam chia het cho 4 nhung khong chia het cho 100 => nam nhuan duong lich
    // input: nhap vao 1 nam duong lich
    // output: thong bao xem nam do co phai nam nhuan hay khong

    int year;
    cout <<"Nam can nhap: ";
    cin >> year;

    if((year %400 == 0) || (year %4 ==0 && year %100 !=0)) {
        cout << year <<" : La nam nhuan" << endl;
    }  else {
        cout << year << " : Khong phai la nam nhuan" << endl;
    }


    //  viet chuong trinh kiem tra 1 so la so chan hay so le, su dung if else
    
    int number;
    cout <<"Nhap vao mot so : ";
    cin >> number;

    if(number %2 ==0) {
        cout << "So " << number << " la mot so chan" << endl;
    } else {
        cout << "So " << number << " la mot so le " << endl;
    }

    // alias cua if else (toan tu dieu kien trong C++)
    // ban chat alias la cach viet khac cua if else
    int number1 =9;
    int number2 =10;
    int number3 = (number2 - number1 < number1 - number2) ? number1:number2;
    // neu bieu thuc logic la true thi in ra so sau dau ?
    // neu bieu thuc la false thi in ra so sau dau :
    // ? và : la cu phap cua toan tu dieu kien
    cout << number3 << endl;

    int number4;
    if(number2 - number1 < number1 - number2) {
        number4 = number1;
        // xu li logic neu no don gian thì xu dung toan tu dieu kien
        // nhung neu chuong trinh phuc tap thi van phai su dung if else
    } else {
        number4 = number2;
    }

    int a= 4;
    int b= 5;
    int c= (a %b > b %a) ? (a+b <b+a ? a:b) : (b-a >a-b ? b:a);
        // do bieu thuc so 1 dung nen chon bieu thuc sau dau ?
        // bieu thuc sau dau hoi sai => chon so b
    cout << c << endl;
    // bieu dien lai bang su dung if else
    int d;
    if(a%b > b%a) {
        if(a+b <b+a) {
            d=a;
        } else {
            d=b;
        }
    } else {
        if(b-a >a-b) {
            d=b;
        } else {
            d=a;
        }
    }
    cout <<d << endl;



    
    
    return 0;
}