#include<stdio.h>
#include<graphics.h>
int main()
{
    int gd = VGAMAX, x1,x2,y1,y2,x, y, dx, dy,i;
    printf("enter x1 and y1 : ");
    scanf("%d %d", &x1,&y1);
    printf("\n Enter x2 and y2 : ");
    scanf("%d %d ", &x2, &y2);
    init graph(&gd, &gm, " ");
    dx = x2-x1;
    dy = y2-y1;
    if(dx>= dy)
    x= dx;
    else
    x = dx;
    dx = dx/x;
    dy = dy/y;
    x = x1;
    y = y1;
    for( i= 1; 1<=x; i++)
    {
        putpixel(x,y,5);
        x = x+dx;
        y = y+dy;

    }
    delay(1000);
    close graph();
    return 0;
    
}