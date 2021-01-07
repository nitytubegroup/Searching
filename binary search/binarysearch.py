arr = [2, 3, 4, 5, 7, 8, 9, 10, 11, 12]
x = 8
n = len(arr)
l = 0
r = n-1
index = -1
while l <= r:
    mid = (l + r) // 2
    if arr[mid] == x:
        index = mid
        break
    elif arr[mid] < x:
        l = mid+1
    else:
        r = mid-1
if index == -1:
    print("Element is not present in array")
else:
    print("Element is present at index % d" % index)
