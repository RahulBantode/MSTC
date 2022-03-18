/*
    Structure Related to the Songs
*/

#include <stdio.h>
#include <stdlib.h>

struct Music
{
    char *lyrics_first_line;
    float play_time;
    char *composer_name;
    char *write_name;
    char *singer_name;
    char *movie_name;
    char *Actors_in_song[10];
    int year_of_movie;
};

int main(void)
{
    struct Music music;

    music.lyrics_first_line = "Teri mitti me mil java";
    music.play_time = 4.45;
    music.composer_name = "Arko Pravo Mukhrjee";
    music.write_name = "Manoj Munatashir";
    music.singer_name = "B Prank";
    music.movie_name = "Kesari";
    music.Actors_in_song[0] = "Akshay Kumar";
    music.Actors_in_song[1] = "Parneeti Chopra";
    music.year_of_movie = 2019;

    puts("------------------- S O N G --------------------");
    printf("Lyrics : %s\n", music.lyrics_first_line);
    printf("Play Time : %f\n", music.play_time);
    printf("Singer Name : %s\n", music.singer_name);
    printf("Writer Name : %s\n", music.write_name);
    printf("Composer Name : %s\n", music.composer_name);
    printf("Actors : %s , %s\n", music.Actors_in_song[0], music.Actors_in_song[1]);
    printf("Movie Year : %d\n", music.year_of_movie);

    exit(0);
}

/* OUTPUT :-
------------------- S O N G --------------------
Lyrics : Teri mitti me mil java
Play Time : 4.450000
Singer Name : B Prank
Writer Name : Manoj Munatashir
Composer Name : Arko Pravo Mukhrjee
Actors : Akshay Kumar , Parneeti Chopra
Movie Year : 2019

*/