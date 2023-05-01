#include <iostream>
using namespace std;

class StaticTest {
    static int count;
    string name;

   public:
    StaticTest(string name) {
        count++;
        this->name = name;
        cout << "��ü ����: " << count << "\t"
             << "�̸�: " << name << endl;
    }
};

int StaticTest::count = 0;

int main() {
    StaticTest st1("method 01");
    StaticTest st2("method 02");
    StaticTest st3("method 03");
}
/*
static
    Ư¡
    �� ������ Ŭ������ ��� ��ü�鿡 ���� ����
    �� ����� Ŭ���� �� �ϳ� ����(����� ��ü ���ΰ� �ƴ� ���� ������ ����, Ŭ���� ����� �θ�)
    �� ���α׷��� ������ ���� ��
    �� static ��� ������ �����ϸ� �ݵ�� ��ü �ܺ� �������� �ʱ�ȭ�� �ؾ� ��
    �� static �Լ��� ���� ������ static ������ ����� �� ����(non-static ���� �Ұ�)

non-static
    Ư¡
    �� ����� ��ü ���� �ٸ� ������ ����
    �� ����� ��ü���� ���� ����(�ν��Ͻ� ����� �θ�)
    �� ��ü�� ������ ���� ��
    �� non-static �Լ��� ���� ������ static, non-static ��� ����/�Լ��� ��� ������ �� ����
*/