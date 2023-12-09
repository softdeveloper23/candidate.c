#include <stdio.h>
#include "cs50.h"

typedef struct
{
    string name;
    int votes;
} candidate;

int main(void)
{
    candidate president = get_candidate("Enter a candidate: ");
}

candidate get_candidate(string prompt)
{
    printf("%s", prompt);

    candidate c;
    c.name = get_string("Enter a name: ");
    c.votes = get_int("Enter votes: ");
    return c;
}