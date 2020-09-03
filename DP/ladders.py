import sys 
sys.setrecursionlimit(10**6) 

def step_t_d(n,k,dp): # Time Complexity O(n*k)
	# Base Case
	if n==0:
		return 1

	# If Case is already calculated
	if dp[n]!=0:
		return dp[n]

	# Recursive case
	ans = 0
	for i in range(1,k+1):
		if n-1>=0:
			ans += step_t_d(n-i,k,dp)

	dp[n] = ans
	return dp[n]

def step_d_t(n,k): #Time Complexity O(n*k)
	dp = [0]*(n+1)
	dp[0] = 1
	for i in range(1,n+1):
		ans = 0
		for j in range(1,k+1):
			if i-j>=0:
				ans += dp[i-j]
		dp[i] = ans
	return dp[n]

def optimized_app(n,k): #Time complexity O(N)
	dp = [0]*(n+1)
	dp[0] = dp[1] = 1

	for i in range(2,k+1):
		dp[i] = 2*dp[i-1]

	for i in range(k+1,n+1):
		dp[i] = 2*dp[i-1] - dp[i-k-1]

	return dp[n]




def main():
	n = 6
	k = 3
	dp = [0]*(n+1)
	print(step_t_d(n,k,dp))
	print()
	print(step_d_t(n,k))
	print()
	print(optimized_app(n,k))

main()