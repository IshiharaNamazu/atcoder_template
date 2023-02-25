import bisect,collections,copy,heapq,itertools,math,numpy,string
import sys
def Iin(): return int(sys.stdin.readline().rstrip())
def LIin(): return list(map(int,sys.stdin.readline().rstrip().split()))
def Sin(): return sys.stdin.readline().rstrip()
def LSin(): return list(sys.stdin.readline().rstrip().split())
def dprint(s):
    if debug:
        print(s)
debug=False
#############################################################################################
H,W = map(byte, input().sprit())
grid = [map(byte, input().sprit()) for _ in range(H)]