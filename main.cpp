#include "Game.h"
#include <iostream>

int main(int argc, char* args[])
{
  if (TheGame::Instance()->init("Chapter 1", 100, 100, 640, 480, false))
  {
    while(TheGame::Instance()->running())
    {
      TheGame::Instance()->handleEvents();
      TheGame::Instance()->update();
      TheGame::Instance()->render();
      SDL_Delay(10);
    }
  }
  else
  {
    std::cout << "game init failure " << SDL_GetError() << std::endl;
    return -1;
  }

  TheGame::Instance()->clean();
  
  return 0;
}