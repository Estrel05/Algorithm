#include <iostream>
#include <string>
using namespace std;

class Shape {
    int x, y;

   public:
    Shape() { cout << "Shape ������()" << endl; }
    Shape(int xloc, int yloc) : x(xloc), y(yloc) { cout << "Shape ������(" << xloc << ',' << yloc << ')' << endl; }
    ~Shape() { cout << "Shape �Ҹ���()" << endl; }
};

class Rect : public Shape {
    int width, height;

   public:
    Rect(int xloc, int yloc, int w, int h);
    ~Rect() { cout << "Rectangle �Ҹ���()" << endl; }
};

int main() { Rect r(4, 6, 100, 100); }