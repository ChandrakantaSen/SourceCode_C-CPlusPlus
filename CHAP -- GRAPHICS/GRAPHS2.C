#include <stdio.h>
#include <math.h>

void moveto(double x, double y)
{
printf("%f %f moveto\n", x, y);
}

void lineto(double x, double y)
{
printf("%f %f lineto\n", x, y);
}

void color(double r, double g, double b)
{
if(r < 0) r = 0;
if(g < 0) g = 0;
if(b < 0) b = 0;
if(r > 1) r = 1;
if(g > 1) g = 1;
if(b > 1) b = 1;
printf("%f %f %f setrgbcolor\n", r, g, b);
}

void plotfunc(double (*func)(double),
double min, double max, double step,
double x1, double x2,
double y1, double y2, double scale)
{
int inbounds = 0;
double i;
for(i = min; i < max; i += step)
{
double x = x1 + (i - min) / (max - min) * (x2 - x1);
double y = (y1 + y2) / 2 + scale * func(i);
if(y < y1 || y > y2)
{
if(inbounds) puts("stroke");
inbounds = 0;
}
else
{
if(inbounds)
{
lineto(x, y);
}
else
{
moveto(x, y);
inbounds = 1;
}
}
}
if(inbounds) puts("stroke");
}

void main(void)
{
/* header */
puts("%!PS-Adobe-3.0");
puts("1 setlinewidth");

/* three plots */
color(1, 0, 0);
plotfunc(sin, -4, 4, 0.01, 0, 400, 0, 400, 50);
color(0, 1, 0);
plotfunc(cos, -4, 4, 0.01, 0, 400, 0, 400, 50);
color(0, 0, 1);
plotfunc(tan, -4, 4, 0.01, 0, 400, 0, 400, 50);

/* axes */
color(0, 0, 0);
moveto(000, 200); lineto(400, 200);
puts("stroke");
moveto(200, 000); lineto(200, 400);
puts("stroke");

/* footer */
puts("showpage");
puts("%%EOF");

getch();
}