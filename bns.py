n = int(input("Enter the size of array => "))

arr = []

print(f"Enter {n} integers in ascending order =>")

for i in range(n):
    arr.append(int(input()))

target = int(input("Enter the number you want to search => "))

start = 0
end = n - 1

pos = -1

while start <= end:

    mid = start + (end - start) // 2

    if arr[mid] == target:
        pos = mid
        break

    elif arr[mid] > target:
        end = mid - 1

    else:
        start = mid + 1

if pos == -1:
    print(target, "is not present in the array")

else:
    print(target, "is present in the array at position", pos)
