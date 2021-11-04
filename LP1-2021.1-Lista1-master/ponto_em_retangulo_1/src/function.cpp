#include "function.h"
#include <iostream>

/*! 
 * Verifica se um ponto está dentro de um retângulo.
 */
using namespace std;

int isInDistance(int first, int second, int n){
    if(n >= first && n <= second){
        if(n == first || n == second){
            return 1;
        } else{
            return 0;
        }
    } else if(n <= first && n >= second){
        if(n == first || n == second){
            return 1;
        } else{
            return 0;
        }
    } else{
        return 2;
    }
}

location_t pt_in_rect( const Ponto &IE, const Ponto &SD, const Ponto &P )
{
    int xP = isInDistance(IE.x, SD.x, P.x);
    int yP = isInDistance(IE.y, SD.y, P.y);

    if(xP == 2 || yP == 2){
        return {OUTSIDE};
    } else {
        if(xP == 1 || yP == 1){
            return {BORDER};
        } else{
            return {INSIDE};
        }
    }

    return location_t::OUTSIDE;
}
