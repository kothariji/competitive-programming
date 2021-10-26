t = int(input())

for _ in range(t):
    n = int(input())
    total = 0
    
    number_one = 1
    number_two =1
    
    fibo_number = 1
    while fibo_number < n:
        number_one = number_two
        number_two = fibo_number
        
        if fibo_number %2 == 0:
            total += fibo_number
            
        fibo_number = fibo_number + number_one
        
    print (total)
        