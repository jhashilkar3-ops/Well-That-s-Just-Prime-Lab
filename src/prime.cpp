#include "prime.hpp"

vector<int> Factorizer::primeFactors(int n) {
    vector<int> factors;

    if (n <= 1) {
        return factors;
    }

    int divisor = 2;

    while (divisor * divisor <= n) {
        if (n % divisor == 0) {
            factors.push_back(divisor);
            n /= divisor;
        } else {
            divisor++;
        }
    }

    if (n > 1) {
        factors.push_back(n);
    }

    return factors;
}