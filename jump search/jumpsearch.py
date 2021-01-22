import math
arr = [0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55,
       89, 144, 233, 377, 610, 700, 710, 720, 730]
x = 730
index = -1
n = len(arr)
step = int(math.sqrt(n))
last = -1
for i in range(step-1, n, step):
    if arr[i] >= x:
        last = i
        break
#  linear search parameters
start = -1
end = -1
if last == -1:
    start = (n / step) * step
    end = n - 1
else:
    start = last - step + 1
    end = last
for i in range(start, end+1):
    if (arr[i] == x):
        index = i
        print('%d is found at index %d' % (x, index))
        break
if index == -1:
    print(x, " is not present in the array")
