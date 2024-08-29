import cv2
import numpy as np
import matplotlib.pyplot as plt
from copy import deepcopy as dpc

img_inp=cv2.imread('lena.jpg', cv2.IMREAD_GRAYSCALE)

cv2.imshow("input image", img_inp)

# Calculate the histogram
hist = cv2.calcHist([img_inp], [0], None, [256], [0, 256])

# Normalize the histogram
M, N = img_inp.shape
normalized_hist = hist / (M * N)

plt.hist(img_inp.ravel(), 256, [0, 256])
plt.title("Input image")
plt.show()

cv2.waitKey(0)
cv2.destroyAllWindows()