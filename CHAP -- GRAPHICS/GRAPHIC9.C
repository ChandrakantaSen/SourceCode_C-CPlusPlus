#include<stdlib.h>
#include<graphics.h>
#include<conio.h>
#include<stdio.h>
void main()
{
    int driver, mode;
    int i,j;
    driver = DETECT;
    initgraph(&driver,&mode,"");
    outtextxy(250,450,"ISO OSI Model");
    delay(2000);
    outtextxy(90,30,"Sender");
    delay(500);
    setcolor(6);
    for(i=50;i<=350;i+=50)
    {
        rectangle(200,i,50,i+30);
        delay(500);
    }
    setcolor(10);
    outtextxy(70,60,"Application");
    delay(500);
    outtextxy(70,110,"Presentation");
    delay(500);
    outtextxy(70,160,"Session");
    delay(500);
    outtextxy(70,210,"Transport");
    delay(500);
    outtextxy(70,260,"Network");
    delay(500);
    outtextxy(70,310,"Data Link");
    delay(500);
    outtextxy(70,360,"Physical");
    delay(500);
    setcolor(15);
    outtextxy(390,30,"Receiver");
    delay(500);
    setcolor(6);
    for(i=50;i<=350;i+=50)
    {
        rectangle(350,i,500,i+30);
        delay(500);
    }
    setcolor(10);
    outtextxy(370,60,"Application");
    delay(500);
    outtextxy(370,110,"Presentation");
    delay(500);
    outtextxy(370,160,"Session");
    delay(500);
    outtextxy(370,210,"Transport");
    delay(500);
    outtextxy(370,260,"Network");
    delay(500);
    outtextxy(370,310,"Data Link");
    delay(500);
    outtextxy(370,360,"Physical");
    delay(500);
    // sender Lines
    line(120,80,120,100);
    delay(500);
    line(120,130,120,150);
    delay(500);
    line(120,180,120,200);
    delay(500);
    line(120,230,120,250);
    delay(500);
    line(120,280,120,300);
    delay(500);
    line(120,330,120,350);
    delay(500);
    line(120,380,120,400);
    delay(500);
    // Physical Connection
    line(120,400,420,400);
    // Receiver Lines
    line(420,380,420,400);
    delay(500);
    line(420,330,420,350);
    delay(500);
    line(420,280,420,300);
    delay(500);
    line(420,230,420,250);
    delay(500);
    line(420,180,420,200);
    delay(500);
    line(420,130,420,150);
    delay(500);
    line(420,80,420,100);
    //virtual connection
    setcolor(15);
    delay(500);
    outtextxy(210,35,"Virtual Connection");
    delay(1000);
    for(j=65;j<=365;j+=50)
    {
        for(i=0;i< 15;i++)
        {
            setcolor(i);
            line(200,j,230,j);
            delay(10);
            line(235,j,265,j);
            delay(10);
            line(270,j,300,j);
            delay(10);
            line(305,j,335,j);
            delay(10);
            line(340,j,350,j);
            delay(10);
        }
    }
    delay(500);
}