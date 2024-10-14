class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();
        if (k > n) return -1;  // Sanity check

        // Start by calculating the sum of the first 'k' cards from the left
        int currentSum = 0;
        for (int i = 0; i < k; i++) {
            currentSum += cardPoints[i];
        }

        // This will track the maximum score
        int maxSum = currentSum;

        // Use a sliding window to replace cards from the left with cards from the right
        for (int i = 0; i < k; i++) {
            currentSum -= cardPoints[k - 1 - i];  // Remove the last card of the window from the left
            currentSum += cardPoints[n - 1 - i];  // Add a card from the right
            maxSum = max(maxSum, currentSum);     // Track the maximum sum
        }

        return maxSum;
    }
};
