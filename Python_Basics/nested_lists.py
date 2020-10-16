if __name__ == '__main__':

    score_list = []
    for i in range(int(input())):
        name = input()
        score = float(input())
        score_list.append([name, score])

    
    second_highest = sorted(set(score for name, score in score_list))[1]

    for name in sorted([name for name, score in score_list if score == second_highest]):
        print(name)
    
    