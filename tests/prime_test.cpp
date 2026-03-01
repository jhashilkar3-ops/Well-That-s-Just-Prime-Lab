#include "../src/prime.hpp"
#include <iostream>
#include <cassert>
using namespace std;

void runTests() {
    Factorizer f;

    cout << "Running Tests..." << endl;
    cout << "=============================" << endl;

    assert(f.primeFactors(-5) == vector<int>({}));
    cout << "[PASSED] n = -5 should return empty" << endl;

    assert(f.primeFactors(0) == vector<int>({}));
    cout << "[PASSED] n = 0 should return empty" << endl;

    assert(f.primeFactors(1) == vector<int>({}));
    cout << "[PASSED] n = 1 should return empty" << endl;

    assert(f.primeFactors(2) == vector<int>({2}));
    cout << "[PASSED] n = 2 (smallest prime)" << endl;

    assert(f.primeFactors(17) == vector<int>({17}));
    cout << "[PASSED] n = 17 (prime)" << endl;

    assert(f.primeFactors(97) == vector<int>({97}));
    cout << "[PASSED] n = 97 (prime)" << endl;

    assert(f.primeFactors(4) == vector<int>({2, 2}));
    cout << "[PASSED] n = 4" << endl;

    assert(f.primeFactors(24) == vector<int>({2, 2, 2, 3}));
    cout << "[PASSED] n = 24" << endl;

    assert(f.primeFactors(35) == vector<int>({5, 7}));
    cout << "[PASSED] n = 35" << endl;

    assert(f.primeFactors(100) == vector<int>({2, 2, 5, 5}));
    cout << "[PASSED] n = 100" << endl;

    assert(f.primeFactors(72) == vector<int>({2, 2, 2, 3, 3}));
    cout << "[PASSED] n = 72" << endl;

    cout << "=============================" << endl;
    cout << "All tests passed!" << endl;
}

int main() {
    runTests();
    return 0;
}
