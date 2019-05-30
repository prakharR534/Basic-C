#include<stdio.h>
#include<conio.h>
#include<graphics.h>


int main(int argc, char const *argv[])
{
	int gd = DETECT , gm;
	initgraph(&gd , &gm , "Your path to lib_of_c_graphics");

	outtextxy(10,20,"graphics programming in c");

	//defalut circle function
	circle(200,200,50);

	setcolor(BLUE);

	//default line function
	line(350,250,450,50);
	getch();

	closegraph();
	//it is highly recommanded to close the graph.
	return 0;
}