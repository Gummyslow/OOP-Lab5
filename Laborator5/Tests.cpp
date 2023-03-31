//
//  Created by Gummy
//
#include "Tests.h"
#include <assert.h>
#include "Square.h"
#include "Operations.h"
#include <iostream>


void testGetArea(){
    Square sq1, sq2;
    punct p1, p2, p3, p4;
    p1.x = 1;p1.y = 1;
    p2.x = 1;p2.y = 2;
    p3.x = 2;p3.y = 2;
    p4.x = 2;p4.y = 1;
    sq1 = Square(p1, p2, p3, p4);
    p1.x = 2;p1.y = 2;
    p2.x = 2;p2.y = 4;
    p3.x = 4;p3.y = 4;
    p4.x = 4;p4.y = 2;
    sq2 = Square(p1, p2, p3, p4);
    int a1,a2;
    a1 = getArea(sq1.getSide());
    a2 = getArea(sq2.getSide());
    assert(a1 == 1);
    assert(a2 == 4);
}

void testGetPerimeter(){
    Square sq1, sq2;
    punct p1, p2, p3, p4;
    p1.x = 1;p1.y = 1;
    p2.x = 1;p2.y = 2;
    p3.x = 2;p3.y = 2;
    p4.x = 2;p4.y = 1;
    sq1 = Square(p1, p2, p3, p4);
    p1.x = 2;p1.y = 2;
    p2.x = 2;p2.y = 4;
    p3.x = 4;p3.y = 4;
    p4.x = 4;p4.y = 2;
    sq2 = Square(p1, p2, p3, p4);
    double pr1,pr2;
    pr1 = getPerimeter(sq1.getSide());
    pr2 = getPerimeter(sq2.getSide());
    assert(pr1 == 4);
    assert(pr2 == 8);
}

void testGetDiagonal(){
    Square sq1, sq2;
    punct p1, p2, p3, p4;
    p1.x = 1;p1.y = 1;
    p2.x = 1;p2.y = 2;
    p3.x = 2;p3.y = 2;
    p4.x = 2;p4.y = 1;
    sq1 = Square(p1, p2, p3, p4);
    p1.x = 2;p1.y = 2;
    p2.x = 2;p2.y = 4;
    p3.x = 4;p3.y = 4;
    p4.x = 4;p4.y = 2;
    sq2 = Square(p1, p2, p3, p4);
    double d1,d2;
    d1 = getDiagonal(sq1.getSide());
    d2 = getDiagonal(sq2.getSide());
    assert(d1 == 1.41);
    assert(d2 == 2.82);
}

void testFirstQuadrant(){
    Square sq1, sq2;
    punct p1, p2, p3, p4;
    p1.x = 1;p1.y = 1;
    p2.x = 1;p2.y = 2;
    p3.x = 2;p3.y = 2;
    p4.x = 2;p4.y = 1;
    sq1 = Square(p1, p2, p3, p4);
    p1.x = 2;p1.y = 2;
    p2.x = 2;p2.y = -1;
    p3.x = -1;p3.y = -1;
    p4.x = -1;p4.y = 2;
    sq2 = Square(p1, p2, p3, p4);
    assert(firstQuadrand(sq1) == true);
    assert(firstQuadrand(sq2) == false);

}

void testRepo(){
    Square sq1, sq2, sq3, sq4, sq5, sq6, sq7, sq8, sq9;
    punct p1, p2, p3, p4;
    p1.x = 1;p1.y = 1;
    p2.x = 1;p2.y = 2;
    p3.x = 2;p3.y = 2;
    p4.x = 2;p4.y = 1;
    sq1 = Square(p1, p2, p3, p4);
    p1.x = 2;p1.y = 2;
    p2.x = 2;p2.y = 4;
    p3.x = 4;p3.y = 4;
    p4.x = 4;p4.y = 2;
    sq2 = Square(p1, p2, p3, p4);
    Repo rep;
    rep.addItem(sq1);
    rep.addItem(sq2);
    assert(rep.getSize() == 2);
    sq3 = rep.getItemFrom(0);
    sq4 = rep.getItemFrom(0);
    sq5 = rep.getItemFrom(0);
    sq6 = rep.getItemFrom(1);
    sq7 = rep.getItemFrom(1);
    sq8 = rep.getItemFrom(0);
    sq9 = rep.getItemFrom(1);
    rep.addItem(sq3);
    rep.addItem(sq4);
    rep.addItem(sq5);
    rep.addItem(sq6);
    rep.addItem(sq7);
    rep.addItem(sq8);
    rep.addItem(sq9);
    assert(sq3 == sq1);
    assert(rep.biggestEqualSequence().v[0] == sq3);
    assert(rep.biggestEqualSequence().v[1] == sq4);
    assert(rep.biggestEqualSequence().v[2] == sq5);
    assert(rep.biggestEqualSequence().size == 3);
    sq3 = rep.biggestSquare();
    assert(sq3.getSide() == sq2.getSide());

}
