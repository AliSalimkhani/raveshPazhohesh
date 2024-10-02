#include <iostream>
#include <vector>
#include <algorithm> // for using permutations
using namespace std;

// Function to calculate the total score
int calculateScore(vector<int>& order, vector<vector<int>>& priorities) {
    int score = 0;
    for (int i = 0; i < order.size(); ++i) {
        score += priorities[order[i]][i]; // Add the score based on the group's position
    }
    return score;
}

int main() {
    // Priorities for each group
    vector<vector<int>> priorities = {
        {1, 3, 2, 4, 5, 6, 7},           // Group 1's priorities
        {1, 4, 2, 3, 5, 7, 6, 8, 9},     // Group 2's priorities
        {1, 2, 3, 7, 6, 9, 4, 5},        // Group 3's priorities
        {1, 2, 3, 4, 5, 6, 7, 8},        // Group 4's priorities
        {1, 2, 3, 4, 5, 6, 7, 8}         // Group 5's priorities
    };

    // List of groups (represented by their indices)
    vector<int> groups = {0, 1, 2, 3, 4};
    
    // Variables to store the best order and the minimum score
    vector<int> bestOrder;
    int minScore = INT_MAX; // Start with a very high initial score

    // Loop through all possible permutations
    do {
        int currentScore = calculateScore(groups, priorities);
        if (currentScore < minScore) {
            minScore = currentScore;
            bestOrder = groups;
        }
    } while (next_permutation(groups.begin(), groups.end())); // Generate the next permutation

    // Output the best order
    cout << "Best presentation order: ";
    for (int i = 0; i < bestOrder.size(); ++i) {
        cout << "Group " << bestOrder[i] + 1 << " "; // Output group indices as 1-based
    }
    cout << endl;
    cout << "Minimum total score: " << minScore << endl;

    return 0;
}
