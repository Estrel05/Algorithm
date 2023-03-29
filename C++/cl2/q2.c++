#include <iostream>
using namespace std;

class Sample {
    int *p;
    int capacity;
    int size;

   public:
    Sample(int n) {
        capacity = n;
        p = new int[n];
    }
    void read();
    void write();
    int big();
    int getSize() { return size; }
    ~Sample() { delete[] p; }
};

void Sample::read() {
    while (1) {
        cout << "������ ������ �Է��Ͻʽÿ�: ";
        cin >> size;
        if (size < 1)
            cout << "������ ������ " << capacity << " ������ �ڿ������� �մϴ�." << endl;
        else if (size > 10)
            cout << "������ ������ " << capacity << " ������ �ڿ������� �մϴ�." << endl;
        else
            break;
    }
    cout << size << "���� ������ �Է��Ͻʽÿ�: ";
    for (int i = 0; i < size; i++) cin >> *(p + i);
}

void Sample::write() {
    for (int i = 0; i < size; i++) cout << *(p + i) << ' ';
    cout << endl;
}

int Sample::big() {
    int tmp = 0;
    for (int i = 0; i < size; i++)
        if (p[i] > tmp) tmp = p[i];
    return tmp;
}

int main() {
    Sample s(10);
    s.read();
    cout << "�����迭 ���� " << s.getSize() << "���� ����մϴ�." << endl;
    s.write();
    cout << "���� ū ���� " << s.big() << "�Դϴ�." << endl;
}