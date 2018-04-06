#ifndef DESSERTGAME_H
#define DESSERTGAME_H

class dGame
{
  public:
    dGame();
    void evalChoice(int pick); //checks to see if the winning number was picked
  private:
    bool wonGame;
    //void evalChoice(int pick);
};
#endif // DESSERTGAME_H
