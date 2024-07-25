#include <bits/stdc++.h>
using namespace std;
int totaltime = 3.5;
string ingredients[9] = {"Carrots", "Celery", "Tomato", "Potato", "Green bean", "Corn", "Pea", "Yellow onion", "Garlic"};
int main() {
    cout << "Total time: " << totaltime << " hours\nIngredients:\n";
    for (int i = 0; i < 9; i++) cout << i + 1 << ". " << ingredients[i] << "\n";
    return 0;
}
