/*!
 * @brief This code implements the "Soma Vizinhos" programming problem
 * @author selan
 * @data June, 6th 2021
 */
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

void foward(int m, int n){
    int firstM = m;
    for(int i=0; i+1 < n; i++){
        m = m + (firstM+1+i);
    }
    cout << m << endl;
}

void backward(int m, int n){
    int firstM = m;
    while (n+1 < 0) {
        m = m + (firstM-1);
        firstM--;
        n++;
    }
    cout << m << endl;
}

int main( void )
{
    int m, n, x;
    int count = 0;

    while( cin >> std::ws >> x){
        count++;
        if (count == 1){
            m = x;

        } else if(count == 2){
            n = x;
            count = 0;

            if(n < 0){
                backward(m, n);
            } else if(n > 0){
                foward(m, n);
            } else{
                cout << m << endl;
            }
        }
    }

    return 0;
}
