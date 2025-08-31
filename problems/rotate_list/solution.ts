/**
 * Definition for singly-linked list.
 * class ListNode {
 *     val: number
 *     next: ListNode | null
 *     constructor(val?: number, next?: ListNode | null) {
 *         this.val = (val===undefined ? 0 : val)
 *         this.next = (next===undefined ? null : next)
 *     }
 * }
 */

function rotateRight(head: ListNode | null, k: number): ListNode | null {
    if(!head || !head.next || k==0)return head;
    let n = 1, tail = head;
    while(tail.next){
        tail = tail.next;
        n++;
    }
    const rotationsNeeded = k%n;
    if(rotationsNeeded==0)return head;
    
    // Find new tail at (n-rotationsNeeded-1)th position of original LinkedList
    let newTail = head;
    for(let i=0 ; i<n- rotationsNeeded -1 ;i++){
        newTail = newTail.next!;
    }
    let newHead = newTail.next;
    newTail.next = null;
    tail.next = head;
    return newHead;
};