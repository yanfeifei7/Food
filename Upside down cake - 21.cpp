#include <bits/stdc++.h>
using namespace std;
int totaltime = 90;
string ingredients[9] = {"Cake flour", "Baking Power & Baking Soda", "Salt", "Butter", "Sugar", "Egg white", "Vanilla", "Sour cream", "Milk"};
int main() {
    cout << "Total time: " << totaltime << " minutes\nIngredients:\n";
    for (int i = 0; i < 9; i++) cout << i + 1 << ". " << ingredients[i] << "\n";
    return 0;
}
