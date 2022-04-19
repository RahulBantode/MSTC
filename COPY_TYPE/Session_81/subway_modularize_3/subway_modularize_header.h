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