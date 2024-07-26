#include <bits/stdc++.h>
using namespace std;
int totaltime = 10;
string ingredients[4] = {"Water", "White sugar", "Brown sugar", "aple falvored extract"};
int main() {
    cout << "Total time: " << totaltime << " minutes\nIngredients:\n";
    for (int i = 0; i < 4; i++) cout << i + 1 << ". " << ingredients[i] << "\n";
    return 0;
}
