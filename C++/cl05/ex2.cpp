#include <iostream>
using namespace std;

char& find(char s[], int index) { return s[index]; }  // s[index] ������ ���� ����

int main() {
    char name[] = "Mike";
    cout << name << endl;

    find(name, 0) = 'S';  // find()�� ������ ��ġ�� ���� 'M' ����
    cout << name << endl;

    char& ret = find(name, 2);  // ret�� name[2] ����
    ret = 't';
    cout << name << endl;
}