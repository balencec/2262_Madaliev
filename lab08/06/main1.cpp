#include <iostream>
int main() {
   int n = 5;
   for (int i = 0; i < n; i++) {
      std::cout << i << " ";
      n--;
   }
   std::cout << std::endl;

   n = 5;
   {
      int __i = 0, __n = n;
      for (const int &i = __i; i < __n; __i++) {
         std::cout << i << " ";
         n--;
      }
   }
   std::cout << std::endl;
   return 0;
}
