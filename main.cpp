#include <iostream>
#include <graphics.h>

using namespace std;

int main()
{
    int gd = DETECT,gm,x,y;
    initgraph(&gd,&gm,"");
    //M line Draw
    line(30,30,30,60);
    line(30,30,40,60);
    line(50,30,40,60);
    line(50,30,50,60);

    //D line Draw
    line(60,30,60,60);
    arc(55,46,290,70,17);

    //A line Draw
    line(110,30,100,60);
    line(110,30,120,60);
    line(100,50,120,50);

    //S line Draw
    //- line Draw
    line(130,30,140,30);
    //First || line Draw
    line(130,30,130,40);
    line(140,30,140,40);
    // \ line Draw
    line(130,40,140,50);
    //Last || line Draw
    line(130,50,130,60);
    line(140,50,140,60);
    // _ line Draw
    line(130,60,140,60);

    //H line Draw
    line(150,30,150,60);
    line(150,45,160,45);
    line(160,30,160,60);

    // R line Draw
    // | line Draw
    line(170,30,170,60);
    // - line Draw
    line(170,30,180,30);
    // - line Draw
    line(170,45,180,45);
    // | line Draw
    line(180,30,180,45);
    // \ line Draw
    line(170,45,180,60);

    //A line Draw
    // / line Draw
    line(200,30,190,60);
    // \ line Draw
    line(200,30,210,60);
    // - line Draw
    line(190,50,210,50);

    // F line Draw
    // | line Draw
    line(220,30,220,60);
    // - line Draw
    line(220,30,230,30);
    // - line Draw
    line(220,45,230,45);

    // U line Draw
    line(240,30,240,60);
    line(255,30,255,60);
    line(240,60,255,60);

    // L line Draw
    line(265,30,265,60);
    line(265,60,275,60);

    //Second Alam Part Start

    //A line Draw
    // / line Draw
    line(320,30,310,60);
    // \ line Draw
    line(320,30,330,60);
    // - line Draw
    line(310,50,330,50);

    // L line Draw
    line(340,30,340,60);
    line(340,60,350,60);

    //A line Draw
    // / line Draw
    line(370,30,360,60);
    // \ line Draw
    line(370,30,380,60);
    // - line Draw
    line(360,50,380,50);

    //M line Draw
    line(390,30,390,60);
    line(390,30,400,60);
    line(410,30,400,60);
    line(410,30,410,60);

    // Zehad Part Start
    // Z line Draw
    line(450,30,470,30);
    line(470,30,450,60);
    line(450,60,470,60);

    // E line Draw
    line(480,30,480,60);
    line(480,30,490,30);
    line(480,45,490,45);
    line(480,60,490,60);

    //H line Draw
    line(500,30,500,60);
    line(500,45,510,45);
    line(510,30,510,60);

    // A line Draw
    // / line Draw
    line(530,30,520,60);
    // \ line Draw
    line(530,30,540,60);
    // - line Draw
    line(520,50,540,50);

    // D line Draw
    line(550,30,550,60);
    arc(545,46,290,70,17);

    getch();
    closegraph();
    return 0;
}
