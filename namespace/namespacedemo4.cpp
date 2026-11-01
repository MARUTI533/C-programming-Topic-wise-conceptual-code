

#include <iostream>
using namespace std;

namespace marvellous
{
  int i = 11;

  void display()
  {
    cout << "inside display\n";
  }
}

using namespace marvellous;
int main()
{
  cout << i << "\n";

  display();

  return 0;
}