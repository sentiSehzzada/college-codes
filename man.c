#include<stdio.h>
#include<graphics.h>
int main(0
{
int gd = DETECT,gm;
init graph(&gd, &gm , " ");
circle(100,100,50);
line(100,150,100,250);
line(100,180,40,150);
line(100,180,160,150);
line(100,250,40,350);
line(100,250,160,350);
delay(1000);
close graph();
return 0;
}