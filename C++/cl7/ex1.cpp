#include <iostream>
using namespace std;

void fillLine(int n = 25, char c = '*') {  // ����Ʈ �Ű������� ���� �Լ�
    for (int i = 0; i < n; i++) cout << c;
    cout << endl;
}

int main() {
    fillLine();
    fillLine(10, '%');
}