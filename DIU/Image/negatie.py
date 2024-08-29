import numpy as np
import cv2

img = cv2.imread('lena.jpg', cv2.IMREAD_GRAYSCALE)
cv2.imshow('input image',img)

# Subtract the img array values from max value(calculated from dtype)
img_neg = 255 - img

# Show the negative image
cv2.imshow('negative',img_neg)
cv2.waitKey(0)