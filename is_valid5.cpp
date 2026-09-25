#include <iostream> 

using namespace std;

int main() {
    cout << "| p | q | r | s | f1 | f2 | f3 | g | result |\n";
    cout << "|---|---|---|---|----|----|----|---|--------|\n";

    for (int p = 0; p <= 1; ++p) {
        for (int q = 0; q <= 1; ++q) {
            for (int r = 0; r <= 1; ++r) {
                for (int s = 0; s <= 1; ++s) {

                    bool f1 = !p || (q || r);
                    bool f2 = !q || (p || s);
                    bool f3 = !s || (q || r);

                    bool g = q;

                    bool result = f1 && f2 && f3 && !g;
                    cout << "| " << p << " | " << q << " | " << r << " | " << s 
                    << " |  " << f1 << " |  " 
                    << f2 << " |  " << f3 
                    << " | " << g << " |    " 
                    << result << "   |\n";

                        
                    }
                }
            }
        }

    return 0;
}