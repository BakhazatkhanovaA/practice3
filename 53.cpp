#include <iostream>
#include <cmath>
 
int digitNumber(int number, int position);
 
int main() {
    int count = 0;
    for (int i = 1000; i < 10000; i++) {
        int sumDigitNumber =
                digitNumber(i, 1) +
                digitNumber(i, 2) +
                digitNumber(i, 3) +
                digitNumber(i, 4);
        if ((i / sumDigitNumber == 600) && (i % sumDigitNumber == 0)) {
            count++;
        }
    }
    std::cout << count << std::endl;
 
 
    return 0;
}
 
int digitNumber(int number, int position) {
    return number % static_cast<int>(powf(10,position))/(powf(10, position-1));
}

