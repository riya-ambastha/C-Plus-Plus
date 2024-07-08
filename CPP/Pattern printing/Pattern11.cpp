#include <iostream>
using namespace std;
//hollow pyramid
int main() {
    int rows = 4;
    for(int i = 1; i <= rows; i++) {
        for(int j = i; j < rows; j++)
            cout << " ";
        for(int j = 1; j <= (2*i-1); j++) {
            if(i == rows || j == 1 || j == (2*i-1))
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
    return 0;
}
