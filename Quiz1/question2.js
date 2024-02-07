function rotate_arr(arr, steps){
    const new_arr = []
    for(let i = (arr.length - 1), j = 0; i > (arr.length - steps); i--, j++){
        new_arr[j] = arr[i];
    }

    console.log(new_arr);
}

rotate_arr([1,2,3,4], 2)