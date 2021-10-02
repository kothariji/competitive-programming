def sod(n):
    ans = 0
    while n:
        rem = n%10
        ans += rem
        n = n // 10
    return ans


t = int(input())
while t:
    n = int(input())
    a_score = 0
    b_score = 0
    while n:
        
        a,b = map(int, input().split())
        a_sum = sod(a)
        b_sum = sod(b)
        # print(a_sum,b_sum)
        if a_sum > b_sum:
            a_score += 1
        elif a_sum == b_sum:
            a_score += 1
            b_score += 1
        else:
            b_score += 1
        n = n - 1
    
    if a_score > b_score:
        print(0,a_score)
    elif a_score == b_score:
        print(2, a_score)
    else:
        print(1, b_score)

    t -= 1