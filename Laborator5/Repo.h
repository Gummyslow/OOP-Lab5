//
// Created by Gummy on 3/21/2023.
//

#ifndef LABORATOR5_REPO_H
#define LABORATOR5_REPO_H

#include "Square.h"

struct vect{
    Square v[10]={};
    int size;
};

class Repo {
private:
    Square* squares;
    int noSquares;
public:
    Repo();
    ~Repo();
    void addItem(Square &sq);
    Square getItemFrom(int pos);
    int getSize() const;
    Square biggestSquare();
    vect biggestEqualSequence();
    };

void print_menu();
void menu();


#endif //LABORATOR5_REPO_H
