#include <iostream> 

using namespace std;

int main() {
    bool is_valid = true;

    for (int p = 0; p <= 1; ++p) {
        for (int q = 0; q <= 1; ++q) {
            for (int r = 0; r <= 1; ++r) {
                for (int s = 0; s <= 1; ++s) {

                    bool f1 = !p || (q || r);
                    bool f2 = !q || (p || s);
                    bool f3 = !s || (q || r);

                    bool g = q;

                    bool expr = f1 && f2 && f3 && !g;

                    if (expr == true) {
                        is_valid = false;
                        cout << "Знайдено контрприклад:\n";
                        cout << "p = " << p << " | q = " << q 
                                  << " | r = " << r << " | s = " << s << " |\n\n";
                    }
                }
            }
        }
    }

    if (is_valid == true) {
        cout << "Міркування коректне, вираз = False для всіх інтерпретацій\n";
    } else {
        cout << "Міркування некоректне\n";
    }

    return 0;
}