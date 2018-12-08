// Helper functions for music

#include <cs50.h>
#include <string.h>
#include "helpers.h"
#include <stdio.h>
#include <math.h>



// Converts a fraction formatted as X/Y to eighths
int duration(string fraction)
{

}

// Calculates frequency (in Hz) of a note
int frequency(string note)
{
    // TODO
}

// Determines whether a string represents a rest
bool is_rest(string s)
{
     if(strlenl(s) == 0)
     {
         return true;
     }
     else
     {
         return false;
     }
}
