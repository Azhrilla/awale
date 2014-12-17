#include "IA.cpp"

IA::IA(int horizon)
{
  m_horizon = horizon;
}

void IA::SetPos(int* pos)
{
  m_node.SetPos(pos);
}

int IA::GetMove()
{
  return Node.GetMove();
}
