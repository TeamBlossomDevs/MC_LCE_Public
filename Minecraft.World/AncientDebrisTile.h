#pragma once
#include "Tile.h"

class AncientDebrisTile : public Tile
{
private:
    Icon *iconTop;
    Icon *iconSide;

public:
    AncientDebrisTile(int id);

    virtual void registerIcons(IconRegister *iconRegister);
    virtual Icon *getTexture(int face, int data);
};