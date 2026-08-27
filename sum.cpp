#include <iostream>
#include <cmath>

int main() {
    long long n;
    std::cin >> n;

    long long count = std::abs(n - 1) + 1;

    long long sum = (1 + n) * count / 2;

    std::cout << sum << std::endl;

    return 0;
}
