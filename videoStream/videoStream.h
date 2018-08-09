#pragma once 

#include <stdlib.h>
#include <stdio.h>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/opencv.hpp>
#include <iostream>
#include <string>
using namespace cv;
using namespace std;


#define MAIN_WINDOW_NAME "VideoStreamSample"
#define MAIN_WINDOW_X_POS 100
#define MAIN_WINDOW_Y_POS 100

#define NO_OF_ARGS 2
#define IMG_INPUT 1
#define VIDEO_INPUT 2

namespace vjp {
    
    class videoStream {
        
        Mat m_img; 
        Mat m_video_frame;
        VideoCapture m_cap;
        
    public:
        videoStream() {}
        ~videoStream() {}
        videoStream(const videoStream&) = delete;
        videoStream& operator=(const videoStream&) = delete;
        
        void setWindowSettings();
        inline  void setVideoStreamImage(const char *imgFile) { 
            m_img = imread(imgFile, CV_LOAD_IMAGE_COLOR);
        }
        inline  Mat getVideoStreamImage() { return m_img; }
        inline void setVideoCapture(const char *videoFilename) { m_cap.open(videoFilename);}
        inline void displayImage() {
            imshow(MAIN_WINDOW_NAME,  m_img);
            waitKey(0);
        }
        void playVideo(const char*);
    };
}