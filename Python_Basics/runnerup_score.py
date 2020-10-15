if __name__ == '__main__':
    n = int(input())
    arr = map(int, input().split())

    #here we will sort the list and then find the second last score
    runnerup = sorted(list(set(arr)))[-2]

    print(runnerup)