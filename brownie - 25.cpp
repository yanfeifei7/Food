#include <bits/stdc++.h>
using namespace std;
int totaltime = 45;
string ingredients[8] = {"Butter", "Sugar", "Eggs", "Cocoa powder", "Flour", "Baking powder", "Salt", "Vanilla extract"};
int main() {
    cout << "Total time: " << totaltime << " minutes\nIngredients:\n";
    for (int i = 0; i < 8; i++) cout << i + 1 << ". " << ingredients[i] << "\n";
    return 0;
}
