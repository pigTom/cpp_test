//
// Created by 唐敦红 on 2024/12/8.
//

#include "block.h"

void Block::shape() {
    _variant = nextVariant(_variant);


    switch (_shape) {
        case Shape::ONE:
            switch (_variant) {
                case Variant::ORIGIN:
                case Variant::THIRD:
                //
                break;



            }

        break;
        case Shape::L:
            break;
        case Shape::L_MIRROR:
            break;
        case Shape::X:
            break;
    }
}

Block::Variant nextVariant(Block::Variant variant) {
    if (variant == Block::Variant::FOURTH) return Block::Variant::ORIGIN; // 防止越界
    return static_cast<Block::Variant>(static_cast<int>(variant) + 1);
}
