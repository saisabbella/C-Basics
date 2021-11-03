#include<stdio.h>
void main()
{
	int total_minutes, hour,minutes;
	hour=4;
	minutes=1;
	total_minutes= hour*60+minutes;
	hour=total_minutes*60;
	minutes=total_minutes%60;
	printf("%d minutes",total_minutes);
}
