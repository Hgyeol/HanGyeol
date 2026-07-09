def solution(begin, target, words):
    if target not in words:
        return 0
    visited = set()
    visited.add(begin)
    queue = [(begin, 0)]

    while queue:
        word, cnt = queue.pop(0)
        if word == target:
            return cnt
        
        for w in words:
            if w not in visited and sum(1 for a, b in zip(word, w) if a != b) == 1:
                visited.add(w)
                queue.append((w, cnt + 1))
    return 0