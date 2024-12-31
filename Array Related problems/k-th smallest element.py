arr = [7, 10, 4, 3, 20, 15]
k= int(input(f"enter k less or equal to {len(arr)}: "))
arr.sort()
print(arr[k-1])