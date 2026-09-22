#include <iostream>
#include <iomanip>

int main()
{
    std::cout << "| p | q | r | !r | p->q | r->p | F1 | q & !r | !(q & !r) | p||!r | F2 | Result |\n";
    std::cout << "|---|---|---|----|------|------|----|--------|-----------|-------|----|--------|\n";

    bool bools[2] = {true, false};

    for (int i = 0; i < 2; ++i)
    {
        bool p = bools[i];
        for (int j = 0; j < 2; ++j)
        {
            bool q = bools[j];
            for (int k = 0; k < 2; ++k)
            {
                bool r = bools[k];

                bool implication1 = !p || q;
                bool implication2 = !r || p;
                bool notR = !r;
                bool f1 = (implication1 == implication2);
                bool conjuction1 = !(q && notR);
                bool disjunction1 = p || notR;
                bool f2 = (conjuction1 == disjunction1);
                bool result = f1 || f2;
                std::cout << "| " << p << " | " << q << " | " << r << " |  " 
                          << notR << " |  " 
                          << implication1 << "   |  " 
                          << implication2 << "   | " 
                          << f1 << "  |   " 
                          << (q && notR) << "    |     " 
                          << conjuction1 << "     |   " 
                          << disjunction1 << "   | " 
                          << f2 << "  |   " 
                          << result << "    |\n";
            }
        }
    }

    return 0;
}