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
    IplImage *frame = NULL;
    while(true){
        frame = cvQueryFrame(capture);
        if(!frame) break;
        cvShowImage("Play Video", frame);
        char c = cvWaitKey(33);
        if (c==27) break;
    }
    cvReleaseCapture(&capture);
   // cvDestroyWindow("Play Video");
    
    
}