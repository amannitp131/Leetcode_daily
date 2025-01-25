//1636. Sort Array by Increasing Frequency


// class Solution {
// public:
//     vector<int> frequencySort(vector<int>& nums) {
//     // Initialize frequency array for range [-100, 100]
//     vector<int> frequency(202, 0);

//     // Fill the frequency array
//     for (int num : nums) {
//         frequency[num + 100]++;
//     }

//     // Create a vector of indices
//     vector<int> sorted_nums = nums;

//     // Define custom comparator for sorting
//     auto compare = [&](int a, int b) {
//         if (frequency[a + 100] == frequency[b + 100]) {
//             return a > b; // If frequencies are the same, sort by value in descending order
//         }
//         return frequency[a + 100] < frequency[b + 100]; // Otherwise, sort by frequency in ascending order
//     };

//     // Sort the vector using the custom comparator
//     sort(sorted_nums.begin(), sorted_nums.end(), compare);

//     return sorted_nums;
//     }
// };