#include "videoStream.h"
using namespace vjp;

int main(int argc, char *argv[])
{
    int width, height, channels;
    int input;
    string videoFileName="";
    string imgFileName="";
    
   // if(argc < NO_OF_ARGS ){
      //  printf("Usage: videoStramMain <image-file-name> <video-file-name>\n");
      //  exit(0);
   // }
    
    std::cout << "OpenCV Samples" << std::endl;
    std::cout << "---------------" << std::endl;
    std::cout << "1. Display Image" << std::endl;
    std::cout << "2. Play video from file" << std::endl;
    std::cin >> input;
    
    if (input == IMG_INPUT) {
        std::cout << "Enter Image file name " << std::endl;
        std::cin >> imgFileName;
    }
    else if (input == VIDEO_INPUT) {
        std::cout << "Enter Video file name" << std::endl;
        std::cin >> videoFileName;
    }
    else { 
        std::cout << "Enter valid input" << std::endl;
        exit(0); 
        }
    
    // Create new instance for video stream class
    unique_ptr<videoStream> vStream(new videoStream);
  
    if (input == VIDEO_INPUT && videoFileName != "") { 
            vStream->playVideo(videoFileName.c_str()); 
        }
    else {
        // Load Image and set videoStream pointer  
        vStream->setVideoStreamImage(imgFileName.c_str());

        // Window Settings
        vStream->setWindowSettings();

        // Image Display
        vStream->displayImage();
    
    }
    
  return 0;
}