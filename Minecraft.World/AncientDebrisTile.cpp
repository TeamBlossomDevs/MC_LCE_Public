#include "stdafx.h"
#include "AncientDebrisTile.h"
#include "Facing.h"
#include "IconRegister.h"

AncientDebrisTile::AncientDebrisTile(int id) : Tile(id, Material::stone)
{
    iconTop = nullptr;
    iconSide = nullptr;
}

void AncientDebrisTile::registerIcons(IconRegister *iconRegister)
{
    iconTop = iconRegister->registerIcon(L"ancient_debris_top");
    iconSide = iconRegister->registerIcon(L"ancient_debris");
}

Icon *AncientDebrisTile::getTexture(int face, int data)
{
    if (face == Facing::UP || face == Facing::DOWN)
        return iconTop;

    return iconSide;
}