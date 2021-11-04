#include "function.h"

vector<unsigned int> getfib(int x){

    vector<unsigned int> fibValues;
    int t1 = 0;
    int t2 = 1;
    int number1 = 1;
    int nextTerm = 0;

    if(x == 1){
        return fibValues;
    }
    fibValues.push_back((unsigned int)t2);

    nextTerm = t1 + t2;

    while(nextTerm < x) {

        fibValues.push_back((unsigned int)nextTerm);
        t1 = t2;
        t2 = nextTerm;
        nextTerm = t1 + t2;
    }
    return fibValues;
}


std::vector<unsigned int> fib_below_n( unsigned int n )
{
    return getfib(n);
}
