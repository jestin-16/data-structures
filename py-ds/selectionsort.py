li=[64, 34, 25, 12, 22, 11, 90]
for i in range(len(li)):
    min_idx = i
    for j in range(i+1, len(li)):
        if li[j] < li[min_idx]:
            min_idx = j
    li[i], li[min_idx] = li[min_idx], li[i]
print("Sorted list is:", li)