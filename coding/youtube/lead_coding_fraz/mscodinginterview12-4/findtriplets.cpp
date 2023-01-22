#include <ios>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<vector<int>> findTriplets(vector<int> &nums, int target) {
    sort(nums.begin(), nums.end());
    vector<vector<int>> ans;

    int n = nums.size();
    for (int i = 0; i < n; i++) {
        int firstEle = nums[i];
        int remTarget = target - firstEle;
        int s = i + 1, e = n - 1;
        while (s < e) {
            if (nums[s] + nums[e] == remTarget) {
                ans.push_back({firstEle, nums[s], nums[e]});
                s++;
                e--;
            } else if (nums[s] + nums[e] > remTarget) {
                e--;
            } else {
                s++;
            }
            while (nums[s] == nums[s - 1] and s < e) s++;
            while (e < n - 1 and nums[e] == nums[e + 1] and s < e) e++;
        }
        while (i > 0 and i < n and nums[i] == nums[i - 1]) i++;
    }
    return ans;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> v = {1, 3, 5, 7, 8, 6, 19, 10, 15};
    vector<vector<int>> ans;
    ans = findTriplets(v, 21);
    for (int i = 0; i < ans.size(); i++) {
        for (int j = 0; j < ans[i].size(); j++) {
            cout << ans[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}