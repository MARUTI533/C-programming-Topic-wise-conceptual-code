

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
int main()
{
  cout << marvellous::i << "\n";

  marvellous::display();

  return 0;
}