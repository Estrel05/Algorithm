#include <iostream>
using namespace std;

int& addConst(int& x, int y) {
    x = x + 200;
    y = y + 200;
    cout << "addConst�Լ����� x, y�� ����մϴ�." << endl;
    cout << "&x = " << &x << "  x = " << x << endl;  // addConst�� x�� main�� a�� ���� ��� ��Ҹ� �����Ѵ�
    cout << "&y = " << &y << "  y = " << y << endl;  // addConst�� y�� main�� b�� �ٸ� ��� ��Ҹ� ���´�
    return x;
}

int main() {
    int a = 100, b = 10;
    addConst(a, b) = 555;  // addConst()�� ������ ����x�� ����, x�� a�� 555 ����
    cout << "main�Լ����� addConst(a, b) = 555�� ���� a, b�� ����մϴ�." << endl;
    cout << "&a = " << &a << "  a = " << a << endl;
    cout << "&b = " << &b << "  b = " << b << endl;
    return 0;
}