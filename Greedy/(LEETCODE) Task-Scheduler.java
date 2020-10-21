/**
* Solution to Task Scheduler at Leetcode in Java
* Ref : https://leetcode.com/problems/task-scheduler
* Problem Statement:
* Given a characters array tasks, representing the tasks a CPU needs to do, where each letter represents a different task. Tasks could be done in any order. Each task is done in one unit of time. 
* For each unit of time, the CPU could complete either one task or just be idle.
* However, there is a non-negative integer n that represents the cooldown period between two same tasks (the same letter in the array), that is that there must be at least n units of time between any two same tasks.
* Return the least number of units of times that the CPU will take to finish all the given tasks.

Example 1:
Input: tasks = ["A","A","A","B","B","B"], n = 2
Output: 8
Explanation: 
A -> B -> idle -> A -> B -> idle -> A -> B
There is at least 2 units of time between any two same tasks.
**/

public class Solution {
    public int leastInterval(char[] tasks, int n) {
        int[] storage = new int[26];
        for (char c : tasks) {
            storage[(c - 'A')]++;
        }
        int max = 0;
        int count = 1;
        for (int num : storage) {
            if (num == 0) {
                continue;
            }
            if (max < num) {
                max = num;
                count = 1;
            } else if (max == num) {
                count++;
            }
        }
        int space = (n + 1) * (max - 1) + count;
        return (space < tasks.length) ? tasks.length : space;
    }
}