#include <iostream>
using namespace std;

int big(int x, int y) {  // 3�� ������ ����غ���
    if (x > 100 || y > 100)
        return 100;
    else
        return (x > y) ? x : y;
}

int big(int x, int y, int z) {
    if (x > z || y > z)
        return z;
    else
        return (x > y) ? x : y;
}

int main() {
    int x = big(3, 5);
    int y = big(300, 30);
    int z = big(30, 60, 50);
    cout << "x = " << x << '\t' << "y = " << y << '\t' << "z = " << z << endl;
}