#include <iostream>
using namespace std;

void getTwoValues(int &begin, int &end) {
    cout << "Insert two integer values: " << endl;
    cin >> begin >> end;
    if (begin >= end) {
        cout << "Invalid input. \n";
    }
while (begin >= end);
}
bool Prime(int n) {
    if (n <= 1) {
        return false; 
        }
    
        for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int getNextPrime(int begin) {
    int num = begin + 1;
    while (!Prime(num)) {
        ++num;
    }
    return num;
}

int getPrevPrime(int end) {
    int num = end - 1;
    while (num > 1 && !Prime(num)) {
        --num;
    }
    return num > 1 ? num : -1; 
}