def primesLessThan(n):
    prime=[0 for i in range(101)]
    for i in range(2, n+1):
        if prime[i] == 0:
            for j in range(i*i, n+1, i):
                prime[j] = 1
    for i in range(2, n+1):
        if prime[i]==0:
            print(i, end=" ")
    print('\n')

rng = int(input("Enter a number till which you want the primes: "))
primesLessThan(rng)