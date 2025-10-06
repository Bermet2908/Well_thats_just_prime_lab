#include <iostream>

#include "src/prime.hpp"

using namespace std;
int main() {
    Factorizer factorizer;
    int num;

    cout << "Enter a number to factorize: ";
    cin >> num;

    vector<int> result = factorizer.primeFactors(num);

    cout << "Prime factors: [";
    for (size_t i = 0; i < result.size(); ++i) {
        cout << result[i];
        if (i < result.size() - 1) cout << ", ";
    }
    cout << "]" << endl;

    return 0;
}