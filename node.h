#ifndef NODE_H
#define NODE_H

#include <vector>

class Node
{
 private:
  int level;
  int* pos;
  int player;

  int value;
  int noPrizeTurn;
  int thisMove;
  Node* bestSon;

 public:
  Node();
  Node(int player, int* pos, int noPrize, int level, int horizon);
  ~Node();
  void SetPos(int* pos);
  int GetValue(int horizon);
  int GetMove(int horizon);
};


#endif
