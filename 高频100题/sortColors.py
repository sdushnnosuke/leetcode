class Solution:
	def sortColors(self,nums:List[int])->None:
		n =len(nums)
		p0=p1=0
		for i in range(n):
			if nums[i]==1:
				nums[p1],nums[i]=nums[i],nums[p1]
				p1+=1;
			elif nums[i]==0:
				nums[p0],nums[i]=nums[i],nums[p0]
				if p0<p1:
					nums[p1],nums[i]=nums[i],nums[p1]
				p1+=1
				p0+=1

