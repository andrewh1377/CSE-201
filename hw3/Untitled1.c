//Andrew Hedy
//Homework 3
/* Program: game.cpp */
#include <iostream>
#include <ctime>
#include <cmath>
using namespace std;
void shellgame()
{
if pick=1
double dist(p1,p2)
cwin.coord(0,100,100,0);
int wager=cwin.get_int("please enter a wager: ");
Point a(25,75), b(75,75), c(50,25);
cwin<< Circle(a,15);
cwin<< Circle(b,15);
cwin<< Circle(c,15);
cwin.get_mouse("Please choose a circle");
int pick = time(0)%3+1;
double x1= p1.get_x();
double x2= p2.get_x();
double y1= p1.get_y();
double y2= p2.get_y();
double d= sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
Point p= cwin.get_mouse("Click in circle");
cwin.clear();
}
int ccc_win_main()
{
cwin.coord(0,100,100,0);
Point shell(25,75), nim(75,75), quit(50,25);
cwin<< Circle(shell,15);
cwin<< Circle(nim,15);
cwin<< Circle(quit,15);
Message s=Message(Point(22,75),"Shell");
cwin<<s;
Message n=Message(Point(72,75),"nim");
cwin<<n;
Message q=Message(Point(47,25),"quit");
cwin<<q;
string word=cwin.get_string("Please input your selection: ");
while (word!= "quit")
{
if (word== "shell")
{
cwin.clear();
shellgame();
}
if (word== "nim")
{
cwin.clear();
cwin << Message(Point(20,50),"The Game is not avalable");
cwin.get_mouse("Click to continue");
cwin.clear();
}
/*Point shell(25,75), nim(75,75), quit(50,25);
cwin<< Circle(shell,15);
cwin<< Circle(nim,15);
cwin<< Circle(quit,15);
Message s=Message(Point(22,75),"Shell");
cwin<<s;
Message n=Message(Point(72,75),"nim");
cwin<<n;
Message q=Message(Point(47,25),"quit");
cwin<<q;
word=cwin.get_string("Please input your selection: ");*/
}
cwin.clear();
return 0;
}
