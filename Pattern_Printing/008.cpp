#include <iostream>
using namespace std;
int main()
{

  char x = 'a';

  for (int i = 1; i <= 5; i++)
  {
    for (int j = 1; j <= 5; j++)
    {
      cout << x << " ";
    }
    x++;
    cout << endl;
  }
  return 0;
}