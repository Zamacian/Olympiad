#include <stdlib.h>
#include <iostream>
#include <sstream>
#include <string>

long getFactorial(int n){
    long fact = 1;
    for (int i = n; i>0; i--){
        fact = fact * i;
    }
    return fact;
}

long pascalpyramid(){

    std::string temp_n,temp_p;
    std::cout << "Enter coordinates : ";std::cin >> temp_n >> temp_p;std::cout << std::endl;

    int n = std::stoi(temp_n);
    int p = std::stoi(temp_p);

    long n_fac = getFactorial(n);
    long p_fac = getFactorial(p);
    long unite_fac = getFactorial(n-p);
    
    std::cout << "N! : " << n_fac << std::endl;
    std::cout << "P! : " << p_fac << std::endl;
    std::cout << "U! : " << unite_fac << std::endl;

    long entry = n_fac / (p_fac * unite_fac);

    return entry;
}

int main() {

    std::cout << "Olympiad 2021 , Qualification , Task 3 -> 'PASCAL'" << std::endl;

    long entry = pascalpyramid();

    std::cout << std::endl << "Entry is " << entry << std::endl;

    return 0;
}