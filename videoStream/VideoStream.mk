##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=VideoStream
ConfigurationName      :=Debug
WorkspacePath          :=C:/vijay/test/testws
ProjectPath            :=C:/vijay/test/testws/test-opencv
IntermediateDirectory  :=./Debug
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=UX011912
Date                   :=07/08/2018
CodeLitePath           :="C:/Program Files/CodeLite"
LinkerName             :=g++
SharedObjectLinkerName :=g++ -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.o.i
DebugSwitch            :=-gstab
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputFile             :=$(IntermediateDirectory)/$(ProjectName)
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E 
ObjectsFileList        :="VideoStream.txt"
PCHCompileFlags        :=
MakeDirCommand         :=makedir
RcCmpOptions           := 
RcCompilerName         :=windres
LinkOptions            :=  
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). $(IncludeSwitch)C:\vijay\open-source\opencv\build\include $(IncludeSwitch)C:\vijay\open-source\opencv\build\include\opencv 
IncludePCH             := 
RcIncludePath          := 
Libs                   := $(LibrarySwitch)opencv_ffmpeg341_64 $(LibrarySwitch)opencv_world341 
ArLibs                 :=  "opencv_ffmpeg341_64.dll" "opencv_world341.dll" 
LibPath                := $(LibraryPathSwitch). $(LibraryPathSwitch)C:\vijay\open-source\opencv\build\bin $(LibraryPathSwitch)C:\vijay\open-source\opencv\build\x64\vc15\bin 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := ar rcus
CXX      := g++
CC       := gcc
CXXFLAGS :=  -g -O0 -Wall $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := as


##
## User defined environment variables
##
CodeLiteDir:=C:\Program Files\CodeLite
Objects0=$(IntermediateDirectory)/videoStream.cpp$(ObjectSuffix) $(IntermediateDirectory)/videoStreamMain.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: $(OutputFile)

$(OutputFile): $(IntermediateDirectory)/.d $(Objects) 
	@$(MakeDirCommand) $(@D)
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@$(MakeDirCommand) "./Debug"


$(IntermediateDirectory)/.d:
	@$(MakeDirCommand) "./Debug"

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/videoStream.cpp$(ObjectSuffix): videoStream.cpp $(IntermediateDirectory)/videoStream.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/vijay/test/testws/test-opencv/videoStream.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/videoStream.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/videoStream.cpp$(DependSuffix): videoStream.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/videoStream.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/videoStream.cpp$(DependSuffix) -MM videoStream.cpp

$(IntermediateDirectory)/videoStream.cpp$(PreprocessSuffix): videoStream.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/videoStream.cpp$(PreprocessSuffix) videoStream.cpp

$(IntermediateDirectory)/videoStreamMain.cpp$(ObjectSuffix): videoStreamMain.cpp $(IntermediateDirectory)/videoStreamMain.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/vijay/test/testws/test-opencv/videoStreamMain.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/videoStreamMain.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/videoStreamMain.cpp$(DependSuffix): videoStreamMain.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/videoStreamMain.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/videoStreamMain.cpp$(DependSuffix) -MM videoStreamMain.cpp

$(IntermediateDirectory)/videoStreamMain.cpp$(PreprocessSuffix): videoStreamMain.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/videoStreamMain.cpp$(PreprocessSuffix) videoStreamMain.cpp


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r ./Debug/


