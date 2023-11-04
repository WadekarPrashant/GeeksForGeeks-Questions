class Solution {
public:
    // Function to check if a Pythagorean triplet exists or not
    bool checkTriplet(int arr[], int n) {
        // Create a set to store the squares of elements
        unordered_set<int> squares;

        // Calculate and store the squares of all elements
        for (int i = 0; i < n; i++) {
            squares.insert(arr[i] * arr[i]);
        }

        // Check for Pythagorean triplets
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (squares.find(arr[i] * arr[i] + arr[j] * arr[j]) != squares.end()) {
                    return true;
                }
            }
        }

        return false;
    }
};
