nums = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, "TEST", "TEdaasdasdsdasS"];

for(let i = 0; i < nums.length; ++i){
    if(nums[i] % 2 === 0){
        console.log("EVEN");
    }
    else if(nums[i] % 2 !== 0){
        console.log("ODD");
    }
    else{
        console.log("NEITHER");
    }
}