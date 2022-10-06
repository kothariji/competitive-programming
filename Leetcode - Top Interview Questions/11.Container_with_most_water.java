class Solution 
{
    public int maxArea(int[] height)
    {
        int area = Integer.MIN_VALUE;
        int start = 0, end = height.length-1;
        
        while(start < end)
        {
            area = Math.max(area, Math.min(height[start], height[end]) * (end - start));
            
            if(height[start] < height[end])
            {
                start += 1;
            } 
            else 
            {
                end -= 1;
            }
        }
        return area;
    }
}
