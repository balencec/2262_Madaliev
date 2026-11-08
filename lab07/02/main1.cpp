#include <iostream>
int main() {
   int x=1, y=2, z=3;
   x=x+1, z=z+2*x+3*y, y=y+1;
   std::cout << x << " " << y << " " << z << std::endl;
   return 0;
}
