#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cout << "���� ���� ���ڿ��� �Է��ϼ���. �Է��� ���� '&'�Դϴ�." << endl;
    getline(cin, s, '&');
    cin.ignore();
    string findWord, replaceWord;
    cout << endl << "find: ";
    getline(cin, findWord, '\n');
    cout << "replace: ";
    getline(cin, replaceWord, '\n');

    int startIndex = 0;
    while (true) {
        int fIndex = s.find(findWord, startIndex);
        if (fIndex == -1) break;
        s.replace(fIndex, findWord.length(), replaceWord);
        startIndex = fIndex + replaceWord.length();
    }
    cout << s << endl;
}