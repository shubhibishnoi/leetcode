class Solution {
public:
    int getsum(vector<int>& sum, int l, int r) {
    if (l > r) return 0;
    if (l == 0) return sum[r];
    return sum[r] - sum[l - 1];
  }
  int stoneGameV(vector<int>& stoneValue) {
    int n = stoneValue.size();
    vector<int> sum(n, 0);
    for (int i = 0; i < n; ++i) {
      if (i > 0) sum[i] += sum[i - 1];
      sum[i] += stoneValue[i];
    }
    vector<vector<int>> f = vector<vector<int>>(n, vector<int>(n, 0));
    vector<vector<int>> lf = vector<vector<int>>(n, vector<int>(n, 0));
    vector<vector<int>> rf = vector<vector<int>>(n, vector<int>(n, 0));

    for (int i = 0; i < n; ++i) {
      lf[i][i] = rf[i][i] = stoneValue[i];
    }

    for (int i = n - 1; i >= 0; --i) {
      for (int j = i + 1; j < n; ++j) {
        int segsum = getsum(sum, i, j);
        int l = i - 1, r = j;
        while (l < r - 1) {
          int mid = (l + r) / 2;
          int left = getsum(sum, i, mid);
          if (left * 2 <= segsum) {
            l = mid;
          } else {
            r = mid;
          }
        }
        if (l >= i) f[i][j] = max(f[i][j], lf[i][l]);
        int rst = l;
        if (getsum(sum, i, l) * 2 < segsum) {
            rst += 2;
        } else {
            rst += 1;
        }
        if (rst <= j)
          f[i][j] = max(f[i][j], rf[rst][j]);
        lf[i][j] = max(lf[i][max(i, j - 1)], f[i][j] + segsum);
        rf[i][j] = max(rf[max(0, i + 1)][j], f[i][j] + segsum);
      }
    }
    return f[0][n - 1];
  }
};