def summer(marray, size):
    print('entered recursive function')
    if size < 0:
        return 0
    else:
        return marray[size]+summer(marray,size-1)


def main():
    print('entered main')
    myArray = [1,2,3,4,5]
    print('size of array is: ',len(myArray))
    ans = summer(myArray,len(myArray)-1)
    print(ans)

#main()
