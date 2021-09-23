#include <iostream>
using namespace std;

int main() {
  int time = 22;
  //else if statement
  if (time < 10) {
    cout << "Good morning.";
  } else if (time < 20) {
    cout << "Good day.";
  } else {
    cout << "Good evening.";
  }
  return 0;
}
