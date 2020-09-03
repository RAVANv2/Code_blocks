import time
def min_coins_t_b(n,coins,dp):

	# Base Case
	if n == 0:
		return 0

	# If already computed
	if(dp[n]!=0):
		return dp[n]

	# Recursion Case
	ans = float('inf')
	for i in range(len(coins)):
		if n-coins[i]>=0:
			sub_prob = min_coins_t_b(n-coins[i],coins,dp) +1
			ans = min(ans,sub_prob)
	dp[n] = ans
	return dp[n]

def min_coins_b_t(n,coins):
	dp = [0]*(n+1)

	for i in range(1,n+1):

		dp[i] = float('inf')

		for j in range(len(coins)):

			if(i - coins[j])>= 0:
				ans = dp[i - coins[j]] + 1
				dp[i] = min(ans,dp[i])
	return dp[n]



def main():
	n = 15
	coins = [1,7,10]
	dp = [0]*(n+1)
	start = time.time()
	print(min_coins_t_b(n,coins,dp))
	print(min_coins_b_t(n,coins))

main()