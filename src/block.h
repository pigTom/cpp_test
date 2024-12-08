//
// Created by 唐敦红 on 2024/12/8.
//

#ifndef BLOCK_H
#define BLOCK_H
#include <SDL_rect.h>
#include <vector>

class Block {
public:
    enum class Shape { ONE, L, L_MIRROR, X, X_MIRROR, O };

    enum class Variant { ORIGIN, SECOND, THIRD, FOURTH };

    void shape();
    void move_left();
    void move_right();
    void move_down();


    float head_x;
    float head_y;
    float speed{0.01f};
    std::vector<SDL_Point> body;

private:
    Variant nextVariant(Block::Variant variant);

    int grid_width;
    int grid_height;
    Shape _shape;
    Variant _variant;
};

#endif //BLOCK_H
