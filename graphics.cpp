#include<stdio.h>
#include<graphics.h>
int main()
{
    int gd=DETECT, graphmode;
    initgraph(&gd, &graphmode,(char*) "C:/MinGW/BGI");
    line(10,20,30,40);
    return 0;
}