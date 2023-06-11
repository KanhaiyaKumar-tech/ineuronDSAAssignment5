#include <iostream>
#include <vector>

std::vector<int> sortedSquares(std::vector<int>& nums) {
    int n = nums.size();
    std::vector<int> result(n);
    int left = 0;
    int right = n - 1;
    int index = n - 1;

    while (left <= right) {
        int leftSquare = nums[left] * nums[left];
        int rightSquare = nums[right] * nums[right];

        if (leftSquare > rightSquare) {
            result[index] = leftSquare;
            left++;
        } else {
            result[index] = rightSquare;
            right--;
        }

        index--;
    }

    return result;
}

int main() {
    //std::vector<int> nums = {-4, -1, 0, 3, 10};
    std::vector<int> nums;
    int num;
    while (std::cin >> num) {
        nums.push_back(num);
        if (std::cin.peek() == '\n') {
            break;
        }
    }
    std::vector<int> result = sortedSquares(nums);

    // Printing the result
    for (int i = 0; i < result.size(); i++) {
        std::cout << result[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}

