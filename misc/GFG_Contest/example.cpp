#include <iostream>
#include <unordered_map>

int AddDistinctSubDuplicate(int a, int b, int c, int d) {
    std::unordered_map<int, int> countMap;
    int sumDistinct = 0;

    // Calculate the sum of distinct numbers and count their occurrences
    if (countMap.find(a) == countMap.end()) {
        sumDistinct += a;
        countMap[a] = 1;
    } else {
        countMap[a]++;
    }
    if (countMap.find(b) == countMap.end()) {
        sumDistinct += b;
        countMap[b] = 1;
    } else {
        countMap[b]++;
    }
    if (countMap.find(c) == countMap.end()) {
        sumDistinct += c;
        countMap[c] = 1;
    } else {
        countMap[c]++;
    }
    if (countMap.find(d) == countMap.end()) {
        sumDistinct += d;
        countMap[d] = 1;
    } else {
        countMap[d]++;
    }

    // Calculate the duplicate number
    int duplicate = 0;
    for (const auto& entry : countMap) {
        if (entry.second > 1) {
            duplicate = entry.first;
            break;
        }
    }

    // Calculate the final difference
    int difference = sumDistinct - duplicate - (duplicate);

    return difference;
}

int main() {
    // Input read from STDIN
    int a, b, c, d;
    std::cin >> a >> b >> c >> d;

    int result = AddDistinctSubDuplicate(a, b, c, d);

    // Value in result printed to STDOUT
    std::cout << result << std::endl;

    return 0;
}
