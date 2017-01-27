import sys
import random
import math
import time
from random import SystemRandom
cryptogen = SystemRandom()
initialTime = time.time()
numPoints = int(sys.argv[1])

inCircle = 0

for num in xrange(numPoints):
#  x = random.random()
#  y = random.random()
  x = cryptogen.random()
  y = cryptogen.random()
  if y < math.sqrt(1 - x ** 2):
    inCircle += 1
print("Approximated value for pi: " + str(4.0 * inCircle / numPoints))
finalTime = time.time()
elapsedTime = finalTime - initialTime
timePerIt = elapsedTime / numPoints
print("Time per iteration: " + str(int(round(timePerIt*1000000000))) + " nanoseconds")
print("Elapsed time: " + str(int(round(elapsedTime))) + " seconds")
