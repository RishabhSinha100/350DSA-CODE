#include <iostream>
using namespace std;
#include <algorithm>

string PowOf2(int n)
{
     int loop = n/2;
     int pow = 1;
     while (loop)
     {
          pow = pow * 2;
          if (pow == n)
          {
               return "yes";
          }
          loop--;
     }

     return "No";
}
// 4

int main()
{
     int n;
     cin >> n;
     cout << PowOf2(n);
}