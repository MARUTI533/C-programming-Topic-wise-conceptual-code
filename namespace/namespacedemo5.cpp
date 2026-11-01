

#include <iostream>
using namespace std;

namespace marvellous
{
  int i = 11;

  void display()
  {
    cout << "inside display of marvellous\n";
  }
}

namespace PPA
{
  int i = 21;

  void display()
  {
    cout << "inside display of ppa\n";
  }
}

int main()
{
  marvellous::display();
  PPA::display();

  return 0;
}