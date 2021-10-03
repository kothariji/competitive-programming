class Solution
{
public:
    vector<string> fizzBuzz(int n)
    {
        int count3(0), count5(0);
        int temp = 1;
        vector<string> res;
        while (temp <= n)
        {
            count3++, count5++;
            string ans = "";
            if (count3 == 3)
            {
                ans += "Fizz";
                count3 = 0;
            }
            if (count5 == 5)
            {
                ans += "Buzz";
                count5 = 0;
            }
            if (count3 == 0 || count5 == 0)
            {
                res.push_back(ans);
            }
            else
                res.push_back(to_string(temp));
            temp++;
        }
        return res;
    }
};