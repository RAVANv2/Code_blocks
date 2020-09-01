def fibo(n):
	dp = [0]*(n+1)
	dp[1] = 1
	for i in range(2,n+1):
		dp[i] = dp[i-1] + dp[i-2]

	return dp[n]
	#Space O(N)

def fibo_reduce_space(n):
	if n==0 or n==1:
		return n 

	a = 0
	b = 1

	for i in range(2,n+1):
		c = a+b
		a = b
		b = c

	return c
	#Space O(1)




def main(): 
	n = 20
	print(fibo(n))
	print(fibo_reduce_space(n))

main()
	