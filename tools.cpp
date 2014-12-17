#include "tools.h"



void visualisation(int* pos)
{
  cout << " Player 0 got " << pos[12] << " seeds" <<endl;
  cout << " Player 0 got " << pos[13] << " seeds" <<endl;

  cout << endl;
  for (unsigned int i = 0; i < 6; i++)
    {
      cout << pos[11 - i] << " ";
    }
  cout << endl;
  for (unsigned int i = 0; i < 6; i++)
    {
      cout << pos[i] << " ";
    }

  cout << endl;
}
