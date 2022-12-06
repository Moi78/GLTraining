#include <iostream>

#include "funcs.h"

int main() {
    int n = 0;
    std::cout << "Entrez un nombre : ";
    std::cin >> n;

    for(int i = 0; i < n; i++) {
        if(isPrime(i)) {
            std::cout << i << std::endl;
        }
    }

    float a[7] = {-40.0f, 2.5f, 35.0f, -12.0f, 1.0f, 3.0f, 2.0f};
    std::cout << "Distance a 0 maximum : " << max_dist(a, 7) << std::endl;

    return 0;
}
