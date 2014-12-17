

using namespace std;


#include "tools.h"
#include "regles.h"
#include <iostream>
#include <vector>


int main()
{
  int* pos = new int[14];
  for(unsigned int i = 0; i < 12; i++)
    {
      pos[i] = 4;
    }
  pos[12] = 0;
  pos[13] = 0;

  while (true)
    {
      int move;
      vector<int> available;
      visualisation(pos);
      cout << "---------------------------------" <<endl;
      cout << " joueur 0" <<endl;
      available = availableMoves(pos, 0);
      for (unsigned int i = 0 ; i < available.size(); i++)
        {
          cout << available[i] << endl;
        }
      do
        {
          cout << "joue : ";
          cin >> move;
        } while(!isMoveValid(pos,move,0));
      playMove(pos, move, 0);
      visualisation(pos);
      cout << "---------------------------------" <<endl;
      cout << " joueur 1" <<endl;

      available = availableMoves(pos, 1);
      for (unsigned int i = 0 ; i < available.size(); i++)
        {
          cout << available[i] << endl;
        }

      do
        {
          cin >> move;
        }while(!isMoveValid(pos,move,1));
      playMove(pos, move, 1);

    }



  return 0;
}
