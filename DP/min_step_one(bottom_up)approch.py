def min_step(n):
	dp = [0]*(n+1)
	dp[1] = 0

	for i in range(2,n+1):
		x = y = z = float('inf')
		if i%3==0:
			x = dp[i//3] 

		if i%2==0:
			y = dp[i//2] 
 
		z = dp[i-1]

		dp[i] = min(x,y,z) + 1

	return dp[n]


def main():
	n = 10
	print(min_step(n))

main()