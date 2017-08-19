//Andrew Hedy
//Lab 4
/* Program: game.cpp */
#include "ccc_win.h"
#include <iostream>
using namespace std;
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
cwin << Message(Point(20,50),"The Game is not available");
cwin.get_mouse("Click to continue");
cwin.clear();
}
if (word== "nim")
{
cwin.clear();
cwin << Message(Point(20,50),"The Game is not avalable");
cwin.get_mouse("Click to continue");
cwin.clear();
}
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
word=cwin.get_string("Please input your selection: ");
}
cwin.clear();
return 0;
}
