l=[3,1,2,4,5]
while True:
    ch=int(input("1.Sort 2.Reverse 3.Exit: "))
    if ch==1:
        l.sort()
        print("Sorted List:",l)
    elif ch==2:
        l.reverse()
        print("Reversed List:",l)
    elif ch==3:
        break
    else:
        print("Invalid Choice")
    
