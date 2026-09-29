
def dfs(u, t, flow):
    if u == t:
        return flow

    visited[u] = True

    for v in range(V):
        if not visited[v] and graph[u][v] > 0:
            f = dfs(v, t, min(flow, graph[u][v]))

            if f > 0:
                graph[u][v] -= f
                graph[v][u] += f
                return f

    return 0


V, E = map(int, input().split())

graph = [[0] * V for _ in range(V)]

for _ in range(E):
    u, v, c = map(int, input().split())
    graph[u][v] += c

max_flow = 0

while True:
    visited = [False] * V
    flow = dfs(0, V - 1, 10**18)

    if flow == 0:
        break

    max_flow += flow

print(max_flow)
