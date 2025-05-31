#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

std::vector<int> create_array() {
    std::vector<int> list;
    std::cout << "Quantos elementos haverão na array" <<std::endl;
    int elements;
    std::cin >> elements;
    
    for (int i = 0; i < elements; i++) {
        std::cout << "Diga o "<< i+1 << "º elemento da array ";
        int valor;
        std::cin >> valor;
        list.push_back(valor);
    }
    
    return list;
}

std::vector<int> twosum() {
    std::vector<int> list_ = create_array();
    
    std::cout << "insira o target: ";
    int target;
    std::cin >> target;
    
    for (int i = 0; i < list_.size(); i++) {
        int x = list_[i];
        
        for (int j = 0; j < list_.size(); j++) {
            if (i == j) continue;

            int y = list_[j];
            
            if (x + y == target) {
                return {i, j};
            }
        }
    }

    return {};
}

int main () {
    std::vector<int> result = twosum();
    
    while (result.empty()) {
        std::cout << "Target impossível nessa array, tente de novo" << std::endl;
        result = twosum();
    }
    std::cout << "indices do target é [" << result[0] << "," << result[1] << "]";
    
    return 0;
}
