// Đề bài: Xây dựng chương trình tính tiền hóa đơn và chiết khấu bán hàng1.
// Bối cảnh & Yêu cầu bài toánMột cửa hàng văn phòng phẩm cần viết một phần mềm nhỏ chạy trên bảng điều khiển (Console) để nhân viên thu ngân nhập liệu và in hóa đơn thanh toán cho khách hàng.
// Chương trình cần đáp ứng các nghiệp vụ sau:Nhập thông tin đơn hàng:Tên sản phẩm cần thanh toán.
// Đơn giá niêm yết của sản phẩm (VND).
// Số lượng sản phẩm khách chọn mua.
// Hạng phân loại khách hàng: gồm hai nhóm là Khách VIP (mã 'V' hoặc 'v') và Khách thường (mã 'T' hoặc 't').
// Chính sách ưu đãi (Giảm giá):Khách hàng sẽ được chiết khấu giảm 10% trên tổng giá trị đơn hàng nếu thỏa mãn ít nhất 1 trong 2 điều kiện:Khách hàng thuộc nhóm VIP ('V' hoặc 'v').
// Mua với số lượng lớn: từ 10 sản phẩm trở lên (bất kể khách thường hay khách VIP).
// Trường hợp không thỏa mãn cả hai điều kiện trên: Tiền giảm giá bằng $0$.
// Yêu cầu kỹ thuật trong code:Khai báo đúng các kiểu dữ liệu tương ứng: chuỗi ký tự (string), số thực (double), số nguyên (int), ký tự đơn (char), và kiểu logic (bool).Sử dụng toán tử so sánh (==, >=) và toán tử logic (||) để xác định trạng thái giảm giá (bool duocGiamGia).Tính toán các đại lượng:$$\text{Tổng tiền gốc} = \text{đơn giá} \times \text{số lượng}$$$$\text{Tiền giảm giá} = 10\% \times \text{Tổng tiền gốc} \quad (\text{nếu được giảm, ngược lại } 0)$$$$\text{Số tiền phải trả} = \text{Tổng tiền gốc} - \text{Tiền giảm giá}$$2. Đầu vào (Input)Dòng 1: Tên sản phẩm (chuỗi ký tự, có thể chứa dấu cách).Dòng 2: Đơn giá của 1 sản phẩm (số thực dương $donGia > 0$).Dòng 3: Số lượng mua (số nguyên dương $soLuong > 0$).Dòng 4: Loại khách hàng (một ký tự đơn: 'V', 'v', 'T', hoặc 't').3. Đầu ra (Output)In hóa đơn ra màn hình với đầy đủ các mục sau:Tiêu đề: --- HOA DON BAN HANG ---Tên sản phẩm đã mua.Tổng tiền gốc (VND).Số tiền được giảm giá (VND).Tổng số tiền cuối cùng khách cần thanh toán (VND).



#include<iostream>
#include<string>
using namespace std;
int main() {
    string Ten_hang;
    long long Don_gia;
    int So_luong_mua;
    char Loai_khach_hang;

    cout << "Nhap ten san pham : " ;
    getline(cin, Ten_hang); // dung getline de nhap duoc khoang trang
    cout << "Don gia(VND) : ";
    cin >> Don_gia;
    cout << "So luong mua : ";
    cin >> So_luong_mua;
    cout << "Loai khach hang(V:VIP, v:VIP , T:THUONG) : ";
    cin >> Loai_khach_hang;

    long long Tong_tien = Don_gia * So_luong_mua;
    bool khach_hang_duoc_giam_gia = (Loai_khach_hang == 'V') || (Loai_khach_hang == 'v') || (So_luong_mua >= 10);
    long long Tien_giam = Tong_tien * 0.1;
    long long Tien_tra = Tong_tien - Tien_giam;

    cout << "HOA DON BAN HANG " << endl;
    cout << "Ten san pham : " << Ten_hang << endl;
    cout << "Tong tien : " << Tong_tien << "VND" << endl;
    cout  << "Tien duoc giam : " << Tien_giam << endl;
    cout << "Tien phai tra : " << Tien_tra << endl;
     return 0;
    
}