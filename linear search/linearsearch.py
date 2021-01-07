arr = [10, 7, 9, 8, 4, 12, 11, 3, 2, 5]
x = 12
n = len(arr)
index = -1
for i in range(0, n):
    if (arr[i] == x):
        index = i
        break
if(index == -1):
    print("Element is not present in array")
else:
    print("Element is present at index % d" % index)
