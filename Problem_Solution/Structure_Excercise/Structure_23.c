/*
  IPL Structure
*/

#include <stdio.h>
#include <stdlib.h>

struct Date
{
  int day;
  int month;
  int year;
};

struct IPL
{
  int season_number;
  char *sponsor_name;
  int total_teams;
  char *teams_Name[10];
  char *team_captains_name[10];
  int total_number_of_matches;
  struct Date opening_date;
  struct Date final_match_date;
  char *expected_stadium_list[10];
};

void Enter_Team_Name(char **ptr, int size);
void Enter_Captain_Name(char **ptr, int size);
void Enter_Stadium_Name(char **ptr, int size);

int main(void)
{
  struct IPL ipl;
  ipl.season_number = 11;
  ipl.sponsor_name = "Mr. Ratan Tata group";
  ipl.total_teams = 10;
  ipl.total_number_of_matches = 78;
  ipl.opening_date.day = 26;
  ipl.opening_date.month = 03;
  ipl.opening_date.year = 2022;
  ipl.final_match_date.day = 15;
  ipl.final_match_date.month = 05;
  ipl.final_match_date.year = 2022;

  Enter_Team_Name(&ipl.teams_Name[0], 10);
  Enter_Captain_Name(&ipl.team_captains_name[0], 10);
  Enter_Stadium_Name(&ipl.expected_stadium_list[0], 5);

  puts("-------- Indian Premier League,2022 --------------");
  printf("Season number : %d\n", ipl.season_number);
  printf("Sponsor Name : %s\n", ipl.sponsor_name);
  printf("Total Teams : %d\n", ipl.total_teams);
  printf("Total number of matches : %d\n", ipl.total_number_of_matches);
  printf("Opening Date : %d/%d/%d\n", ipl.opening_date.day, ipl.opening_date.month, ipl.opening_date.year);
  printf("Final Date : %d-%d-%d\n", ipl.final_match_date.day, ipl.final_match_date.month, ipl.final_match_date.year);
  int i;
  puts("The teams Name are as follows : ");
  for (i = 0; i < 10; ++i)
    printf("Team [ %d ] : %s\n", i + 1, ipl.teams_Name[i]);

  puts("The Captains Name are  as follows : ");
  for (i = 0; i < 10; ++i)
    printf("Cpatain Name [ %d ] : %s\n", i + 1, ipl.team_captains_name[i]);

  puts("Expected Stadium are as follows : ");
  for (i = 0; i < 5; ++i)
    printf("Stadium [ %d ] : %s\n", i + 1, ipl.expected_stadium_list[i]);

  exit(0);
}

void Enter_Team_Name(char **ptr, int size)
{
  *(ptr + 0) = "Mumbai Indians";
  *(ptr + 1) = "Chennai Super Kings";
  *(ptr + 2) = "Royal Challegers Banglore";
  *(ptr + 3) = "Sunrisers Hyderabad";
  *(ptr + 4) = "Kings 11 punjab";
  *(ptr + 5) = "Delhi Derdavils";
  *(ptr + 6) = "Rajsthan Royals";
  *(ptr + 7) = "Kolkata Knight Riders";
  *(ptr + 8) = "Gujrath Titans";
  *(ptr + 9) = "Lucknow super giants";
}

void Enter_Captain_Name(char **ptr, int size)
{
  int i;
  for (i = 0; i < size; ++i)
  {
    printf("Enter the captain [ %d ] = ", (i + 1));
    scanf("%s", *(ptr + i));
  }
}

void Enter_Stadium_Name(char **ptr, int size)
{
  int i;
  for (i = 0; i < size; ++i)
  {
    printf("Enter the stadium name [ %d ] = ", (i + 1));
    scanf("%s", *(ptr + i));
  }
}
