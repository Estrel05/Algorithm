#include <iostream>
using namespace std;

class Calculator {
   protected:
    virtual void input() = 0;
    virtual int calc(int a, int b) = 0;

   public:
    virtual void run() = 0;
};

class Adder : public Calculator {
   protected:
    int a = 0, b = 0;
    void input() {
        cout << "���� ���� �� ���� �Է��ϼ���: ";
        cin >> a >> b;
    }
    int calc(int a, int b) { return a + b; }

   public:
    void virtual run() {
        input();
        cout << "���� ���� " << calc(a, b) << endl;
    }
};

class Subtractor : public Calculator {
   protected:
    int a = 0, b = 0;
    void input() {
        cout << "�� ���� �� ���� �Է��ϼ���: ";
        cin >> a >> b;
    }
    int calc(int a, int b) { return a - b; }

   public:
    void virtual run() {
        input();
        cout << "���� ���� " << calc(a, b) << endl;
    }
};

int main() {
    Calculator* adder = new Adder();
    Calculator* subtractor = new Subtractor();
    adder->run();
    subtractor->run();
}