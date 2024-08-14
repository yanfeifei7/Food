#include <bits/stdc++.h>
using namespace std;
int totaltime = 15;
string ingredients[8] = {"Avocados", "Onions", "Bell pepper", "Tomato", "Cilantro", "Lime", "Salt", "Pepper"};
int main() {
    cout << "Total time: " << totaltime << " minutes\nIngredients:\n";
    for (int i = 0; i < 8; i++) cout << i + 1 << ". " << ingredients[i] << "\n";
    return 0;
}
