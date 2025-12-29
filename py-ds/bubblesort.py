li=[3,1,6,2,9]
for i in range(0,len(li)-1):
    for j in range(0,len(li)-i-1):
        if li[j]>li[j+1]:
            li[j],li[j+1]=li[j+1],li[j]
print("Sorted list is:",li)