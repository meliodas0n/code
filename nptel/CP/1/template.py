import sys
import os
import time

if not os.environ.get('ONLINE_JUDGE'):
  sys.stdin = open('in.txt', 'r')
  sys.stdout = open('out.txt', 'w')
  
start_time = time.time()



print(f'{time.time() - start_time}')