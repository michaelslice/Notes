// ts-node conditionals.ts

let my_nums = [1, 2, 3]

for(let i = 0; i < my_nums.length; ++i){
    
    // Conditional to check if data type is number
    if(typeof(my_nums[i]) == "number"){ 
        console.log("Value is num");
    }
}