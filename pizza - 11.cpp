#include <bits/stdc++.h>
using namespace std;
int totaltime = 2.5;
string ingredients[7] = {"Yeast", "Water", "Flour", "Oil", "Sugar", "Salt", "Cornmeal"};
int main() {
    cout << "Total time: " << totaltime << " hours\nIngredients:\n";
    for (int i = 0; i < 7; i++) cout << i + 1 << ". " << ingredients[i] << "\n";
    return 0;
}
