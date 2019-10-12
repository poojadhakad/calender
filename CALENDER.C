#include<stdio.h>
#include<conio.h>
int get_1st_weekDay(int year)
{
int day;
day=(((year-1)*365)+((year-1)/4)-((year-1)/100)+((year)/400)+1)%7;
return day;
}
char *months[]={"january","february","march","april","may","june","july","august","september","october","november","december"};
int monthDay[]={31,28,31,30,31,30,31,31,30,31,30,31};
void main()
{
int year,month,day,daysInMonth,weekDay=0,startingDay;
printf("\nEnter the year:");
scanf("%d",&year);

if((year%4==0&&year%100!=0)||year%400==0)
monthDay[1]=29;
startingDay=get_1st_weekDay(year);
for(month=0;month<12;month++)
{
daysInMonth=monthDay[month];
printf("\n\n-------%s-------\n",months[month]);
printf("\nSUN\tMON\tTUES\tWED\tTHURS\tFRI\tSAT\n");
for(weekDay=0;weekDay<startingDay;weekDay++)
printf("\t");
for(day=1;day<=daysInMonth;day++)
{
printf("%d\t",day);
if(++weekDay>6)
{
printf("\n");
weekDay=0;
}
startingDay=weekDay;
}
}
getch();
}
