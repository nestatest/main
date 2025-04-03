#include<math.h>
#include <iostream>

using namespace std;

int check(int a, int b, int c, int d, int h) 
{
  if (a <= 0 || b <= 0 || c <= 0 || d <= 0 || h <= 0)
  {
    cout << "Error, digit less zero. Retry again\n";
    return 1;
  }
  else return 0;
}
int main()
{
  int leftside;
  int topbase;
  int rightside;
  int bottombase;
  int height;
  do {
    cout << ("leftside:");
    cin >> leftside;
    cout << ("topbase:");
    cin >> topbase;
    cout << ("rightside:");
    cin >> rightside;
    cout << ("bottombase:");
    cin >> bottombase;
    cout << ("height:");
    cin >> height;
  }while (check(leftside, topbase, rightside, bottombase, height));

  int p = leftside + topbase + rightside + bottombase;
  double s = ((topbase + bottombase)/2)*height;
  double d = (topbase + bottombase)/2;
    
    cout << "Perimeter: " << p << endl << "Square: " << s << endl << "Midline lenght: " << d ;
  
}
