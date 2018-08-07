#include "videoStream.h"
using namespace vjp;

int main(int argc, char *argv[])
{
    int width, height, channels;
    
    if(argc < 2){
        printf("Usage: videoStramMain <image-file-name>\n");
        exit(0);
    }
    
    // Create new instance for video stream class
    videoStream *vStream = new videoStream;
  

  // Load Image and set videoStream pointer  
  vStream->setVideoStreamImage(cvLoadImage(argv[1]));
  
  if (!vStream->getVideoStreamImage())
      std::cout << "Unable to load the image" << std::endl;
      
  // If image loaded properly then get the image details
  vStream->getImageData(width, height, channels);

  
  std::cout << "Image Height = "<< height << std::endl;
  std::cout << "Image Width  = "<< width << std::endl;
  std::cout << "Image Channels = "<<channels << std::endl; 

  // Window Settings
  vStream->setWindowSettings();

  // Image Display
  cvShowImage(MAIN_WINDOW_NAME,  vStream->getVideoStreamImage());

  // Key wait
   cvWaitKey(0);

  if (vStream) delete vStream;
    
  return 0;
}