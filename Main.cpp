#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <string>
#include <vector>
#include <algorithm>
#include <cctype>

using namespace std;

int main() {
    vector<string> dices = {"d4", "d6", "d8", "d10", "d12", "d20", "d100"};
    
    while (true) {
        cout << endl << "Diga um tipo de dado ";
        string dduser;
        cin >> dduser;

        if (find(dices.begin(), dices.end(), dduser) == dices.end()) {
            cout << "O input informado não é um dado válido" << endl;
        } else {
            cout << dduser << " rodado, e o resultado foi ";
            if (dduser == "d4") {
                srand(time(0));
                short number = rand() % (4 + 1 - 1);
                cout << number;
            }

            if (dduser == "d6") {
                srand(time(0));
                short number = rand() % (6 + 1 - 1);
                cout << number;
            }

            if (dduser == "d8") {
                srand(time(0));
                short number = rand() % (8 + 1 - 1);
                cout << number;
            }

            if (dduser == "d10") {
                srand(time(0));
                short number = rand() % (10 + 1 - 1);
                cout << number;
            }

            if (dduser == "d12") {
                srand(time(0));
                short number = rand() % (12 + 1 - 1);
                cout << number;
            }

            if (dduser == "d20") {
                srand(time(0));
                short number = rand() % (20 + 1 - 1);
                cout << number;
            }

            if (dduser == "d100") {
                srand(time(0));
                short number = rand() % (10 + 1 - 1);
                cout << number * 10;
            }
            break;
        }
    }

    return 0;
}

/* int main() {
    cout << "Tell the radius of the circle ";
    double r;
    cin >> r;
    const double pi = 3.14;
    double a = pow(r,2) * pi;
    cout << "the area is approximately " << a << " u.a." << endl;
    return 0;
}

int main() {
    double s = 95000;
    const double str = .04;
    const double ctr = .02;
    double st = s * str;
    double ct = s * ctr;
    cout << "Your raw sale is " << s << endl << "Your state tax rate is " << str << endl << "Your state tax is " << st  << endl << "Your couty tax rate is " << ctr << endl << "Your couty tax is " << ct << endl << "Your liquid sale is " << s - st - ct;
    
    return 0;
}

int main() {
    cout << "You will define the x and y values to obtain the result of this operation: (x+10)/3*y" << endl 
         << "Now, digit a number to be the x value: ";
    double x;
    cin >> x ;
    cout << "Digit another number to be the y value: ";
    double y;
    cin >> y ;
    double z = (x + 10) / (3 * y);
    cout << "The operation result is " << z;
    return 0;
} */
