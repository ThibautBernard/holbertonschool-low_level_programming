#include <stdio.h>
#include "holberton.h"

void leapYear(int month, int day, int year)
{
	if ((month <= 0 || month > 12) && (day < 1 || day > 31))
	{
		printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
	}
	else
	{
		printf("Day of the year: %d\n", day);
		printf("Remaining days: %d\n", 366 - day);
	}
}

void normalYear(int month, int day, int year)
{
	if ((month <= 0 || month > 12) && (day < 1 || day > 31))
	{
		printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
	}
	else
	{
		printf("Day of the year: %d\n", day);
		printf("Remaining days: %d\n", 365 - day);
	}
}

/**
 * print_remaining_days - takes a date and prints how many days are
 * left in the year, taking leap years into account
 * @month: month in number format
 * @day: day of month
 * @year: year
 * Return: void
 */
void print_remaining_days(int month, int day, int year)
{ 
 
	if ((year % 4 == 0 && year % 400 == 0) && (year % 100 == 0))
	{
		if ((month == 4 || month == 6 || month == 9 || month == 11) && (day == 31))
		{  
			printf("Invalid date: %02d/%02d/%04d\n", month, day, year);	
		}
		else
		{
			leapYear(month, day, year);
		}
	}
	else
	{
		if ((month == 4 || month == 6 || month == 9 || month == 11) && day == 31)
		{
			printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
		}
		else	
		{
			normalYear(month, day, year);
		}
	}
}
