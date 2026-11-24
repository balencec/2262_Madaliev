#include <iostream>
int main() {
   int a[10];
   std::cout << &a[8] - &a[3] << std::endl;

   double b[10];
   std::cout << &b[8] - &b[3] << std::endl;
   return 0;
}
