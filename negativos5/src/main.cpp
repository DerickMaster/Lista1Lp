#include <iostream>
using std::cin;
using std::cout;

int main()
{
    int nArray[5];
    int negativeCount = 0;
    for (int i = 0; i < 5; i++)
    {
        cin >> nArray[i];
        if(nArray[i] < 0){
            negativeCount++;
        }
    }
    cout << negativeCount << std::endl;
    return 0;
}
