#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string danhsachMSSV[5] = {"", "2301CT1234", "2302CT3456", "2305CT3999", "2304CT0002"};

    // Nhập mã số sinh viên của người dùng vào phần tử đầu tiên còn trống
    cout << "Nhap MSSV cua ban: ";
    getline(cin, danhsachMSSV[0]);

    // In mảng trên ra màn hình
    cout << "Mang truoc khi sap xep:" << endl;
    for (int i = 0; i < 5; ++i) {
        cout << danhsachMSSV[i] << endl;
    }

    // Sắp xếp mảng theo tứ tự từ thấp đến cao
    string sortedMSSV[5];
    copy(begin(danhsachMSSV), end(danhsachMSSV), begin(sortedMSSV));
    sort(sortedMSSV + 1, sortedMSSV + 5);

    // In mảng đã sắp xếp ra màn hình
    cout << "\nMang sau khi sap xep:" << endl;
    for (int i = 0; i < 5; ++i) {
        cout << sortedMSSV[i] << endl;
    }

    // Tìm địa chỉ của phần tử chứa MSSV lớn nhất là "2305CT3999"
    string *ptrArrayMSSV = danhsachMSSV;
    for (int i = 0; i < 5; ++i) {
        if (*ptrArrayMSSV == "2305CT3999") {
            cout << "\nDia chi cua phan tu chua MSSV lon nhat: " << ptrArrayMSSV << endl;
            cout << "Phan tu: " << *ptrArrayMSSV << endl;
            break;
        }
        ++ptrArrayMSSV;
    }

    return 0;
}