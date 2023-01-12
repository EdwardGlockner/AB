// DataFeed.cpp
#include "DataFeed.h"

DataFeed::DataFeed(int x,int y)
{
  gx = x;
  gy = y;
}

int DataFeed::getSum()
{
  return gx + gy;
}
