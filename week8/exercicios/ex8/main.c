#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char * fiveDaysAhead(char * date);
int isLeapYear(int year);
int lastDayOfMonth(int month, int year);
int splitDayAndConvertToInteger(char * date);
int splitMonthAndConvertToInteger(char * date);
int splitYearAndConvertToInteger(char * date);
int isMonthOfThirtyOneDays(int month);
int isMonthOfThirtyDays(int month);

int main(int argc, char const *argv[]) {
  char date[10];

  printf("Insira uma data\n");
  printf("Fomato DD/MM/YYYY: ");
  scanf("%10[^\n]", &date);

  printf("Date 5 days ahead: %s\n", fiveDaysAhead(date));
  return 0;
}

char * fiveDaysAhead(char * date){
  int day = splitDayAndConvertToInteger(date);
  int month = splitMonthAndConvertToInteger(date);
  int year = splitYearAndConvertToInteger(date);
  char * date_fiveDaysAhead_formated;

  date_fiveDaysAhead_formated = malloc(10 * sizeof(char));

  day += 5;

  if(day > lastDayOfMonth(month, year)) {
    day -= lastDayOfMonth(month, year);
    if (month == 12) {
      month = 1;
      year++;
    } else {
      month++;
    }
  }
  
  sprintf(date_fiveDaysAhead_formated, "%d/%d/%d", day, month, year);

  return date_fiveDaysAhead_formated;
}

int splitDayAndConvertToInteger(char * date) {
  char day[2] = { date[0], date[1] };
  return atoi(day);
}

int splitMonthAndConvertToInteger(char * date) {
  char month[2] = { date[3], date[4] };
  return atoi(month);
}

int splitYearAndConvertToInteger(char * date) {
  char year[4] = { date[6], date[7], date[8], date[9] };
  return atoi(year);
}

int lastDayOfMonth (int month, int year) {
  if (isMonthOfThirtyOneDays(month)) 
    return 31;
  else if (isMonthOfThirtyDays(month))
    return 30;
  else
    if (isLeapYear(year))
      return 29;
    else
      return 28;
}

int isMonthOfThirtyOneDays(int month) {
  int monthOfThirtyOneDays[] = { 1, 3, 5, 7, 8, 10, 12 };

  for(int i = 0; i < 7; i++)
    if(monthOfThirtyOneDays[i] == month) 
      return 1;

  return 0;
}

int isMonthOfThirtyDays(int month) {
  int monthOfThirtyDays[] = { 4, 6, 9, 11 };

  for(int i = 0; i < 4; i++)
    if(monthOfThirtyDays[i] == month)
      return 1;

  return 0;
}

int isLeapYear (int year) {
  if(year % 4 == 0)
    if(year % 100 == 0) 
      if(year % 400 == 0)
        return 1;
      else
        return 0;
    else
      return 1;
  else
    return 0;
}
