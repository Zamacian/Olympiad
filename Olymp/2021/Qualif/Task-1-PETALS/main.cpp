#include <stdlib.h>
#include <iostream>
#include <string>

int getSmallest(int r, int w, int b){
    if (b <= w && b <= r) return b;
    if (r <= w && r <= b) return r;
    return w;
}

int ionflowers(){

    std::string flowernumber;
    std::string petals;
    std::cout << "Enter petals number : ";
    std::cin >> flowernumber;
    std::cout << "Enter petals chain : ";
    std::cin >> petals;

    int rs = petals.find("w");
    int ws = petals.find("b") - rs ;
    int bs = petals.size() - petals.find("b");

    int smallest = getSmallest(rs, ws, bs);

    int tocutoff = (rs-smallest) + (ws-smallest) + (bs-smallest);

    return tocutoff;
}

int main() {

    std::cout << "Olympiad 2021 , Qualification , Task 1 -> 'PETALS'" << std::endl;

    int tocutoff = ionflowers();

    std::cout << "You need to cut " << tocutoff << " petals" << std::endl;

    return 0;
}