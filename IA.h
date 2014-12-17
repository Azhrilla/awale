#ifndef IA_H
#define IA_H
#include "node.h"

Class IA
{
 private:
  int m_horizon;
  Node m_node;
  int m_move;


 public:
  IA();
  int GetMove();
  void SetPos(int*);
}



#endif
