#include <iostream>
using namespace std;

class Shape {
   public:
    void paint() { draw(); }
    virtual void draw() { cout << "Shape::draw() called" << endl; }
};

int main() {
    Shape *pShape = new Shape();
    pShape->paint();
    delete pShape;
}
/*
function overriding
��������
1. virtual keyword ���
2. upcasting(pointer)
3. pBase->f(): �Ļ� class�� f() ����
4. �Լ� �̸�, �Ű�����(����, type), return type�� �����ؾ� ��
Base *p = &obj(stack)
Base *p = new Derived()(heap)
*/