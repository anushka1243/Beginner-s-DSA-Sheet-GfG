//User function template for C++

class Solution
{
  public:
    //Function to find maximum of each subarray of size k.
    vector <int> max_of_subarrays(int *arr, int n, int k)
    {
        vector<int>v;
        int i=0,j=0;
        int maxx=INT_MIN;
        while(j<n)
        {
            maxx=max(maxx,arr[j]);
            if(j-i+1==k)
            {
                v.push_back(maxx);
                i++;
                
                if (arr[i - 1] == maxx) {
                maxx = arr[i];
                for (int m = i; m <= j; m++) {
                    maxx = max(maxx, arr[m]);
                }
              }
            }
            j++;
        }
        return v;
    }
};
