#include <bits/stdc++.h>
using namespace std;
int totaltime = 25;
string ingredients[7] = {"Ramen noodles", "Garlic", "Ginger", "Broth", "Mushroom", "Egg", "Carrot"};
int main() {
    cout << "Total time: " << totaltime << " minutes\nIngredients:\n";
    for (int i = 0; i < 7; i++) cout << i + 1 << ". " << ingredients[i] << "\n";
    return 0;
}
