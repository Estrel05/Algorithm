#include <cstdlib>
#include <ctime>
#include <iostream>
#include <string>
using namespace std;

class Player {
    string name;

   public:
    void setName(string name) { this->name = name; }
    string getName() { return name; }
};

class GamblingGame {
    Player p[2];
    int num[3];
    bool matchAll();

   public:
    GamblingGame();
    void getEnterKey() {
        char buf[100];
        cin.getline(buf, 99);
    };
    void run();
};

bool GamblingGame::matchAll() {
    if (num[0] == num[1] && num[1] == num[2])
        return true;
    else
        return false;
}

GamblingGame::GamblingGame() {
    for (int i = 0; i < 3; i++) num[i] = 0;
    srand((unsigned int)time(NULL));
}

void GamblingGame::run() {
    string name;
    GamblingGame();

    cout << "*****���� ������ �����մϴ�.*****" << endl;
    cout << "ù��° ���� �̸�: ";
    getline(cin, name);
    p[0].setName(name);
    cout << "�ι�° ���� �̸�: ";
    getline(cin, name);
    p[1].setName(name);

    for (int i = 0;; i++) {
        cout << p[i % 2].getName() << " <Press Enter>";
        getEnterKey();
        cout << "\t\t";
        for (int j = 0; j < 3; j++) {
            num[j] = rand() % 3;
            cout << num[j] << "\t";
        }
        if (matchAll()) {
            cout << p[i % 2].getName() << "�� �¸�!" << endl;
            break;
        } else
            cout << "�ƽ�����!" << endl;
    }
}

int main() {
    GamblingGame game;
    game.run();
}
