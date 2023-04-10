#include <iostream>
using namespace std;

class Circle {
    int radius;

   public:
    void setRadius(int radius);
    double getArea();
};

void Circle::setRadius(int radius) { this->radius = radius; }

double Circle::getArea() { return 3.14 * radius * radius; }

int main() {
    Circle *p;
    int size;
    int radius;
    int count = 0;
    cout << "���� ����: ";
    cin >> size;
    if (size < 1) return 0;
    p = new Circle[size];
    for (int i = 0; i < size; i++) {
        cout << "�� " << i + 1 << "�� ������";
        cin >> radius;
        p[i].setRadius(radius);
        if (p[i].getArea() > 100) count++;
    }
    cout << "���̰� 100���� ū ���� " << count << "���Դϴ�." << endl;
    delete[] p;
}
