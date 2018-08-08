#include "videoStream.h"
using namespace vjp;

 void videoStream::getImageData(int &width, int &height, int &channels) {
                width = m_img->width;
                height = m_img->height;
                channels = m_img->nChannels;
}
            
 void videoStream::setWindowSettings() {
            cvNamedWindow(MAIN_WINDOW_NAME, CV_WINDOW_AUTOSIZE); 
            cvMoveWindow(MAIN_WINDOW_NAME, MAIN_WINDOW_X_POS, MAIN_WINDOW_Y_POS);
}

void videoStream::playVideo(const char *videofile) {
    setWindowSettings();
    CvCapture *capture = cvCreateFileCapture(videofile);
    while(true){
        m_video_frame = cvQueryFrame(capture);
        if(!m_video_frame) break;
        cvShowImage("Play Video", m_video_frame);
        char c = cvWaitKey(33);
        if (c==27) break;
    }
    cvReleaseCapture(&capture);
   // cvDestroyWindow("Play Video");
    
    
}