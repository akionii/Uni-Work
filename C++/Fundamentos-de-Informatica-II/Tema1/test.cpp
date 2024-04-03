
#include <iostream>

using namespace std;

int main() {
  int a = 123, &b = a, *c = &b;

  cout << "*c = &b === " << *c << " y &b = a === " << b;
}
