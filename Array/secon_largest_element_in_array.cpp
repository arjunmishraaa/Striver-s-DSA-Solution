class Solution {
  public:
    
    int getSecondLargest(vector<int> &arr) {
    if (arr.size() < 2) {
        return -1; 
    }
    int max = INT_MIN;   
    int secMax = INT_MIN;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] > max) {
            secMax = max; 
            max = arr[i];
        } else if (arr[i] > secMax && arr[i] < max) {
            secMax = arr[i];
        }
    }
    return (secMax == INT_MIN) ? -1 : secMax;
}

};