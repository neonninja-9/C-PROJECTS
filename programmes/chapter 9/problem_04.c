// Write a program to illustrate the use of arrow operator → in C.
#include <stdio.h>
#include <string.h>
typedef struct anime
{
    char name[30];
    int episodes;
    char type[20];

} anime;

int main()
{
    anime animes[20];    // array that can store data of 20 animes
    anime *ptr = animes; // ptr pointing at first element of array anime
    char *animeList[100] = {
        "Naruto",
        "One Piece",
        "Attack on Titan",
        "My Hero Academia",
        "Fullmetal Alchemist: Brotherhood",
        "Death Note",
        "Sword Art Online",
        "Dragon Ball Z",
        "Hunter x Hunter",
        "Demon Slayer",
        "Tokyo Ghoul",
        "Fairy Tail",
        "Bleach",
        "One Punch Man",
        "Steins;Gate",
        "Code Geass",
        "Black Clover",
        "Jujutsu Kaisen",
        "Re:Zero",
        "Mob Psycho 100"}; // 20 anime names

    // Copy names into the struct array
    for (int i = 0; i < 20; i++)
    {

        strcpy(animes[i].name, animeList[i]); // it's strcpy not strcyp remember it
    }

    // Print names using the pointer
    for (int i = 0; i < 20; i++)
    {
        printf("%s\n", ptr->name); // here we used ARROW OPERATOR
        ptr++;
    }

    return 0;
}