def partition(a,s,e):
	i = s-1

	pivot = a[e]

	for j in range(s,e):
		if a[j]<=pivot:
			i+=1
			a[i] , a[j] = a[j] , a[i]

	i+=1
	a[i] , a[e] = a[e] , a[i]
	return i

def quick_sort(a,s,e):
	if s>=e:
		return 

	p = partition(a,s,e)

	quick_sort(a,s,p-1)
	quick_sort(a,p+1,e)

def main():
	a = [1,4,2,3,5,7,3]
	n = len(a)
	quick_sort(a,0,n-1)
	print(a)

main()

