#include <iostream>
#include <vector>
int main() {
   int n;
   std::cin >> n;
   std::vector<int> v(n);
   for (int &x : v)
      std::cin >> x;
   int last = v[n-1];
   for (int &x : v)
      x += last;
   int pos = 0, neg = 0;
   for (int x : v) {
      if (x > 0) pos++;
      if (x < 0) neg++;
   }
   std::cout << pos << " " << neg << std::endl;
   return 0;
}
