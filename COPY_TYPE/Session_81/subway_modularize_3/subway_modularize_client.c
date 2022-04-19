#include "subway_modularize_header.h"

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
