#include <iostream>
int main() {
   double x = 0;
   double *d = &x;
   std::cout << reinterpret_cast<size_t>(d + 4) - reinterpret_cast<size_t>(d - 4) << std::endl;

   int y = 0;
   int *i = &y;
   std::cout << reinterpret_cast<size_t>(i + 4) - reinterpret_cast<size_t>(i - 4) << std::endl;

   char z = 0;
   char *c = &z;
   std::cout << reinterpret_cast<size_t>(c + 4) - reinterpret_cast<size_t>(c - 4) << std::endl;
   return 0;
}
