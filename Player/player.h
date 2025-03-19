#ifndef PLAYER_H
#define PLAYER_H

class player
{
private:
    bool _isAlive;
    int _level = 0;
    int _speed;
    double _x_pos;
    double _y_pos;

    void player_lvl_Up();

public:
    player();
    player(int speed, double x_pos, double y_pos);
    ~player();

    void startGame();

   
};

#endif