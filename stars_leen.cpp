#include <iostream>

using namespace std;

int main() {
  //Leen's stars
  for(int i = 0; i < 3; i++) {
    for(int j = 0; j < i; j++)
      cout << ' ';
    for(int j = 0; j < 3 - i; j++)
      cout << '*';
    cout << endl;
  }
  return 0;
}
