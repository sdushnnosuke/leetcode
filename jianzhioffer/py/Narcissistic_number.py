
class Solution(object):
	def getNumber(self):
		narcissisticList=[]
		for i in range(100,1000):
			tmp =i
			ones = i%10
			i=i//10
			tens = i%10
			i=i//10
			hundreds=i%10

			#newNumber = math.pow(ones,3)+math.pow(tens,3)+math.pow(hundreds,3)
			newNumber = ones**3+tens**3+hundreds**3
			if tmp==newNumber:

				narcissisticList.append(newNumber)
		return narcissisticList


def main():
	solution = Solution()
	narcissisticList = solution.getNumber()
	print(narcissisticList)



if __name__ == '__main__':
	main()


