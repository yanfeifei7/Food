#include <bits/stdc++.h>
using namespace std;
int totaltime = 11;
string ingredients[7] = {"Water", "Soy sauce", "Brown sugar", "Honey", "Ground ginger", "Garlic powder", "Cornstarch"};
int main() {
    cout << "Total time: " << totaltime << " minutes\nIngredients:\n";
    for (int i = 0; i < 7; i++) cout << i + 1 << ". " << ingredients[i] << "\n";
    return 0;
}
