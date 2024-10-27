#include <iostream>
using namespace std;

void fibonacci (int n) {
    int a = 0, b = 1;
    int ketqua;

    if (n == 0) {
        cout <<"F(0) = 0" <<endl;
        return;
    }
    cout <<"F(0) = 0" <<endl;

    if (n == 1) {
        cout <<"f(1) = 1";
        return;
    }
    cout <<"F(1) = 1" <<endl;

    for (int i = 2; i <= n; i++) {
        ketqua = a + b;
        cout << "F("<<i<<") = F("<<i - 1<<") + F("<<i - 2<<") ="<< " "<< b<< " "<< "+"<< " "<< a<< " "<< "="<< " "<< ketqua<< " "<< endl;
        a = b;
        b = ketqua;
    }
}

int main() {
    int n;
    cout <<"nhap gia tri n:";
    cin >> n;

    if (n < 0) {
        cout <<"n khong hop le";
    }
    else {
        cout <<"gia tri fibonacci n la:";

        fibonacci (n);
    }
    return 0;
}