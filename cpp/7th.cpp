#include<iostream>

using namespace std;

int main() {
  int a[20], i, n;
  float avg = 0;
  cout << "///Program to display average of entered n numbers///" << endl << endl << endl;
  cout << "Enter number of numbers you want to get average of: ";
  cin >> n;
  for (i = 1; i <= n; i++) {
    cout << i << " number: ";
    cin >> a[i];
    avg = avg + a[i];
  }
  cout << "Average of " << n << " number(s) is: " << avg / n;
  cout<< "\n\n\nCreated by Jugal Kishore -- 2019\n\n";
  return 0;
}
