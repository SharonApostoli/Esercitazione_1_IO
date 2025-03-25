#include <iostream>
#include <fstream>

#include "funzioni.hpp"

int main()
{
    std::ifstream input("data.txt");
    std::ofstream output("result.txt");

    if(input.fail() || output.fail()){
        std::cerr << "Errore" << std::endl;
        return 1;
    }

    double val, sum = 0.0;
    int n = 0;

    output << "# N Mean" << "\n";

    while(input >> val){
        double = map = mapVal(val);
        sum += map;
        n++;

        double mean = sum / n;

        output << n << " " << std::scientific << mean << "\n";

    }

    input.close();
    output.close();

    std::cout << "Risultati salvati con successo in result.txt" << std::endl;
    return 0;
}
