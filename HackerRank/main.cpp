#include <iostream>
#include <cstdio>
#include <unordered_map>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    unordered_map<int, string> numbers;
    numbers[1] = "one";
    numbers[2] = "two";
    numbers[3] = "three";
    numbers[4] = "four";
    numbers[5] = "five";
    numbers[6] = "six";
    numbers[7] = "seven";
    numbers[8] = "eight";
    numbers[9] = "nine";

    for (int i = a; i <= b; i++) {
        if (i >= 1 && i <= 9) {
            cout << numbers[i] << endl;
        } else if (i % 2 == 0) {
            cout << "even" << endl;
        } else {
            cout << "odd" << endl;
        }
    }

    return 0;
}
