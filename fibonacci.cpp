#include <iostream>
using namespace std;
void fibonacci(int n) {
    int a = 0, b = 1;
    int ketqua;

    if (n == 0) {   //Trường hợp đặc biệt 0,1
        cout << "F(0) = 0" << endl;
        return;
    }

    if (n == 1) {
        cout << "F(1) = 1" << endl;
        return;
    }

    cout << "F(0) = 0" << endl;
    cout << "F(1) = 1" << endl;

    for (int i = 2; i <= n; i++) {   //Tính và in ra giá trị Fibonacci từ F(2) đến F(n)
        ketqua = a + b;
        cout << "F(" << i << ") = F(" << i-1 << ") + F(" << i-2 << ") = " << b << " + " << a << " = " << ketqua << endl;
        a = b;   //Cập nhật giá trị của F(i-1)
        b = ketqua;   //Cập nhật giá trị của F(i)
    }
}

int main() {
    int n;
    cout << "Nhập vào giá trị n: ";
    cin >> n;

    if (n < 0) {   // Hiển thị giá trị n và giá trị Fibonacci tương ứng
        cout << "n không hợp lệ." << endl;
    } else {
        cout << "Giá trị n là: " << n << endl; // Hiển thị giá trị n
        cout << "Các giá trị Fibonacci từ F(0) đến F(" << n << "):" << endl;
        fibonacci(n);
    }

    return 0;
}
