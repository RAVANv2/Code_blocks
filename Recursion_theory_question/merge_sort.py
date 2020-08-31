def merge(a,s,e):
	i = s
	mid = (s+e)//2
	j = mid+1
	k = s
	temp = [0]*(e+1)


	while(i<=mid and j<=e):
		if a[i]<a[j]:
			temp[k] = a[i]
			k+=1
			i+=1
		else:
			temp[k] = a[j]
			k+=1
			j+=1

	while i<=mid:
		temp[k] = a[i]
		k+=1
		i+=1

	while j<=e:
		temp[k] = a[j]
		k+=1
		j+=1
	for i in range(s,e+1):
		a[i] = temp[i]


def merge_sort(a,s,e):
	if s>=e:
		return

	mid = (s+e)//2

	merge_sort(a,s,mid)
	merge_sort(a,mid+1,e)

	merge(a,s,e)



def main():
	a = [5,2,3,5,1,0]
	n = len(a)
	merge_sort(a,0,n-1)
	print(a)

main()