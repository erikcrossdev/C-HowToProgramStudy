#include <iostream>
#include <algorithm> // Para std::min_element e std::max_element

int main() {
    float w[9] = { 12.1, 23.2, 34.3, 45.4, 56.5, 67.6, 78.7, 89.8, 90.9 };
    int n = sizeof(w) / sizeof(w[0]);

    auto min = std::min_element(w, w + n);
    std::cout << "Min: " << *min << std::endl;

    auto max = std::max_element(w, w + n);
    std::cout << "Max: " << *max << std::endl;

    return 0;
}