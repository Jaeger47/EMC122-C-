#include <iostream>
#include <string>
using namespace std;

int main() {
  int time = 20;
  //using shorthand conditional statement
  string result = (time < 18) ? "Good day." : "Good evening.";
  cout << result;
  return 0;
}
