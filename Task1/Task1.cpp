#include <iostream>

int isPrimeNumber(int x);

int SumOfPrimeNumber(int x) {
    int sum = 0;

    while (x > 1) {
        if (isPrimeNumber(x)) sum += x;
        x--;
    };
    return sum;
}

int isPrimeNumber(int x) {
    for (int i = 2; i < x; ++i) {
        if (x % i == 0) return false;
    }
    return true;
}

int main() {
    int x;
    std::cin >> x;
    if (x > 1) return SumOfPrimeNumber(x);
    else return 0;
}