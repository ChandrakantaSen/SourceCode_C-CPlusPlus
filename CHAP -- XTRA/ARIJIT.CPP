#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
enum weekday{mon,tue,wed,thu,fri,sat,sun};
enum weekday today,holyday;
int diff;
today=fri;
holyday=sun;
diff=holyday-today;
printf("next holyday is after %d days.",diff);
getch();
}
