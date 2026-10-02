#include <iostream>
using namespace std;
int main()
{
    cout << "| p | q | r | !r | p->q | r->p | F1 | q & !r | !(q & !r) | p||!r | F2 | Result |\n";
    cout << "|---|---|---|----|------|------|----|--------|-----------|-------|----|--------|\n";

    bool bools[2] = {true, false};

    for (int i = 0; i <= 1; ++i)
    {
        bool p = bools[i];
        for (int j = 0; j <= 1; ++j)
        {
            bool q = bools[j];
            for (int r = 0; r <= 1; ++r)
            {

                bool implic1 = !p || q;
                bool implic2 = !r || p;
                bool notR = !r;
                bool f1 = (implic1 == implic2);
                bool conjuction = !(q && notR);
                bool OR = p || notR;
                bool f2 = (conjuction == OR);
                bool result = f1 || f2;
                cout << "| " << p << " | " << q << " | " << r << " |  " 
                          << notR << " |  " 
                          << implic1 << "   |  " 
                          << implic2 << "   | " 
                          << f1 << "  |   " 
                          << (q && notR) << "    |     " 
                          << conjuction << "     |   " 
                          << OR << "   | " 
                          << f2 << "  |   " 
                          << result << "    |\n"
                          << "|---|---|---|----|------|------|----|--------|-----------|-------|----|--------|\n";
            }
        }
    }

    return 0;
}