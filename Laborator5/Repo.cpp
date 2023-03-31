//
//  Created by Gummy
//

#include <iostream>
#include "Repo.h"



Repo::Repo() {
    this -> noSquares = 0;
    squares = new Square[10];
}
Repo::~Repo(){
    
}
void Repo::addItem(Square &sq) {
    this -> squares[this -> noSquares++] = sq;
}

Square Repo::getItemFrom(int pos){
    return this -> squares[pos];
}

int Repo::getSize() const {
    return  this -> noSquares;
}

Square Repo::biggestSquare(){
    double Max = 0, iMax = 0;
    for(int i = 0; i < noSquares; i++)
    {
        double side;
        side = getItemFrom(i).getSide();
        if(side > Max) {
            Max = side;
            iMax = i;
        }
    }
    return getItemFrom(iMax);
}

vect Repo::biggestEqualSequence()
{
    vect w;
    int lMax = 0, st = 0, dr = 0;
    for(int i = 1; i <= noSquares; ++i){
        Square sqr = squares[i];
        int l = 0;
        for(int j = i; j <= noSquares && squares[j] == sqr; ++j)
            l++;
        if(l >= lMax){
            lMax = l;
            st = i;
            dr = i + l - 1;
        }
    }
    int k = -1;
    for(int i = st; i < st + dr; i++)
    {
        w.v[++k] = squares[i];
        w.size = lMax;
    }
    return w;
}

void print_menu(){
    std::cout<<"   MENU   \n";
    std::cout<<"1. Adaugare entitate\n";
    std::cout<<"2. Afisare toate entitatile\n";
    std::cout<<"3. Cea mai mare entitate\n";
    std::cout<<"4. Identificare entitati din cadranul 1\n";
    std::cout<<"5. Cea mai lunga secventa de entitati egale\n";
    std::cout<<"0. Exit\n";
}

void menu(){
    int option;
    Repo repository;
    do {
        print_menu();
        std::cin>>option;
        switch (option) {
            case 1:{
                std::cout << "Introduceti un patrat";
                Square sq1, sq2;
                punct p1, p2, p3, p4;
                p1.x = 1;p1.y = 1;
                p2.x = 1;p2.y = 2;
                p3.x = 2;p3.y = 2;
                p4.x = 2;p4.y = 1;
                sq1 = Square(p1, p2, p3, p4);
                repository.addItem(sq1);
                p1.x = 2;p1.y = 2;
                p2.x = 2;p2.y = 3;
                p3.x = 3;p3.y = 3;
                p4.x = 3;p4.y = 2;
                sq2 = Square(p1, p2, p3, p4);
                repository.addItem(sq2);
                break;
        }
            case 2: {
                for (int i = 0; i<repository.getSize();i++)
                {
                    std::cout<<"Square"<<i+1<<": P1(x,y): " << repository.getItemFrom(i).getP1().x<<','<<repository.getItemFrom(i).getP1().y<<" P2(x,y): " << repository.getItemFrom(i).getP2().x<<','<<repository.getItemFrom(i).getP2().y<<" P3(x,y): "<< repository.getItemFrom(i).getP3().x<<','<<repository.getItemFrom(i).getP3().y<<" P4(x,y): "<< repository.getItemFrom(i).getP4().x<<','<<repository.getItemFrom(i).getP4().y<< '\n';
                }
                break;
            }
            case 3: {
                break;
            }
            case 4: {
                break;
            }
            case 0: {
                break;
            }
            default:{
                std::cout << "Optiunea aleasa nu este implementata! \n";}
            }
    } while (option != 0);
}