#include <bits/stdc++.h>
using namespace std;
int totaltime = 30;
string ingredients[7] = {"Water", "Sugar", "Vegetable oil", "Potato"};
int main() {
    cout << "Total time: " << totaltime << " minutes\nIngredients:\n";
    for (int i = 0; i < 4; i++) cout << i + 1 << ". " << ingredients[i] << "\n";
    return 0;
}
