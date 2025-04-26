#include <iostream>
#include <iomanip>
using namespace std;

int main () {

    char s;
    int count_m, count_h;

    count_h = 0;
    count_m = 0;

    do{
        cin >> s;

        if (s == 'q'){
            break;
        }

        if (s == 'm') {
            count_m++;
        } else if (s == 'h') {
            count_h++;
        }
    }while(s != 'q');

    cout << count_h << " " << count_m << endl;
    cout << fixed << setprecision(2) << count_h * 12.50 << " " << count_m * 7.40 << " " << count_h * 12.50 + count_m * 7.40 << endl;


    return 0;
}