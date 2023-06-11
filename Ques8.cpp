#include <iostream>
#include <vector>
#include <unordered_map>

std::vector<int> findOriginalArray(std::vector<int>& changed) {
    std::vector<int> original;
    std::unordered_map<int, int> freq;

    // Count the frequency of each element in the changed array
    for (int num : changed) {
        ++freq[num];
    }

    // Iterate over the changed array
    for (int num : changed) {
        // Check if the current element has a corresponding frequency
        if (freq[num] == 0) {
            return {};
        }

        // Add the original element to the result and reduce the frequency
        original.push_back(num / 2);
        --freq[num];
    }

    return original;
}

int main() {
    //std::vector<int> changed = {1, 3, 4, 2, 6, 8};
    std::vector<int> changed;
    int num;
    while (std::cin >> num) {
        changed.push_back(num);
        if (std::cin.peek() == '\n') {
            break;
        }
    }
    std::vector<int> original = findOriginalArray(changed);

    //std::cout << "Output: ";
    for (int num : original) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
