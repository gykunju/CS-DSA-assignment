function singleNumber(array){
    for(let i = 0; i < array.length; i++){
        let count = 0;
        for(let z = 0; z < array.length; z++){
            if(z !== i && array[i] === array[z]){
                count += 1
            }
        }
        if(count === 0){
            return array[i]
        }
    }
}

console.log(singleNumber([1,2,3,2,3,1,4]))