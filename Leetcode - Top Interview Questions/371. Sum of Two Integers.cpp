class Solution
{
public:
    int getSum(int a, int b)
    {
        bitset<32> b1(a), b2(b), b3(0);
        string s1 = b1.to_string();
        string s2 = b2.to_string();
        string s3 = s1;
        int carry(0);
        for (int i = 31; i >= 0; i--)
        {
            if ((s1[i] == '1') && (s2[i] == '1'))
            {
                if (carry)
                    s3[i] = '1', carry = 1;
                else
                    s3[i] = '0', carry = 1;
            }
            else if ((s1[i] == '1') || (s2[i] == '1'))
            {
                if (carry)
                    s3[i] = '0', carry = 1;
                else
                    s3[i] = '1';
            }
            else
            {
                if (carry)
                    s3[i] = '1', carry = 0;
                else
                    s3[i] = '0';
            }
        }
        // cout << s1 << endl;
        // cout << s2 << endl;
        // cout << s3 << endl;
        b3 = bitset<32>(s3);
        return b3.to_ulong();
    }
};