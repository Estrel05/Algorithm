#include <iostream>
using namespace std;

char c = 'a';               // c�� ���� ����
char& find() { return c; }  // char Ÿ���� ���� ����, ���� c�� ���� ���� ����

int main() {
    char& ref = find();  // ref�� c�� ���� ����
    ref = 'M';
    cout << "c = " << c << "    ref = " << ref << endl;

    char ch = find();
    cout << "ch = " << ch << endl;  // ch�� ���� ����

    find() = 'b';
    cout << "c = " << c << "    ref = " << ref << endl;
    cout << "ch = " << ch << endl;
}