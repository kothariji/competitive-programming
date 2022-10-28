import java.util.*;
class ProductArayExceptSelf
{
    public int[] productExceptSelf(int[] nums)
    {
        int[] prefix = new int[nums.length];
        int[] postfix = new int[nums.length];
        int[] result = new int[nums.length];

        int prod = 1;
        // prefix
        // 1 2 6 24
        for (int i = 1; i < nums.length; i++)
        {
            prefix[0] = 1;
            prod = prod * nums[i - 1];
            prefix[i] = prod;
        }
        prod = 1;
        for (int i = nums.length - 2; i >= 0; i--)
        {
            postfix[nums.length - 1] = 1;
            prod = prod * nums[i + 1];
            postfix[i] = prod;
        }
        for (int i = 0; i < nums.length; i++)
        {

            result[i] = prefix[i] * postfix[i];
        }

        return result;
    }
}