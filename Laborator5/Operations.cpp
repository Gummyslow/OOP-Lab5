//
//
// Created by Gummy on 3/21/2023.
//

#include <iostream>
#include <cmath>
#include "Operations.h"

double getArea(double side) {
    int area = side * side;
    return area;
}
double getPerimeter(double side){
    int perimeter = 4 * side;
    return perimeter;
}
double getDiagonal(double side) {
    double diagonal = side * sqrt(2);
    return floor(diagonal*100.0)/100.0; //This is so we print the number with only 2 decimals
}
bool firstQuadrand(Square sq1){
    if (sq1.getP1().x >= 0 and sq1.getP1().y >= 0)
        if(sq1.getP2().x >= 0 and sq1.getP2().y >= 0)
            if(sq1.getP3().x >= 0 and sq1.getP3().y >= 0)
                if(sq1.getP4().x >= 0 and sq1.getP4().y >= 0)
                    return true;
    return false;
}
