import numpy
import cv2

img = numpy.loadtxt("C:\\Python27\\rx_vlc.txt")
cv2.imwrite("C:\\Python27\\32x32.png",img)
