#include <iostream>
#include <vector>
#include <cmath>

int distanceValue(std::vector<int>& arr1, std::vector<int>& arr2, int d) {
    int distance = 0;

    for (int i = 0; i < arr1.size(); i++) {
        bool valid = true;
        for (int j = 0; j < arr2.size(); j++) {
            if (std::abs(arr1[i] - arr2[j]) <= d) {
                valid = false;
                break;
            }
        }
        if (valid) {
            distance++;
        }
    }

    return distance;
}

int main() {
    //std::vector<int> arr1 = {4, 5, 8};
    std::vector<int> arr1;
    int num;
    while (std::cin >> num) {
        arr1.push_back(num);
        if (std::cin.peek() == '\n') {
            break;
        }
    }
    //std::vector<int> arr2 = {10, 9, 1, 8};
    std::vector<int> arr2;
    //int num;
    while (std::cin >> num) {
        arr2.push_back(num);
        if (std::cin.peek() == '\n') {
            break;
        }
    }
    int d ;
    std::cin>>d;

    int distance = distanceValue(arr1, arr2, d);
    std::cout   << distance << std::endl;

    return 0;
}

