public class Solution
{
	public int SumRootToLeaf(TreeNode root)
	{
		int sum = 0;
		depth_first_search(root, 0, ref sum);
		return (sum);
	}

	private void depth_first_search(TreeNode root, int val, ref int sum)
	{
		if (root == null)
			return;
		val = val * 2 + root.val;
		if (root.left == null && root.right == null)
			sum += val;
		depth_first_search(root.left, val, ref sum);
		depth_first_search(root.right, val, ref sum);
	}
}
