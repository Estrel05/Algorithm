#include <iostream>
using namespace std;

int big(int a, int b) {
    if (a > b)
        return a;
    else
        return b;
}

int big(int a[], int size) {
    int tmp = a[0];
    for (int i = 0; i < size; i++)
        if (a[i] > tmp) tmp = a[i];
    return tmp;
}

int main() {
    int array[5] = {1, 9, -2, 8, 6};
    cout << big(2, 3) << endl;
    cout << big(array, 5) << endl;
}