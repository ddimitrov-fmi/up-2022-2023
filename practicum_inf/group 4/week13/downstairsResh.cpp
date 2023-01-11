#include <iostream>

bool downstairs (int** labirint, int sx, int sy, int tx, int ty);

int main(){

    int** labirint = new int*[4]{ new int[4]{0, 0, 0, 0},
                                  new int[4]{0, 0, 0, 0},
                                  new int[4]{0, 1, 0, 1},
                                  new int[4]{0, 1, 0, 0}};

    std::cout << std::boolalpha << downstairs(labirint, 0, 0, 3, 3);

    for(int i = 0; i < 4; i++){
        delete[] labirint[i];
    }

    delete[] labirint;

}

bool downstairs (int** labirint, int sx, int sy, int tx, int ty){

    if(labirint[tx][ty] == 1)
        return false;

    if(sx == tx && sy == ty)
        return true;

    if(sy < ty && labirint[sx][sy + 1] == 0)
        if(downstairs(labirint, sx, sy + 1, tx, ty))
            return true;

    if(sx < tx && labirint[sx + 1][sy] == 0)
        if(downstairs(labirint, sx + 1, sy, tx, ty))
            return true;

    return false;

}