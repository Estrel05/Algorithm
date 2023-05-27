#include <iostream>
using namespace std;

template <class T>
bool search(T element, T arr[], int n) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == element) return true;
    }
    return false;
}

int main() {
    int x[] = {1, 10, 100, 5, 4};
    if (search(100, x, sizeof(x) / 4))
        cout << "100�� �迭 x�� ���ԵǾ� �ִ�.";
    else
        cout << "100�� �迭 x�� ���ԵǾ� ���� �ʴ�.";
    cout << endl;

    char c[] = {'h', 'e', 'l', 'l', 'o'};
    if (search('e', c, 5))
        cout << "e�� �迭 c�� ���ԵǾ� �ִ�.";
    else
        cout << "e�� �迭 c�� ���ԵǾ� �ִ�.";
    cout << endl;
}
/*
class�� �Ϲ�ȭ
1. ����: template <class T>
    - class ��
    - �Լ��� ������ ��
2. �Ϲ�ȭ�� ��� ���� �� ���� ������ T�� ����
3. ��� �Լ� ���� ��: "Ŭ���� �̸�" <T>
    ex)
    template <class T>
    void MyStack <T>::pop()
*/