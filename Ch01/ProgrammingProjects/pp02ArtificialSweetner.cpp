/**
 * @brief Calculate the lethal amount of artificial sweetner. The following is 
 * directly from the text.
 * 
 * 
 * A government research lab has concluded that an artificial sweetener commonly
 * used in diet soda will cause death in laboratory mice. A friend of yours is 
 * desperate to lose weight but cannot give up soda. Your friend wants to know 
 * how much diet soda it is possible to drink without dying as a result. Write 
 * a program to supply the answer. The input to the program is the amount of 
 * artificial sweetener needed to kill a mouse, the weight of the mouse, and 
 * the weight of the dieter. To ensure the safety of your friend, be sure the 
 * program requests the weight at which the dieter will stop dieting, rather 
 * than the dieter’s current weight. Assume that diet soda contains one-tenth 
 * of 1% artificial sweetener. Use a variable declaration with the modifier 
 * const to give a name to this fraction. You may want to express the percentage
 * as the double value 0.001.
 * 
 * @param argc 
 * @param argv 
 * @return int 
 */

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    const float ARTIFICAL_SWEETNER_TO_KILL_MOUTSE = 0;
    float weight_of_mouse;
    float weight_of_human;

    cout << " ";
    cin >> weight_of_mouse;

    return 0;
}
