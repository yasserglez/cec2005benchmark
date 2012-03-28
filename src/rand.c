/* Definition of random number generation routines */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include <R.h>

#include "global.h"
#include "rand.h"

/* Get seed number for random and start it up */
void randomize()
{
    return;
}

/* Fetch a single random number between 0.0 and 1.0 */
long double randomperc()
{
    double res;

    GetRNGstate();
    res = unif_rand();
    PutRNGstate();

    return res;
}

/* Fetch a single random integer between low and high including the bounds */
int rnd(int low, int high)
{
    int res;
    if (low >= high) {
        res = low;
    } else {
        res = low + (randomperc() * (high - low + 1));
        if (res > high) {
            res = high;
        }
    }
    return (res);
}

/* Fetch a single random real number between low and high including the bounds */
long double rndreal(long double low, long double high)
{
    return (low + (high - low) * randomperc());
}

/* Initialize the randome generator for normal distribution */
void initrandomnormaldeviate()
{
    return;
}

/* Return the noise value */
long double noise(long double mu, long double sigma)
{
    return ((randomnormaldeviate() * sigma) + mu);
}

/* Compute the noise */
long double randomnormaldeviate()
{
    double res;

    GetRNGstate();
    res = norm_rand();
    PutRNGstate();

    return res;
}
