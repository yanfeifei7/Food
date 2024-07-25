#include <bits/stdc++.h>
using namespace std;
int totaltime = 30;
string ingredients[7] = {"Butter", "Eggs", "Vanilla", "Baking Soda", "Water", "Salt", "Flour"};
int main() {
    cout << "Total time: " << totaltime << " minutes\nIngredients:\n";
    for (int i = 0; i < 7; i++) cout << i << ". " << ingredients[i] << "\n";
    return 0;
}
