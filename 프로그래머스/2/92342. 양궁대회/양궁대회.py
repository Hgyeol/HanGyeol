def solution(n, info):
    answer = []
    result = []
    score = [0 for _ in range(11)]
    
    queue = [(n, 0, score)]
    max_diff = 0
    while queue:
        cnt, idx, score_set = queue.pop(0)

        if cnt < 0 or idx >= 11: continue

        if idx == 10:
            if cnt != 0:
                score_set[10] += cnt
            p_sum = 0
            l_sum = 0
            for i in range(11):
                if score_set[i] > info[i]:
                    l_sum += 10 - i
                elif info[i] != 0 and score_set[i] <= info[i]:
                    p_sum += 10 - i
            if p_sum < l_sum:
                # print(f"score_set: {score_set}")
                
                if len(result) == 0:
                    result = list(score_set)
                    if l_sum - p_sum > max_diff:
                        max_diff = l_sum - p_sum
                else:
                    if l_sum - p_sum > max_diff:
                        max_diff = l_sum - p_sum
                        result = list(score_set)
                    elif l_sum - p_sum == max_diff:
                        for i in range(10, -1, -1):
                            if score_set[i] > result[i]:
                                result = list(score_set)
                                break
                            elif score_set[i] < result[i]:
                                break
        if info[idx] + 1 <= cnt:
            add_score = score_set[:]
            add_score[idx] = info[idx] + 1
            queue.append((cnt - info[idx]-1, idx + 1, add_score))
        queue.append((cnt, idx + 1, score_set[:]))

    if len(result) == 0:
        answer = [-1]
    else: answer = result
    # print(result)
    return answer