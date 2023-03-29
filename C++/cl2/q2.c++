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
    cout << "������ ������ �Է����ֽʽÿ�: ";
    cin >> size;
    cout << size << "���� ������ �Է����ֽʽÿ�: ";
    for (int i = 0; i < size; i++) cin >> *(p + i);
}

void Sample::write() {
    for (int i; i < size; i++) cout << *(p + i) << ' ';
}

int Sample::big() { int tmp; }

int main() {
    Sample s(10);
    s.read();
    cout << "�����迭 ���� " << s.getSize() << "���� ����մϴ�.";
    s.write();
    cout << "���� ū ���� " << s.big() << endl;
}