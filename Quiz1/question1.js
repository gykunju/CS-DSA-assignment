function remove_duplicate(nums){
    if (nums.length === 0) return 0
    let prev_index = 0

    for(let i = 1; i < nums.length; i++){
        if(nums[i] !== nums[prev_index]){
            prev_index++
            nums[prev_index] = nums[i]
        }
    }
    return prev_index + 1
}

console.log(remove_duplicate([1,2,2,3,4,5,5]))