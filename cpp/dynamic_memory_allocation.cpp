#include <iostream>
using namespace std;

int main() {
    int* stars = new int;
    *stars = 5000;
    cout << "Visible stars in the sky: " << *stars;

    delete stars;
    cout << "\nGarbage value: " << *stars;
    stars = NULL;
    return 0;
}