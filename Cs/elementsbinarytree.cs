public class Solution
{
	public IList<int> GetAllElements(TreeNode root1, TreeNode root2)
	{
		List<int> tree1 = new List<int>();
		List<int> tree2 = new List<int>();
		Inorder(root1, tree1);
		Inorder(root2, tree2);
		return (MergeTrees(tree1, tree2));
	}

	public List<int> MergeTrees(List<int> tree1, List<int> tree2)
	{
		int ind1 = tree1.Count;
		int ind2 = tree2.Count;
		List<int> ret = new List<int>();

		int i = 0;
		int j = 0;
		while(i < ind1 && j < ind2)
		{
			ret.Add(Math.Min(tree1[i], tree2[j]));
			if (tree1[i] <= tree2[j])
				i++;
			else
				j++;
		}
		while(i < ind1)
			ret.Add(tree1[i++]);
		while(j < ind2)
			ret.Add(tree2[j++]);
		return ret;
	}

	public void Inorder(TreeNode root, List<int> tree)
	{
		if(root is null)
			return;
		Inorder(root.left, tree);
		tree.Add(root.val);
		Inorder(root.right, tree);
	}
}
