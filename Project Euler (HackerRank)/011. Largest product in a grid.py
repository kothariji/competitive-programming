s1 =   input()
s2 =   input()
s3 =   input()
s4 =   input()
s5 =   input()
s6 =   input()
s7 =   input()
s8 =   input()
s9 =   input()
s10 =  input()
s11 =  input()
s12 = input()
s13 = input()
s14 = input()
s15 = input()
s16 = input()
s17 = input()
s18 = input()
s19 = input()
s20 = input()

l = []
l.append(list(s1.split()))
l.append(list(s2.split()))
l.append(list(s3.split()))
l.append(list(s4.split()))
l.append(list(s5.split()))
l.append(list(s6.split()))
l.append(list(s7.split()))
l.append(list(s8.split()))
l.append(list(s9.split()))
l.append(list(s10.split()))
l.append(list(s11.split()))
l.append(list(s12.split()))
l.append(list(s13.split()))
l.append(list(s14.split()))
l.append(list(s15.split()))
l.append(list(s16.split()))
l.append(list(s17.split()))
l.append(list(s18.split()))
l.append(list(s19.split()))
l.append(list(s20.split()))

max1 = 0
for i in range(0,20):
    for j in range(0,17):
        mul = int(l[i][j])*int(l[i][j+1])*int(l[i][j+2])*int(l[i][j+3])
        if mul > max1:
            max1 = mul

for i in range(0,20):
    for j in range(0,17):
        mul = int(l[j][i])*int(l[j+1][i])*int(l[j+2][i])*int(l[j+3][i])
        if mul > max1:
            max1 = mul
for i in range(0,17):
    for j in range(0,17):
        mul = int(l[i][j])*int(l[i+1][j+1])*int(l[i+2][j+2])*int(l[i+3][j+3])
        if mul > max1:
            max1 = mul
for i in range(0,17):
    for j in range(3,20):
        mul = int(l[i][j])*int(l[i+1][j-1])*int(l[i+2][j-2])*int(l[i+3][j-3])
        if mul > max1:
            max1 = mul

            
print(max1)            

