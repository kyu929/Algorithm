Algorithm
==========================================================

간단한 코드도 같이 추가(필) acm icpc team note같은 느낌 꾸준히 반복적으로 복습!

- ### 1. DP
  (1) 최장 증가 수열

- ### 2. 페이지 교체 알고리즘
  자원 제한이 있는 컴퓨터 자원을 그 한도 내에서 최고의 효율을 얻기 위함.
  컴퓨터는 보통 주기억 장치인 램과 보조기억 장치인 하드나 ssd 등의 대용량 기억장치를 가지고 있다. 램이 속도가 빠르기 때문에 보조기억장치로 부터 데이터를 램에 저장해
  놓고 램에 있는 데이터를 가지고 빠르게 연산을 한다. 이 때 램을 같은 크기의 블록으로 구성해서 운용하는데 이 블록을 페이지라고 부른다.
  페이지 교체 알고리즘 종류  
  1. FIFO (First In First Out)
  2. OPT (OPTimal Page Replacement)
  3. LRU (Least Recently Used)
  4. Count-Based
  5. LFU (Least Frequently Used)
  6. MFU (Most Frequently Used)

  reference:https://gomguard.tistory.com/115

- ## 그래프 탐색

  - ### 3. BFS(Breadth-First Search) - 너비 우선 탐색
    
    - #### 너비 우선 탐색이란?
    
      루트 노드(혹은 다른 임의의 노드)에서 시작해서 인접한 노드를 먼저 탑색하는 방법
    
      시작 정점으로부터 가까운 정점을 먼저 방문하고 멀리 떨어져 있는 정점을 나중에 방문하는 순회   
      즉, 깊게(deep) 탐색하기 전에 넓게(wide) 탐색하는 것이다.   
      사용하는 경우 : 두 노드 사이의 최단 경로 혹은 임의의 경로를 찾고 싶을 때 이 방법을 선택한다.   
      너비 우선 탐색(BFS)이 깊이 우선 탐색(DFS)보다 좀 더 복잡하다.
    
    - #### 너비 우선 탐의 특징
      
      두 노드 사이의 최단 경로를 탐색할 때 활용하기 좋은 방식이다. (멀리 떨어진 노드는 나중에 탐색하는 방식이기 때문)
      
      큐를 활용해서 탐색할 노드의 순서를 정하고 큐에 저장된 순서대로 탐색한다.
      선입선출의 방식을 활용해야 하기 때문에 큐를 활용한다.
      
    - #### 그래프 구현방식
      
      1. 인접행렬
      2. 인접리스트
      
      reference : https://gmlwjd9405.github.io/2018/08/15/algorithm-bfs.html
                  https://velog.io/@sukong/%EC%95%8C%EA%B3%A0%EB%A6%AC%EC%A6%98-%EA%B0%9C%EB%85%90-%EB%84%88%EB%B9%84%EC%9A%B0%EC%84%A0%ED%83%90%EC%83%89BFS-lp8zywtn
  - ### 4. DFS() - 깊이 우선 탐색
    - #### 깊이 우선 탐색이란?
  - ### 5.
