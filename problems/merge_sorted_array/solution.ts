/**
 Do not return anything, modify nums1 in-place instead.
 */
 function swap(arr1:number[],arr2:number[],a:number,b:number){
    let store:number = arr1[a];
    arr1[a]=arr2[b];
    arr2[b]=store;
    return;
 }
function merge(nums1: number[], m: number, nums2: number[], n: number): void {
    let itr1:number =0, itr2:number=0;
    if(n===0)return;
    while(itr1<m){
        if(nums1[itr1]<=nums2[itr2])itr1++;
        else if(nums1[itr1]>nums2[itr2]){
            swap(nums1,nums2,itr1,itr2);
            nums2.sort((x:number,y:number)=>x-y);
            itr1++;
        }
    }
    while(itr1<m+n && itr2<n){
        nums1[itr1]=nums2[itr2];
        itr1++;
        itr2++;
    }
};