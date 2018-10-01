#include <iostream>
namespace NS1 {
  int i = 7;
}
namespace NS2 {
  int i = 2;
}
void main() {
  //using namespace NS1;
  //using namespace NS2;
  std::cout << NS1::i << std::endl;
}
