# Recursive method
def binarySearch(l, s, e, key):
    if s <= e:
        mid = (s + e) // 2
        if l[mid] == key:
            return mid
        elif l[mid] < key:
            return binarySearch(l, mid + 1, e, key)
        else:
            return binarySearch(l, s, mid - 1, key)
    else:
        return -1


# Iterative method

# def binarySearch(l, key):
#     s=0
#     e=len(l)-1
#     mid=(s+e)//2
#     while(s<=e):
#         if(l[mid]==key):
#             return (mid)
#         elif(l[mid]>key):
#             e=mid-1
#         else:
#             s=mid+1
#         mid=(s+e)//2
#     return -1

n = int(input("Enter the number of terms: "))
l = []
for i in range(n):
    val = int(input("Enter the value at index " + str(i) + " : "))
    l.append(val)

key = int(input("Enter the key: "))
# print("Index of required key is: "+ str(binarySearch(l, key)))
print("Index of required key is: " + str(binarySearch(l, 0, n - 1, key)))
