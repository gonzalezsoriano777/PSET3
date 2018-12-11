// Helper functions for music

#include <cs50.h>
#include <string.h>
#include "helpers.h"
#include <stdio.h>
#include <math.h>



// Converts a fraction formatted as X/Y to eighths
int duration(string fraction)
{
    int xword = atoi(&fraction[0]);
    int yword = atoi(&fraction[2]);
    int Dur = (8. / yword) * xword;
    return Dur;
}

// Calculates frequency (in Hz) of a note
int frequency(string note)
{
    int oct; // Octave
    int n = 0; // How the note will start from
    if (strlen(note) == '3')
    {
        oct = atoi(&note[2]);
        char accident = note[1];
        if (accident=='#'){
            n += 1;
        }else if (accident == 'b'){
            n -= 1;
        }
    }
    else
    {
        oct = atoi(&note[1]); // Octave formula
    }
    char letter = note[0];

    if (letter=='A'){
        n += 0;
    }
    else if (letter=='B')
    {
        n += 2;
    }
    else if (letter=='C')
    {
        n -= 9;
    }
    else if (letter=='D')
    {
        n -= 7;
    }
    else if (letter=='E')
    {
        n -= 5;
    }
    else if (letter=='F')
    {
        n -= 4;
    }
    else if (letter=='G')
    {
        n -= 2;
    }
    n += (oct-4) * 12;

    float power = n/12.;
    float f = round(pow(2, power)*440);
    return f;
    }

// Determines whether a string represents a rest
bool is_rest(string s)
{
    if (strlen(s) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
