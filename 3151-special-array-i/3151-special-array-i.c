bool isArraySpecial(int* nums, int numsSize) {
    int i;

    for(i = 0; i < numsSize - 1; i++){
        if(nums[i] % 2 != nums[i + 1] % 2)
            continue;
        else
            break;
    }
    if (i != numsSize - 1)
        return false;
    return true;
}