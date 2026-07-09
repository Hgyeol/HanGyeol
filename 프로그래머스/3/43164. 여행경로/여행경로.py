import copy

def solution(tickets):
    answer = []
    graph = {}
    visited = {}
    global res 
    res = []
    for i, t in enumerate(tickets):
        if t[0] not in graph:
            graph[t[0]] = [(t[1], i)]
        else:
            graph[t[0]].append((t[1], i))
        if t[1] not in graph:
            graph[t[1]] = []
        visited[i] = False
    result = ["ICN"]
    dfs("ICN", graph, visited, result)
    answer = res
    return sorted(answer)[0]

def dfs(node, graph, o_visited, o_result):
    if len(o_result) == len(o_visited) + 1:
        # print(f"result: {o_result}")
        global res
        res.append(o_result)
        return
    for next, t_idx in graph[node]:
        if not o_visited[t_idx]:
            visited = copy.deepcopy(o_visited)
            result = copy.deepcopy(o_result)
            visited[t_idx] = True
            result.append(next)
            dfs(next, graph, visited, result)