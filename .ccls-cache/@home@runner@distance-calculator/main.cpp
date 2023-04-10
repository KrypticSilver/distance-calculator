#include <iostream>

using namespace std;

int main() {
  string coord1;
  string coord2;
  
  cout << "Coordinate format: (X, Y)\n\n";
  
  cout << "Enter the first coordinate: ";
  cin >> coord1;

  cout << "Enter the second coordinate: ";
  cin >> coord2;

  int x1 = ctoi(coord1[1]);
  int y1 = ctoi(coord1[4]);
  
}