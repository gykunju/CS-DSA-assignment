function summation(array){
    let i = 1;
    let sum = array[0];
    while(i < array.length){
        sum += array[i];
        i++;
    }
    console.log(sum)
}

summation([1,2,3,4,5,6])

function maximum(array){
    let largest = array[0];
    for(const element of array){
        if(largest < element){
            largest = element;
        }
    }
    console.log(largest)
}

maximum([1,2,10,4,5,6])