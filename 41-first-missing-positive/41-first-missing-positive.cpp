class Solution { // Time and Space: O(N)
public:
	int firstMissingPositive(vector<int>& nums) {
		int size = nums.size();
		vector<int> sequence(size, -1); // Init array with same size to all -1s
		for (int i = 0; i < size; i++) {
			if (nums[i] > 0 && nums[i] <= size)
				sequence[nums[i] - 1] = 1; // Set numbers at indices to positive
		}

		for (int i = 0; i < size; i++) { // First that has value -1 is the missing one
			if (sequence[i] == -1)
				return i + 1;
		}

		return size + 1;
	}
};