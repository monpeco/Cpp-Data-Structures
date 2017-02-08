#include <stdio.h>
// #include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <time.h>

/* Function prototypes. */
void generateSentences(const char *article_gen[], const char *noun_gen[], const char *verb_gen[], const char *preposition_gen[]);


int main()
{
    const char *article[5] = {"the", "a", "one", "some", "any"};
    const char *noun[5] = {"boy", "girl", "dog", "town", "car"};
    const char *verb[5] = {"drove", "jumped", "ran", "waled", "skipped"};
    const char *preposition[5] = {"to", "from", "over", "under", "on"}; 

    srand(time(0));

    generateSentences(article,noun,verb,preposition);

    //getch();
    return 0;
}

void generateSentences(const char *article_gen[], const char *noun_gen[], const char *verb_gen[], const char *preposition_gen[])
{
    int cant;
    int sub_article1;
    int sub_article2;
    int sub_noun1;
    int sub_noun2;
    int sub_verb;
    int sub_preposition;

    for(cant = 1; cant <= 20; cant++)
    {
        sub_article1 = rand()%5;
        sub_article2 = rand()%5;
        sub_noun1 = rand()%5;
        sub_noun2 = rand()%5;
        sub_verb = rand()%5;
        sub_preposition = rand()%5;

        printf("\n%s %s %s %s %s %s.\n", article_gen[sub_article1], noun_gen[sub_noun1], verb_gen[sub_verb], preposition_gen[sub_preposition], article_gen[sub_article2], noun_gen[sub_noun2]);
    }
}
