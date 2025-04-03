#include<math.h>
#include <iostream>

using namespace std;

int check(int a, int b) 
{
  if (a <= 0 || b <= 0)
  {
    cout << "Error, digit less zero. Retry again\n";
    return 1;
  }
  else return 0;
}
int main()
{
  int Len;
  int Wid;
  do {
    cout << ("Length rectangle:");
    cin >> Len;
    cout << ("Width rectangle:");
    cin >> Wid;
  }while (check(Len, Wid));

  int p = Len * 2 + Wid * 2;
  int s = Len * Wid;
  double d = sqrt(pow(Len, 2) + pow(Wid, 2));
    
    cout << "Perimeter: " << p << endl << "Square: " << s << endl << "Long diagonal: " << d ;
  
}
