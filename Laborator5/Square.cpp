//
// Created by Gummy on 3/21/2023.
//

#include <iostream>
#include "Square.h"

/*CONSTRUCTORS*/
Square::Square() {}

Square::Square(const punct &p1, const punct &p2, const punct &p3, const punct &p4) : p1(p1), p2(p2), p3(p3), p4(p4) {}

bool Square::operator==(const Square &rhs) const {
    return p1.x == rhs.getP1().x and p1.y == rhs.getP1().y and p2.x == rhs.getP2().x and p2.y == rhs.getP2().y and p3.x == rhs.getP3().x and p3.y == rhs.getP3().y and p4.x == rhs.getP4().x and p4.y == rhs.getP4().y;
} //this is created, so we can see if two squares are the same square

/*DESTRUCTOR*/
Square::~Square() {

}

/*GETTERS AND SETTERS*/


const punct &Square::getP1() const {
    return p1;
}

void Square::setP1(const punct &p1) {
    Square::p1 = p1;
}

const punct &Square::getP2() const {
    return p2;
}

void Square::setP2(const punct &p2) {
    Square::p2 = p2;
}

const punct &Square::getP3() const {
    return p3;
}

void Square::setP3(const punct &p3) {
    Square::p3 = p3;
}

const punct &Square::getP4() const {
    return p4;
}

void Square::setP4(const punct &p4) {
    Square::p4 = p4;
}

double Square::getSide() const {
    return side;
}

void Square::setSide(double side) {
    Square::side = side;
}