/**
 Do not return anything, modify nums1 in-place instead.
 */
function merge(nums1: number[], m: number, nums2: number[], n: number): void {
    let i : number = 0;
    let j : number = 0;
    while(i<m && j<n){
        if(nums1[i]<=nums2[j])i++;
        else {
            let temp = nums1[i];
            nums1[i]=nums2[j];
            nums2[j]=temp;
            nums2.sort((x,y)=>x-y);
            i++;
        }
    }
    while(i<m+n && j<n){
        nums1[i]=nums2[j];
        i++;
        j++;
    } 
};