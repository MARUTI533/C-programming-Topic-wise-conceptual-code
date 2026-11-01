#include "marvellous.h"

// entry point function
int main()
{
  float fret = 0.0f;

  fret = area(7.5f);

  printf("area of circle is :%f\n", fret);

  return 0; // return success
}

// gcc main.c helper.c -o myexe

// myexe.exe