#include <bits/stdc++.h>
using namespace std;
int totaltime = 5;
string ingredients[4] = {"Eggs", "Salt", "Pepper", "Butter"};
int main() {
    cout << "Total time: " << totaltime << " minutes\nIngredients:\n";
    for (int i = 0; i < 4; i++) cout << i + 1 << ". " << ingredients[i] << "\n";
    return 0;
}
