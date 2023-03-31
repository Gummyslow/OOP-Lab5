//
// Created by Gummy on 3/21/2023.
//

#ifndef LABORATOR5_SQUARE_H
#define LABORATOR5_SQUARE_H

#include <cmath>

struct punct{
    int x,y;
};

class Square{
public:
    /*CONSTRUCTORS*/
    Square();

    Square(const punct &p1, const punct &p2, const punct &p3, const punct &p4);
    bool operator==(const Square& rhs) const;

    /*DESTRUCTOR*/
    virtual ~Square();

    /*GETTERS AND SETTERS*/
    const punct &getP1() const;

    void setP1(const punct &p1);

    const punct &getP2() const;

    void setP2(const punct &p2);

    const punct &getP3() const;

    void setP3(const punct &p3);

    const punct &getP4() const;

    void setP4(const punct &p4);

    double getSide() const;

    void setSide(double side);

private:
    punct p1,p2,p3,p4;
    double side = sqrt(pow(abs(p1.x-p2.x),2) + pow(abs(p1.y-p2.y),2));
};


#endif //LABORATOR5_SQUARE_H
