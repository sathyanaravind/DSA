def reverse_array(nums):
    for i in range(len(nums)):
        st = i
        end = len(nums)-i-1
        if st<end:
            print(st,end)
            temp = nums[st]
            nums[st] = nums[end]
            nums[end] = temp
    return nums
    
arr = [1,2,3,4,5,6,7,8,9,10]
print(arr)
print(reverse_array(arr))
