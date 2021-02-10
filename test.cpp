#include <iostream>

void swap(int &a, int &b) {
  int temp = a;
  a = b;
  b = temp;
}
int main() {
    int a, b;
    std::cout << "Give a number: ";
    std::cin >> a;

    std::cout << "\nGive another number: ";
    std::cin >> b;

    std::cout << "\nBefore Swap " << a << " " << b << std::endl;
    swap(a, b);
    std::cout << "After Swap " << a << " " << b << std::endl;

    return 0;
}
