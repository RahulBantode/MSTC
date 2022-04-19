#include "subway_modularize_header.h"

void make_my_sub(int choice_of_patty, int choice_of_bread, int choice_of_prep, int choice_of_veggies, int choice_of_sauces, int choice_of_addons)
{
  int cnt;
  puts("PATTY...");
  printf("\tGetting ");
  switch (choice_of_patty)
  {
  case SUB_PATTY_PANEER_TIKKA:
    printf("panner tikka");
    break;
  case SUB_PATTY_HARA_BHARA_KEBAB:
    printf("hara bhara kebab");
    break;
  case SUB_PATTY_ALOO:
    printf("aloo patty");
    break;
  case SUB_PATTY_MEXICAN:
    printf("mexican patty");
    break;
  case SUB_PATTY_SHAMMI_KEBAB:
    printf("shammi kebab");
    break;
  }
  printf(" ready");
  cnt = 0;
  sleep_time(cnt, ONE_SECOND);
  printf("\tSlicing ");
  switch (choice_of_bread)
  {
  case SUB_BREAD_MULTIGRAIN:
    printf("multi-grain bread");
    break;
  case SUB_BREAD_HONEY_OAT:
    printf("honey oat bread");
    break;
  case SUB_BREAD_WHITE_ITALIAN:
    printf("white italian bread");
    break;
  case SUB_BREAD_ROASTED_GARLIC:
    printf("paramesan oregano bread");
    break;
  case SUB_BREAD_FLAT:
    printf("flat bread");
    break;
  }
  cnt = 0;
  sleep_time(cnt, ONE_SECOND);
  puts("BREAD...");
  check_bread(&choice_of_prep, "Toasting your bread", SUB_TOASTED_BREAD);
  check_bread(&choice_of_prep, "Adding cheese", SUB_PLAIN_BREAD_WITH_CHEESE_SLICE);

  puts("VEGGIES...");
  check_order(&choice_of_veggies, "lettuce", SUB_VEG_LETTUCE);
  check_order(&choice_of_veggies, "tommato", SUB_VEG_TOMATO);
  check_order(&choice_of_veggies, "cucumber", SUB_VEG_CUCUMBER);
  check_order(&choice_of_veggies, "pickle", SUB_PICKLE);
  check_order(&choice_of_veggies, "capsicum", SUB_VEG_CAPSICUM);
  check_order(&choice_of_veggies, "onions", SUB_VEG_ONIONS);
  check_order(&choice_of_veggies, "jalapenos", SUB_VEG_JALAPENOS);
  check_order(&choice_of_veggies, "salt and pepper", SUB_SALT_AND_PEPPER);

  puts("SAUCES...");
  check_order(&choice_of_sauces, "mayyonaise", SUB_SAUCE_MAYONNAISE);
  check_order(&choice_of_sauces, "mint mayyonaise", SUB_SAUCE_MINT_MAYONNAISE);
  check_order(&choice_of_sauces, "chiptole south west", SUB_SAUCE_CHIPTOLE_SOUTH_WEST);
  check_order(&choice_of_sauces, "honey mustard", SUB_SAUCE_HONEY_MUSTARD);
  check_order(&choice_of_sauces, "red chilli", SUB_SAUCE_RED_CHILLI);
  check_order(&choice_of_sauces, "marirana", SUB_SAUCE_MARINARA);
  check_order(&choice_of_sauces, "barbeque", SUB_SAUCE_BARBEQUE);
  check_order(&choice_of_sauces, "tandoori mayo", SUB_SAUCE_TANDOORI_MAYO);
  check_order(&choice_of_sauces, "sweet onions", SUB_SAUCE_SWEET_ONION);

  puts("ADDONS...");
  check_order(&choice_of_addons, "extra cheese slice", SUB_ADDON_CHEESE_SLICE);
  check_order(&choice_of_sauces, "extra mozzrella cheese", SUB_ADDON_MOZZARELLA_CHEESE);
  check_order(&choice_of_addons, "veg protein", SUB_ADDON_VEG_PROTEIN);
  check_order(&choice_of_addons, "egg", SUB_ADDON_EGG);
  puts("\n\nAdd your sub is ready to eat!!! -Thanks for eating with us-");
  puts("--------------------------------------------------------");
}

void multiple_choices(int *choice, char *choice_string, int choice_constant)
{
  int b_ans = 0;
  printf("Add %s ?[1:yes,0:no] : ", choice_string);
  scanf("%d", &b_ans);
  if (b_ans == 1)
    *choice |= choice_constant;
}

void choice_of_only_one_option(int *choice, char *choice_string, int nr_try, int nr_options)
{
  while (TRUE)
  {
    scanf("%d", choice);
    if (*choice >= 1 && *choice <= nr_options)
      break;
    if (nr_try == 3)
    {
      puts("--------------------------------------------------------");
      puts("Sorry, that we couldn't understand your order.");
      puts("Thank you for using 'Make My Sub' Service");
      puts("--------------------------------------------------------");
      exit(-1);
    }
    nr_try += 1;
    printf("Invalid options:%d time. please try again\n", nr_try);
    printf("Please select the %s :", choice_string);
  }
}

void sleep_time(int cnt, int nr_seconds)
{
  cnt = 0;
  while (cnt < 3)
  {
    printf(".");
    Sleep(nr_seconds);
    cnt += 1;
  }
  puts("[DONE]");
  Sleep(HALF_SECOND);
}

void check_order(int *choice, char *choiced_string, int choice_constant)
{
  int cnt;
  if ((*choice & choice_constant) == choice_constant)
  {
    printf("\tAdding %s", choiced_string);
    cnt = 0;
    sleep_time(cnt, ONE_SECOND);
  }
}

void check_bread(int *choice, char *choiced_string, int choice_constant)
{
  int cnt;
  if (*choice == choice_constant || *choice == SUB_TOASTED_BREAD_WITH_CHEESE_SLICE || *choice == SUB_TOASTED_BREAD_WITH_MOZZARELLA_CHEESE)
  {
    printf("\t%s", choiced_string);
    cnt = 0;
    sleep_time(cnt, ONE_SECOND);
  }
}