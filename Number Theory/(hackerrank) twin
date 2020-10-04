import math
def segmented_sieve(min_r, max_r):
    primes = get_primes(max_r)
    numbers = range(min_r,max_r+1)
    p_numbers = [1 for x in numbers]
    for prime in primes:
        if min_r % prime == 0:
            index_ = numbers.index(min_r)
        else:
            index_ = numbers.index(((min_r/prime)*prime)+prime)
        for x in range(index_,len(numbers),prime):
            if numbers[x] != prime:
                p_numbers[x] = 0
    prev = 0
    count = 0
    #print primes, numbers, p_numbers
    for x in range(len(p_numbers)):
        if p_numbers[x] == 1:
            if min_r + x == prev + 2:
                count += 1
            prev = min_r + x
    print count

def get_primes(num):
    primes = []
    for x in range(2,int(math.sqrt(num))+1):
        flag = 0
        for y in range(2, int(math.sqrt(x)+1)):
            if x % y == 0:
                flag = 1
                break
        if flag == 0:
            primes.append(x)
    return primes

def twins():
    min_r, max_r = map(int,raw_input().strip().split(" "))
    segmented_sieve(min_r, max_r)

twins()
