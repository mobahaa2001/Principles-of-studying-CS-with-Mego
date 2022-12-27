#include <iostream>
using namespace std;

int main()
{
    /*
    ///// AND Logical Operators /////
        ● Let say I am 30 years old, salary = 7000 and weight = 110 kg
        ● Mostafa > 25 years and salary < 8000? True
        ● Mostafa > 27 years andd salary > 9000? False
        ● Mostafa > 35 years and salary < 8500? False
        ● Mostafa > 35 years and salary > 9000? False
        ● Summary
            ○ Only 1 case is True: when both conditions are true
            ○ In discrete mathematics: p ∧ q

    ///// OR Logical Operators /////
            ● Let say I am 30 years old, salary = 7000 and weight = 110 kg
            ● Mostafa > 25 years or salary < 8000? True
            ● Mostafa > 27 years or salary > 9000? True
            ● Mostafa > 35 years or salary < 8500? True
            ● Mostafa > 35 years or salary > 9000? False
            ● Summary
                ○ Only 1 case is False: when both conditions are false
                ○ In discrete mathematics: p v q
    ///// Logical Tables 2 variables /////
            |---|---|-------|
            | P | Q |  P^Q  |
            |---|---|-------|
            | T | T |   T   |
            |---|---|-------|
            | F | T |   F   |
            |---|---|-------|
            | T | F |   F   |
            |---|---|-------|
            | F | F |   F   |
            |---|---|-------|
         -----------------------

            |---|---|-------|
            | P | Q |  PvQ  |
            |---|---|-------|
            | T | T |   T   |
            |---|---|-------|
            | F | T |   T   |
            |---|---|-------|
            | T | F |   T   |
            |---|---|-------|
            | F | F |   F   |
            |---|---|-------|
        --------------------------
            |---|----|
            | Q | ~Q |
            |---|----|
            | T |  F |
            |---|----|
            | F |  T |
            |---|----|
    --------------------------------------------
    ///// Logical Tables 3 variables /////

        AND truth table:

            |--------|--------|
            |  Input | Output |
            |--------|--------|
            |0  0  0 |    0   |
            |--------|--------|
            |0  0  1 |    0   |
            |--------|--------|
            |0  1  0 |    0   |
            |--------|--------|
            |1  0  0 |    0   |
            |--------|--------|
            |1  1  0 |    0   |
            |--------|--------|
            |1  0  1 |    0   |
            |--------|--------|
            |0  1  1 |    0   |
            |--------|--------|
            |1  1  1 |    1   |
            |--------|--------|

        OR truth table:

            |--------|--------|
            |  Input | Output |
            |--------|--------|
            |0  0  0 |    0   |
            |--------|--------|
            |0  0  1 |    1   |
            |--------|--------|
            |0  1  0 |    1   |
            |--------|--------|
            |1  0  0 |    1   |
            |--------|--------|
            |1  1  0 |    1   |
            |--------|--------|
            |1  0  1 |    1   |
            |--------|--------|
            |0  1  1 |    1   |
            |--------|--------|
            |1  1  1 |    1   |
            |--------|--------|

        ///// Logical Tables 3 variables /////
                ● Let say I am 30 years old, salary = 7000 and weight = 110 kg
                ● Mostafa > 25 years and salary < 8000 and weight < 150kg? True
                    ○ T and T and T
                ● Mostafa > 25 years and salary < 8000 and weight > 70kg? True
                    ○ T and T and T
                ● Mostafa > 25 years and salary < 8000 and weight > 200kg? False
                    ○ T and T and F
                ● Mostafa > 35 years or salary < 8000 or weight > 200kg? True
                    ○ F or T or F
                ● Mostafa > 35 years or salary > 9000 or weight > 200kg? False
                    ○ F or F or F

        ///// Mixing Logical Operators /////
                ● Precedence: AND before OR
                ● Let say I am 30 years old, salary = 7000 and weight = 110 kg
                ● Mostafa > 35 years or salary > 6000 or weight > 200kg? True
                    ○ F or T or F = T
                ● Mostafa > 35 years and salary > 6000 or weight > 200kg? False
                    ○ F and T or F
                        ■ Reduce every subgroup of ANDS first
                        ■ F and T = F
                    ○ F or F ⇒ F
                ● Mostafa > 20 years and salary > 10 and salary < 8000 or weight > 200kg?
                    ○ T and T and T or F
                    ○ T or F ⇒ T
_______________________________________________________________________________________
    ///// So //////
        ● All conditions are ANDed
            ○ True IFF all ANDed conditions are true
        ● All conditions are ORed
            ○ True if any condition is true. False if all are false
        ● Mixed ORs and ANDs
            ○ Find each subgroup of ANDs and evaluate first.
            ○ Do ORing for the remaining
        ● Study & memorize well before next session

*/
return 0;
}
