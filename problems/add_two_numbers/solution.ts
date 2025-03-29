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

function addTwoNumbers(l1: ListNode | null, l2: ListNode | null): ListNode | null {
    let dummyHead : ListNode = new ListNode(0);
    let currentNode : ListNode = dummyHead;
    let carry : number = 0;
    while(l1!==null || l2!==null || carry!=0 ){
        let val1 : number = l1==null ? 0 : l1.val;
        let val2 : number = l2==null ? 0 : l2.val;
        let sum : number = val1+val2+carry;
        carry = Math.floor(sum/10);
        currentNode.next = new ListNode(sum%10);
        currentNode = currentNode.next;
        if(l1!=null)l1=l1.next;
        if(l2!=null)l2=l2.next;
    }
    return dummyHead.next;
};