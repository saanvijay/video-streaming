#include "videoStream.h"
#include "opencv2/opencv.hpp"
using namespace vjp;
using namespace cv;

void videoStream::playVideo(const char *videofile) {
  
    setVideoCapture(videofile); 
    
  // Check if camera opened successfully
  if(!m_cap.isOpened()){
    cout << "Error opening video stream or file" << endl;
    return;
  }
     
  while(1){
 
    // Capture frame-by-frame
    m_cap >> m_video_frame;
  
    // If the frame is empty, break immediately
    if (m_video_frame.empty())
      break;
 
    // Display the resulting frame
    imshow( "Frame", m_video_frame );
 
    // Press  ESC on keyboard to exit
    char c=(char)waitKey(25);
    if(c==27)
      break;
  }
  
  // When everything done, release the video capture object
  m_cap.release();
 
  // Closes all the frames
  destroyAllWindows();
}