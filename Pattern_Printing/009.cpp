#include <iostream>
using namespace std;
int main()
{

  for (int i = 1; i <= 5; i++)
  {
    // for (char j = 'a'; j <= 'e'; j++)
    // {
    //   cout << j << " ";
    // }
    // cout << endl;
    char x = 'a';
    for (int j = 1; j <= 5; j++)
    {
      cout << x << " ";
      x++;
    }
    cout << endl;
  }

  return 0;
}