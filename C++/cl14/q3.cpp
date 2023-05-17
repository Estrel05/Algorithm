#include <iostream>
#include <string>
using namespace std;

class Converter {
   protected:
    double ratio;
    virtual double convert(double src) = 0;
    virtual string getSourceString() = 0;
    virtual string getDestString() = 0;

   public:
    Converter(double ratio) { this->ratio = ratio; }
};

class WonToDollar : public Converter {
   protected:
    double convert(double src) { return src / ratio; }
    string getSourceString() { return "��"; }
    string getDestString() { return "�޷�"; }

   public:
    WonToDollar(double ratio) : Converter(ratio) {}
    void run() {
        double src;
        cout << getSourceString() << "�� " << getDestString() << "�� ȯ���մϴ�." << endl;
        cout << "�ݾ��� �Է��ϼ���: ";
        cin >> src;
        cout << "ȯ�� ���: " << convert(src) << getDestString() << endl;
    }
};

int main() {
    WonToDollar wd(1170);
    wd.run();
}