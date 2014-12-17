#include "regles.h"



bool isMoveValid(int* pos, int move, int player)
{
  if (move > 11 || move < 0)
    {
      return false;
    }
  if (inOpponentSide(move, player))
    {
      return false;
    }
  if (pos[move] == 0)
    {
      return false;
    }
  int* hypMove = getResult(pos, move, player);
  if ( move != (6*player + 5) && sideEmpty(hypMove, (player + 1) % 2))
    {
      return false;
    }
  return true;
}


bool sideEmpty(int* pos, int player)
{
  for (unsigned int i = 0; i < 6; i++)
    {
      if ( pos[6 * player + i] != 0)
        {
          return false;
        }
    }
  cout << "SIDE EMPTY" << endl;
  return true;
}

bool inOpponentSide(int move, int player)
{
  if (player == 0 && move > 5)
    {
      return true;
    }
  if (player == 1 && move < 6)
    {
      return true;
    }
  return false;
}

void playMove(int* pos, int move, int player)
{
  int* newpos = getResult(pos, move, player);
  for(unsigned int i = 0; i < 14; i++)
    {
      pos[i] = newpos[i];
    }

}

int* getResult(int* pos, int move, int player)
{
  int* next_pos = new int[14];
  for(unsigned int i = 0; i < 14; i++)
    {
      next_pos[i] = pos[i];
    }
  int position = move;
  for(unsigned int i = 0; i < next_pos[move]; i++)
    {
      position = (position + 1) % 12;
      if (position == move)
        {
          position++;
        }
      next_pos[position]++;
    }
  next_pos[move] = 0;
  while((next_pos[position] == 3 || next_pos[position] == 2)
        && inOpponentSide(position, player))
    {
      next_pos[12 + player] += next_pos[position];
      next_pos[position] = 0;
      position = (position - 1) % 12;
    }
  return next_pos;
}


vector<int> availableMoves(int* pos, int player)
{
  vector<int> output;
  for( unsigned int i = player*6; i < 6+player*6; i++)
    {
      if (isMoveValid(pos, i, player))
        {
          output.push_back(i);
        }
    }
  return output;
}
