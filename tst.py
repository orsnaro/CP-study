import cv2 ; import numpy as np ; import matplotlib.pyplot as plt
from scipy.ndimage import rotate

org = cv2.imread( "man.png" , cv2.IMREAD_GRAYSCALE)

cpy = org.copy()
kernel = np.array ([[-1 , -2 , 0] , [-2 , 0 , 2], [0 , 2 , 1]])

cpy = cv2.filter2D(cpy , -1 , kernel)



#convolve impulse with 180 deg rotated kernel == correlation
kernel = rotate(kernel , 180 )
cpy2 = cv2.filter2D(cpy , -1 , kernel)

cv2.imshow("conv" , cpy)
cv2.imshow( 'core' , cpy2)