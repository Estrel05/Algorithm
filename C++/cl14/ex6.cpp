#include <iostream>
using namespace std;

class Base {
   public:
    virtual ~Base() { cout << "~Base()" << endl; }
};

class Derived : public Base {
   public:
    virtual ~Derived() { cout << "~Derived()" << endl; }
};

int main() {
    Derived* dp = new Derived();
    Base* bp = new Derived();

    delete dp;
    delete bp;
}

/*
���� ���� �Լ�
pure virtual function
�Լ��� �ڵ尡 ���� ���� �ִ� ���� ��� �Լ�
�������̽��� ���� ���� �Լ��� ����
���� ���

    class Shape {
        public:
         virtual void draw() = 0;
    }

�߻� class: �ּ� �ϳ��� ���� ���� ��� �Լ��� ���� class
������ class�� �ƴϹǷ� ��ü ���� �Ұ���
�߻� Ŭ������ �����ʹ� ���� ����
���� ���� �Լ��� ���� �Ļ� Ŭ�������� ������ �Լ��� ������ �����ִ� �������̽� ����
�߻� Ŭ������ ��� ��� �Լ��� ���� ���� �Լ��� ������ �ʿ�� ����

�������̽�
�������̽��� �����ϰ� ������ �и��Ͽ�, �۾��ڸ��� �پ��� ������ �� �� ����
����ڴ� ������ ������ ������, �������̽��� ����� ���� ���� �Լ��� �����Ǿ� �ֱ� ������ ȣ���Ͽ� ����ϱ⸸ �ϸ� ��
*/