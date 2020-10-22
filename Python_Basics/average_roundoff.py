if __name__ == '__main__':
    n = int(input())
    student_marks = {}
    for _ in range(n):
        name, *line = input().split()
        scores = list(map(float, line))
        student_marks[name] = scores
    query_name = input()

    add=0
    for i in range(3):
        add+=student_marks[query_name][i]
    
    avg=add/3
    print("{0:.2f}".format(avg))