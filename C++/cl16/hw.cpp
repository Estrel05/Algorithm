#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Book {
    string title;
    string author;
    int year;

   public:
    Book(){};
    Book(string title, string author, int year) {
        this->title = title;
        this->author = author;
        this->year = year;
    }
    string getAuthor() { return author; }
    int getYear() { return year; }
    void show();
};

void Book::show() { cout << year << "�⵵, " << title << ", " << author << endl; }

class BookManager {
    vector<Book> v;
    void searchByAuthor();
    void searchByYear();
    void bookIn();

   public:
    void run();
};

void BookManager::searchByAuthor() {
    string author;
    cout << "�˻��ϰ��� �ϴ� ���� �̸��� �Է��ϼ���: ";
    cin >> author;
    for (int i = 0; i < v.size(); i++) {
        if (v[i].getAuthor() == author) v[i].show();
    }
}

void BookManager::searchByYear() {
    int year;
    cout << "�˻��ϰ��� �ϴ� ������ �Է��ϼ���: ";
    cin >> year;
    for (int i = 0; i < v.size(); i++) {
        if (v[i].getYear() == year) v[i].show();
    }
}

void BookManager::bookIn() {
    string title;
    string author;
    int year;

    cout << "�԰��� å�� �Է��ϼ���. ������ -1�� �Է��ϸ� �԰� �����մϴ�." << endl;
    for (;;) {
        cout << "����: ";
        cin >> year;
        if (year == -1) break;
        cout << "����: ";
        cin >> title;
        cout << "����: ";
        cin >> author;
        Book b(title, author, year);
        v.push_back(b);
    }
    cout << "�� �԰�� å�� " << v.size() << "���Դϴ�.";
}

void BookManager::run() {
    bookIn();
    searchByAuthor();
    searchByYear();
}

int main() {
    BookManager man;
    man.run();
}