public class Solution
{
	public ListNode MergeTwoLists(ListNode l1, ListNode l2)
	{
		ListNode head =  new ListNode(0);
		ListNode dummyhead = head;

		while (l1 != null && l2 != null)
		{
			head.next = l2.val < l1.val ? l2 : l1;
			if (l2.val < l1.val)
				l2 = l2.next;
			else
				l1 = l1.next;
			head = head.next;
		}
		head.next = l1 != null ? l1 : l2;
		return dummyhead.next;
	}
}
