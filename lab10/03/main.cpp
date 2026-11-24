#include <iostream>
int main() {
   int a = 6, b = 3;
   int *p = &a;
   int &r = b;
   int m = *p * r;
   int t = a & b;
   std::cout << m << ' ' << t << std::endl;
   return 0;
}
