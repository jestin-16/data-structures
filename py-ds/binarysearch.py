l = [1, 2, 3, 4, 5]
def binary_search(arr, target):
    left, right = 0, len(arr) - 1
    while left <= right:
        mid = (left + right) // 2
        if arr[mid] == target:
            return mid
        elif arr[mid] < target:
            left = mid + 1
        else:
            right = mid - 1
    return -1  
index = binary_search(l, 3)
print(f"Element found at index: {index}" if index != -1 else "Element not found")
