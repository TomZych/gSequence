#include <iostream>

int gSequence(int n){
    if (n == 0) return 0;
    return n - gSequence(gSequence(n-1));
}

int main(){
    int n;
    std::cout << "Enter n value to end at: ";
    std::cin >> n;
    for (int i; i <=n; ++i){
        std::cout << "gSequence(" << i << ") = " << gSequence(i)<<"\n";
    }
    return 0;
}