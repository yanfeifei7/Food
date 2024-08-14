#include <bits/stdc++.h>
using namespace std;
int totaltime = 30;
string ingredients[6] = {"Vegetable oil", "Flour", "Salt", "Pepper", "Eggs", "Chicken"};
int main() {
    cout << "Total time: " << totaltime << " minutes\nIngredients:\n";
    for (int i = 0; i < 6; i++) cout << i + 1 << ". " << ingredients[i] << "\n";
    return 0;
}
