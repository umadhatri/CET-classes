def partition(arr, low, high):
    p = arr[high]
    i = low-1
    for j in range(low, high):
        if arr[j] <= p:
            i += 1
            (arr[i], arr[j]) = (arr[j], arr[i])
    (arr[i+1], arr[high]) = (arr[high], arr[i+1])
    
    return (i+1)

def quickSort(arr, low, high):
    if low < high :
        pi = partition(arr, low, high)
        quickSort(arr, low, pi-1)
        quickSort(arr, pi+1, high)

arr = [77, 16, 19, 101, 55, 65, 92, 23]
N = len(arr)
quickSort(arr, 0, N-1)
print(arr)