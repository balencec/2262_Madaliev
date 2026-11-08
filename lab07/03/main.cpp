#include <iostream>
#include <vector>
int main() {
   std::vector<int> x(10);
   for (int i = -1; i < 9;)
      x[++i]=1;
   for (int i = 0; i < 10; i++)
      std::cout << x[i] << " ";
   std::cout << std::endl;
   return 0;
}
