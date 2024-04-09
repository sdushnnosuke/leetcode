# define tree node
class TreeNode:
	"""docstring for TreeNode"""
	def __init__(self, val=0,left = None,right = None):
		self.val = val;
		self.left = left;
		self.right= right;

class Solution:
	def mergeTrees(self,root1:TreeNode,root2:TreeNode) -> TreeNode:
		if root1==None||root2==None:
			merged = root1||root2
			return merged
		else:
			merged = TreeNode(root1.val+root2.val)
			merged.left = mergeTrees(root1.left,root1.left)
			merged.right= mergeTrees(root1.right,root2.right)
			return merged






def main():
	




if __name__ == '__main__':
	main()

