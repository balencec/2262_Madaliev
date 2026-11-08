#include <iostream>
int main() {
   {
      int __i = 0, __n = 10;
      for (const int &i = __i; i < __n; __i++) {
         std::cout << i << " ";
         i++;
      }
   }
   std::cout << std::endl;
   return 0;
}
