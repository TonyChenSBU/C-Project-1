#include <iostream>
#include <vector>

using namespace std;

void print_vector(const vector<int>& v) {
    cout << "[";
    for (size_t i = 0; i < v.size(); ++i) {
        cout << v[i];
        if (i < v.size() - 1) {
            cout << ", ";
        }
    }
    cout << "]" << endl;
}

vector<int> prime_factorize(int n) {
    vector<int> answer;

    for (int i = 2; i <= n; ++i) {
        while (n % i == 0) {
            answer.push_back(i);
            n /= i;
        }
    }

    return answer;
}

void test_prime_factorize() {
    print_vector(prime_factorize(2));
    print_vector(prime_factorize(72));
    print_vector(prime_factorize(196));
}

int main() {
    test_prime_factorize();
    return 0;
}
