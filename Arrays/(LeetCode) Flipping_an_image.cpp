// #832 - Flipping an Image
class Solution
{
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>> &A)
    {
        for (vector<int> &v : A)
        {
            int temp, n = v.size();
            for (int i = 0; i < n / 2; i++)
            {
                temp = v[i];
                v[i] = v[n - i - 1];
                v[n - i - 1] = temp;
            }
            for (int i = 0; i < n; i++)
            {
                if (v[i] == 1)
                {
                    v[i] = 0;
                }
                else
                {
                    v[i] = 1;
                }
            }
        }
        return A;
    }
};