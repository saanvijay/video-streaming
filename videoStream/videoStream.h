#pragma once 

#include <stdlib.h>
#include <stdio.h>
#include "opencv/cv.h"
#include "opencv/highgui.h"
#include <iostream>
#include <string>
using namespace std;

#define MAIN_WINDOW_NAME "VideoStreamSample"
#define MAIN_WINDOW_X_POS 100
#define MAIN_WINDOW_Y_POS 100

#define NO_OF_ARGS 2
#define IMG_INPUT 1
#define VIDEO_INPUT 2

namespace vjp {
    
    class videoStream {
        
        IplImage* m_img; 
        IplImage* m_video;
        
    public:
        videoStream():m_img(NULL),m_video(NULL) {}
        ~videoStream() {}
        videoStream(const videoStream&) = delete;
        videoStream& operator=(const videoStream&) = delete;
        
        void getImageData(int &width, int &height, int &channels);
        void setWindowSettings();
        inline  void setVideoStreamImage(const char *imgFile) { 
            m_img = cvLoadImage(imgFile);
        }
        inline  IplImage* getVideoStreamImage() { return m_img; }
        inline void displayImage() {
            cvShowImage(MAIN_WINDOW_NAME,  m_img);
            cvWaitKey(0);
        }
        void playVideo(const char*);
    };
}