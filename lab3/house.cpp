//Andrew Hedy
//House

/* Program: house.cpp */

#include "ccc_win.h"
#include <iostream> 
using namespace std;
int ccc_win_main()
{  
cwin.coord(0,100,100,0);
Point one(50,75),two(25,50),three(25,15),four(75,15),five(75,50);
Point six(55,25),seven(45,25),eight(45,15);
Point nine(55,15),ten(30,40),eleven(35,40),twelve(30,35), thirteen(35,35);
Line lin(one,two);
cwin<<lin;
Line lintwo(two,three);
cwin<<lintwo;
Line linthree(three,four);
cwin<<linthree;
Line linfour(four,five);
cwin<<linfour;
Line linfive(five,one);
cwin<<linfive;
Line linsix(five,two);
cwin<<linsix;
Line linseven(six,seven);
cwin<<linseven;
Line lineight(seven,eight);
cwin<<lineight;
Line linnine(nine,six);
cwin<<linnine;
Line linten(ten,eleven);
cwin<<linten;
Line lineleven(ten,twelve);
cwin<<lineleven;
Line lintwelve(eleven,thirteen);
cwin<<lintwelve;
Line linthirteen(twelve,thirteen);
cwin<<linthirteen;
}

