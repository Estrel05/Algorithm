#include <iostream>
using namespace std;

class CCircle {
    double Radius;
    const double PI;

   public:
    CCircle(double r = 0) : Radius(r), PI(3.14) {}
    void SetRadius(double r) { Radius = r; }
    double GetArea() const { return (PI * Radius * Radius); }
};

int main(void) {
    const CCircle Cir1(1);
    cout << "����: " << Cir1.GetArea() << endl;
}  // const�� ��� ������ ������ ���� ������ �Ѵ�. const��ü���� ��const �Լ��� ȣ���� �Ұ����ϴ�.