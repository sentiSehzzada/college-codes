#include<stdio.h>
#include<graphics.h>
int main(0
{
int gd = DETECT,gm;
init graph(&gd, &gm , " ");
rectangle(100,100,200,200);
line(100,100,150,50);
line(150,50,200,100);
line(130,200,130,140);
line(130,140,160,140);
line(160,140,160,200);
delay(1000);
close graph();
return 0;
}