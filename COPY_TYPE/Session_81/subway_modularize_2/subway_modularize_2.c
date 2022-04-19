#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

#define TRUE 1
#define HALF_SECOND 500
#define ONE_SECOND 1000
/* Patty Flag - Select only one option */
#define SUB_PATTY_PANEER_TIKKA 1
#define SUB_PATTY_HARA_BHARA_KEBAB 2
#define SUB_PATTY_ALOO 3
#define SUB_PATTY_MEXICAN 4
#define SUB_PATTY_SHAMMI_KEBAB 5
/* Bread flag - Select only one option */
#define SUB_BREAD_MULTIGRAIN 1
#define SUB_BREAD_HONEY_OAT 2
#define SUB_BREAD_WHITE_ITALIAN 3
#define SUB_BREAD_ROASTED_GARLIC 4
#define SUB_BREAD_PARMSEAN_OREGAND 5
#define SUB_BREAD_FLAT 6
/* Choice of preparation flags - Select only one option */
#define SUB_PLAIN_BREAD 1
#define SUB_PLAIN_BREAD_WITH_CHEESE_SLICE 2
#define SUB_TOASTED_BREAD 3
#define SUB_TOASTED_BREAD_WITH_CHEESE_SLICE 4
#define SUB_TOASTED_BREAD_WITH_MOZZARELLA_CHEESE 5
/* Add on flags : More than one option is valid */
#define SUB_ADDON_CHEESE_SLICE 1
#define SUB_ADDON_MOZZARELLA_CHEESE 2
#define SUB_ADDON_VEG_PROTEIN 4
#define SUB_ADDON_EGG 8
/* Choice of veg -> More than one option is valid */
#define SUB_VEG_LETTUCE 1
#define SUB_VEG_TOMATO 2
#define SUB_VEG_CUCUMBER 4
#define SUB_PICKLE 8
#define SUB_VEG_CAPSICUM 16
#define SUB_VEG_ONIONS 32
#define SUB_VEG_JALAPENOS 64
#define SUB_SALT_AND_PEPPER 128
/* Choice of sauce -> More than one option is valid */
#define SUB_SAUCE_MAYONNAISE 1
#define SUB_SAUCE_MINT_MAYONNAISE 2
#define SUB_SAUCE_CHIPTOLE_SOUTH_WEST 4
#define SUB_SAUCE_HONEY_MUSTARD 8
#define SUB_SAUCE_RED_CHILLI 16
#define SUB_SAUCE_MARINARA 32
#define SUB_SAUCE_BARBEQUE 64
#define SUB_SAUCE_TANDOORI_MAYO 128
#define SUB_SAUCE_SWEET_ONION 256

void make_my_sub(int choice_of_patty, int choice_of_bread, int choice_of_prep, int choice_of_veggies, int choice_of_sauces, int choice_of_addons);
void choice_of_only_one_option(int *choice, char *choice_string, int nr_try, int nr_options);
void sleep_time(int cnt, int nr_seconds);
void multiple_choices(int *choice, char *choice_string, int choice_constant);
void check_order(int *choice, char *choiced_string, int choice_constant);
void check_bread(int *choice, char *choiced_string, int choice_constant);

