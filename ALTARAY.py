def is_alternating(num1, num2):
	if (num1<0 and num2>=0) or (num1>=0 and num2<0):
		return True
	return False

t = int(input())
# print("t = ", t )
while t>0:
	t=t-1
	n = int(input())
	values = [int(x) for x in input().split()]
	# print("values,", values)
	result = [1]*n
	# print("result: ", result)
	for i in range(n-2,-1, -1):
		if is_alternating(values[i], values[i+1]):
			result[i] = result[i+1]+1
	print(" ".join(str(num) for num in result))