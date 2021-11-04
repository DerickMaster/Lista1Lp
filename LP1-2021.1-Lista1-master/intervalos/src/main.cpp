/*!
 * @brief This code implements the Intervalos programming problem
 * @author selan
 * @data June, 6th 2021
 */

#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <iomanip>
using std::setprecision;

// Se desejar, crie funções aqui, antes do main().

int main(void)
{
    float totalNumbers;

    int vazio = 0;
    int intervalo0_24 = 0;
    int intervalo25_49 = 0;
    int intervalo50_74 = 0;
    int intervalo75_100 = 0;
    int x;

    while( cin >> std::ws >> x) {
        if(x >= 0 && x < 25){
            intervalo0_24++;
        } else if( x >= 25 && x < 50){
                intervalo25_49++;
        } else if( x >= 50 && x < 75){
                intervalo50_74++;
        } else if( x >= 75 && x < 100){
                intervalo75_100++;
        } else{
            vazio ++;
        }
    }
    
    totalNumbers = intervalo0_24 + intervalo25_49 + intervalo50_74 + intervalo75_100 + vazio;

    cout << std::setprecision(4) << (intervalo0_24 / totalNumbers) * 100 << endl;
    cout << std::setprecision(4) << (intervalo25_49 / totalNumbers) * 100 << endl;
    cout << std::setprecision(4) << (intervalo50_74 / totalNumbers) * 100 << endl;
    cout << std::setprecision(4) << (intervalo75_100 / totalNumbers) * 100 << endl;
    cout << std::setprecision(4) << (vazio / totalNumbers) * 100 << endl;

    return 0;
}
