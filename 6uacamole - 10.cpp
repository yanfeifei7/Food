#include <bits/stdc++.h>
using namespace std;
int totaltime = 10;
string ingredients[8] = {"Avocado", "Onion", "Tomato", "Cilantro", "Jalapeno pepper", "Lime juice", "Garlic", "Salt"};
int main() {
    cout << "Total time: " << totaltime << " minutes\nIngredients:\n";
    for (int i = 0; i < 8; i++) cout << i + 1 << ". " << ingredients[i] << "\n";
    return 0;
}
