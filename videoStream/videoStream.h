#pragma once 

#include <stdlib.h>
#include <stdio.h>
#include "opencv/cv.h"
#include "opencv/highgui.h"
#include <iostream>
using namespace std;

#define MAIN_WINDOW_NAME "VideoStreamSample"
#define MAIN_WINDOW_X_POS 100
#define MAIN_WINDOW_Y_POS 100

namespace vjp {
    
    class videoStream {
        
        IplImage* m_img; 
        
    public:
    
        void getImageData(int &width, int &height, int &channels);
        void setWindowSettings();
        inline  void setVideoStreamImage(IplImage* img) { m_img = img;}
        inline  IplImage* getVideoStreamImage() { return m_img; }
    };
}