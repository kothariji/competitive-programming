
def fun(n, eq):
    eq = [i for i in eq]
    ans = []
    stack = []
    precedence = {'(':0,'+':1,'-':1,'*':2,'/':2,'^':3}
    for i in eq:
        if i == '(':
            stack.append(i)
        elif i >= 'A' and i <= 'Z':
            ans.append(i)
        elif i == ')':
            while len(stack)> 0 and stack[-1] != '(':
                ans.append(stack.pop())
            stack.pop()
        elif i in '+-*/^':
            if len(stack)==0 or stack[-1] == '(':
                stack.append(i)
            else:
                while len(stack)> 0 and precedence[i] <= precedence[stack[-1]]:
                    ans.append(stack.pop())
                else:
                    stack.append(i)
    
    for i in stack[::-1]:
        if i != '(':
            ans.append(i)
    res = ''
    for i in ans:
        res += i
    return res
    
for testcase in range(int(input())):
    print(fun(int(input()), input()))