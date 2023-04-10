#include <iostream>
#include <cmath>

using namespace std;

int main() {
  string coord1;
  string coord2;
  
  cout << "Coordinate format: (X, Y)\n\n";
  
  cout << "Enter the first coordinate: ";
  cin >> coord1;

  cout << "Enter the second coordinate: ";
  cin >> coord2;

  int x1 = coord1[1] - '0';
  int y1 = coord1[4] - '0';

  int x2 = coord2[1] - '0';
  int y2 = coord2[4] - '0';

  float distance = pow(((x2 - x1) + (y2 - y1)), 0.5);

  cout << "The distance is: " << distance;
  
}