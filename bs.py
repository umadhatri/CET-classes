def bubbleSort(arr):
    for i in range(len(arr)):
        for j in range(0, len(arr)):
            if(arr[i] < arr[j]):
                temp = arr[i]
                arr[i] = arr[j]
                arr[j] = temp
    return arr
    
arr = [2, 5, 1, 7, 3, 4]
print(bubbleSort(arr))