int main(void)
{
  int choice_of_patty, choice_of_bread, choice_of_prep, choice_of_addons, choice_of_veggies, choice_of_sauces;
  int nr_try, b_ans, cnt, nr_options;

  puts("Make Your Own SUB!!!");
  puts("[1]Paneer Tikka");
  puts("[2]Hara Bhara Kebab");
  puts("[3]Aloo Patty");
  puts("[4]Mexican Patty");
  puts("[5]Shammi Kebab");
  puts("Please select your patty:");
  nr_try = 0;
  nr_options = 5;
  choice_of_only_one_option(&choice_of_patty, "patty", nr_try, nr_options);

  puts("--------------------------------------------------------");
  puts("[1]Multigrain bread");
  puts("[2]Honey Oat bread");
  puts("[3]White Italian bread");
  puts("[4]Roasted Garlic bread");
  puts("[5]Parmesan Oregano");
  puts("[6]Flat bread");
  printf("Please select you bread:");
  nr_try = 0;
  nr_options = 6;
  choice_of_only_one_option(&choice_of_bread, "bread", nr_try, nr_options);

  puts("--------------------------------------------------------");
  puts("[1]Plain bread");
  puts("[2]Plain bread with cheese slice");
  puts("[3]Toasted bread");
  puts("[4]Toasted bread with cheese slice");
  puts("[5]Toasted bread with mozarella cheese");
  printf("Please tell us how should be prepare you bread:");
  nr_try = 0;
  nr_options = 5;
  choice_of_only_one_option(&choice_of_prep, "prepare your bread", nr_try, nr_options);

  puts("--------------------------------------------------------");
  puts("Let;s select your veggies!");
  choice_of_veggies = 0;
  multiple_choices(&choice_of_veggies, "lettuce", SUB_VEG_LETTUCE);
  multiple_choices(&choice_of_veggies, "tommato", SUB_VEG_TOMATO);
  multiple_choices(&choice_of_veggies, "cucumber", SUB_VEG_CUCUMBER);
  multiple_choices(&choice_of_veggies, "pickle", SUB_PICKLE);
  multiple_choices(&choice_of_veggies, "capsicum", SUB_VEG_CAPSICUM);
  multiple_choices(&choice_of_veggies, "onions", SUB_VEG_ONIONS);
  multiple_choices(&choice_of_veggies, "jalpenos", SUB_VEG_JALAPENOS);
  multiple_choices(&choice_of_veggies, "salt and pepper", SUB_SALT_AND_PEPPER);

  puts("--------------------------------------------------------");
  puts("Lets add yummy sauces to your sandwitch!");
  choice_of_sauces = 0;
  multiple_choices(&choice_of_sauces, "mayonnaise", SUB_SAUCE_MAYONNAISE);
  multiple_choices(&choice_of_sauces, "mint mayyonnaise", SUB_SAUCE_MINT_MAYONNAISE);
  multiple_choices(&choice_of_sauces, "chiptole south west", SUB_SAUCE_CHIPTOLE_SOUTH_WEST);
  multiple_choices(&choice_of_sauces, "honey mustard", SUB_SAUCE_HONEY_MUSTARD);
  multiple_choices(&choice_of_sauces, "red chilli", SUB_SAUCE_RED_CHILLI);
  multiple_choices(&choice_of_sauces, "marirana", SUB_SAUCE_MARINARA);
  multiple_choices(&choice_of_sauces, "barbeque", SUB_SAUCE_BARBEQUE);
  multiple_choices(&choice_of_sauces, "tandoori mayo", SUB_SAUCE_TANDOORI_MAYO);
  multiple_choices(&choice_of_sauces, "sweet onion", SUB_SAUCE_SWEET_ONION);

  puts("--------------------------------------------------------");
  puts("Let's make your sub extra special");
  choice_of_addons = 0;
  multiple_choices(&choice_of_addons, "cheese slice", SUB_ADDON_CHEESE_SLICE);
  multiple_choices(&choice_of_addons, "mozarella cheese", SUB_ADDON_MOZZARELLA_CHEESE);
  multiple_choices(&choice_of_addons, "veg protein", SUB_ADDON_VEG_PROTEIN);
  multiple_choices(&choice_of_addons, "egg", SUB_ADDON_EGG);

  puts("--------------------------------------------------------");
  printf("Placing the order");
  cnt = 0;
  sleep_time(cnt, ONE_SECOND);
  puts("Preparing your sub");
  make_my_sub(choice_of_patty, choice_of_bread, choice_of_prep, choice_of_veggies, choice_of_sauces, choice_of_addons);
  exit(0);
}

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