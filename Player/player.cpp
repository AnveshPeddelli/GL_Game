#include "player.h"
#include <iostream>

void player::player_lvl_Up()
{
    this->_speed += 10;
    std::cout<< "Player levelled Up"<< std::endl;
}
player::player()
{
    this->_isAlive = true;
    this->_speed = 0;
    this->_x_pos = 0;
    this->_y_pos = 0;
    this->_level = 0;
}
player::player(int speed, double x_pos, double y_pos)
{
    this->_speed = speed;
    this->_x_pos = x_pos;
    this->_y_pos = y_pos;
}
void player::startGame()
{
    while(this->_isAlive)
    {
        if(this->_level == 0)
            player_lvl_Up();

        std::cout<< "playerSpeed: "<< this->_speed<< std::endl;
    }
}
player::~player()
{

}