#include "function.h"
#include "stddef.h"
#include <iostream>
/*! 
 * Finds and returns a pair with the first instance of the smallest element
 * and the last instance of the largest element in an array.
 *
 * @param V This is the array-to-pointer decay representing an array.
 * @param n The array's size.
 *
 * @return A pair of indexes to the first smallest and last largest values.
 */

std::pair<int,int> min_max( int V[], size_t n )
{
    int minValue = -1, maxValue = -1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(V[i] <= V[j]){
                if(minValue != -1){
                    if(V[i] < V[minValue]){
                        minValue = i;
                    }
                } else{
                    minValue = i;
                }
            }
            if(V[i] >= V[j]){
                if(maxValue != -1){
                    if(V[i] >= V[maxValue]){
                        maxValue = i;
                    }
                } else{
                    maxValue = i;
                }
            }
        }
    }
    return { minValue, maxValue };
}
