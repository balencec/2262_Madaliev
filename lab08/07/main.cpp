#include <iostream>
#include <vector>
int main() {
   int n;
   std::cin >> n;
   std::vector<int> a(n);
   for (int &x : a)
      std::cin >> x;
   bool found = false;
   for (int x : a) {
      if (x < 0) {
         std::cout << x << std::endl;
         found = true;
         break;
      }
   }
   if (!found)
      std::cout << "all numbers are non-negative" << std::endl;
   return 0;
}
