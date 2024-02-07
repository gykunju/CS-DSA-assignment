function duplicates(array){
    let count = 0;
    for(let i = 0; i < array.length; i++){
        for(let z = 0;z < array.length; z++){
            if(z !== i && array[i] === array[z]){
                count += 1
                return true
            }
        }   
    }
    if (count === 0){
        return false
    }
}


console.log(duplicates([1,2,3,4,5,6,7,1]))