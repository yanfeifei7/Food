#include <bits/stdc++.h>
using namespace std;
int totaltime = 4;
string ingredients[3] = {"Watermelon", "Lime juice (you are weird)", "Sugar"};
int main() {
    cout << "Total time: " << totaltime << " hours\nIngredients:\n";
    for (int i = 0; i < 3; i++) cout << i + 1 << ". " << ingredients[i] << "\n";
    return 0;
}
