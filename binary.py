def decimalToBinary(n):
    for i in range(15, -1, -1):
        k = n>>i
        if(k&1):
            print("1", end="")
        else:
            print("0", end="")
    print('\n')

#Input to your code
n = 29
decimalToBinary(n)
