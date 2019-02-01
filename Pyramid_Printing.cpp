#include <iostream>
using namespace std;

//long int used to avoid int overflow above 5 layers
long int power(int base, int exp) {
  int count = 0;
  long int val = 1;
  while (count < exp) {
    val = val*base;
    count++;
  }
  return val;
}

long int layer(int level) {
  long int num = 0;
  for (int i = 0; i < level; i++) {
    num += power(10, i);
    /* sequentially adds powers of 10 to get run of 1s
    eg: 1 + 10 + 100 + 1000 = 1111, for level = 4 */
  }
  long int val = power(num, 2);
  return val;
}

int main() {
  int depth = 0;
  cout << "How many layers of the pyramid do you want to print?" << endl;
  cin >> depth;
  for (int i = 1; i < depth+1; i++) {
    cout << string(depth-i, ' ') << layer(i) << endl;
    //string([int],' ') used to add variable white space
  }
}
