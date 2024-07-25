#include <bits/stdc++.h>
using namespace std;
int preptime = 20, cooktime = 10, totaltime = 30, servings = 48;
string ingredients[7] = {"Butter", "Eggs", "Vanilla", "Baking Soda", "Water", "Salt", "Flour"};
int main() {
    cout << "Prep time: " << preptime << " minutes\nCook time: " << cooktime << " minutes\nTotal time: " << totaltime << " minutes\nIngredients:\n";
    for (int i = 0; i < 7; i++) cout << i << ". " << ingredients[i] << "\n";
    return 0;
}
