def min_step(n,dp):
	if n==1:
		return 0

	if(dp[n]!=0):
		return dp[n]

	x = y = z = float('inf')
	if n%3 == 0:
		x = min_step(n//3,dp)

	if n%2 == 0:
		y = min_step(n//2,dp)

	z = min_step(n-1,dp)

	dp[n] = min(x,y,z)+1

	return dp[n]

def main():
	n = 5
	dp = [0]*(n+1)
	print(min_step(n,dp))
	print(dp)

main()