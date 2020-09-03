# import sys
# sys.setrecursionlimit(10**6)

def profit_t_d(n,cost,dp): # Time Complexity = O(n2)
	if n==0:
		return 0

	if dp[n]!=0:
		return dp[n]

	best = 0
	for i in range(1,n+1):
		curr_profit = cost[i] + profit_t_d(n-i,cost,dp)
		best = max(curr_profit,best)
	dp[n] = best
	return dp[n]

def profit_b_u(n,cost): # Time Complexity = O(n2)
	dp = [0]*(n+1)
	for length in range(1,n+1):
		best = 0
		for cut in range(1,length+1):
			best = max(best,cost[cut]+dp[length-cut])
		dp[length] = best
	return dp[n]


def main():
	n = 4 	
	dp = [0]*(n+1)
	cost = [0,2,3,2,5]
	print(profit_t_d(n,cost,dp))
	print(profit_b_u(n,cost))
main()
