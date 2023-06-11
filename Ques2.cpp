#include <iostream>

int arrangeCoins(int n) {
    int completeRows = 0;
    int remainingCoins = n;
    int currentRow = 1;

    while (remainingCoins >= currentRow) {
        remainingCoins -= currentRow;
        completeRows++;
        currentRow++;
    }

    return completeRows;
}

int main() {
    int n ;
    std::cin>>n;
    int completeRows = arrangeCoins(n);
    std::cout << "Number of complete rows: " << completeRows << std::endl;
    return 0;
}

