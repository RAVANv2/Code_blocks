def fibo(n,dp):
	# Base Case
	if n==1 or n==0:
		return n

	if(dp[n]!=0):
		return dp[n]

	dp[n] = fibo(n-1,dp) + fibo(n-2,dp)
	return dp[n]


def main(): 
	n = 8
	dp = [0]*(n+1)
	ans = fibo(n,dp)
	print(ans)

main()