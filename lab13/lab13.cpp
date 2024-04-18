#include <iostream>
#include<math.h>
#include <Windows.h>

using namespace std;
double computeSeriesTerm(int n) {
    if (n == 0) {
        return 10.0;
    }
    double prevTerm = computeSeriesTerm(n - 1);
    if (n % 2 == 1) {
        return prevTerm / 2.0;
    }
    else {
        return prevTerm * 5.0;
    }
}
int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int n;
    cout << "введіть номер n для обчислення n-го члена ряду: ";
    cin >> n;
    double nthTerm = computeSeriesTerm(n);
    cout << "n-й член ряду при n = " << n << " : " << nthTerm << endl;
    return 0;
}