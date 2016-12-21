
############# Target type (Debug/Release) ##################
############################################################
CPPCompileDebug=-g
CPPCompileRelease=-O
LinkDebug=-g
LinkRelease=-O

ConfigurationCPPCompileSwitches=   -I. -I. -I$(OMROOT) -I$(OMROOT)/LangCpp -I$(OMROOT)/LangCpp/oxf $(INST_FLAGS) $(INCLUDE_PATH) $(INST_INCLUDES) -DUSE_IOSTREAM $(CPPCompileDebug) -c   

#########################################
###### Predefined macros ################
RM=/bin/rm -rf
MD=/bin/mkdir -p
INCLUDE_QUALIFIER=-I
DEFINE_QUALIFIER=-D
CC=gcc -DUSE_IOSTREAM
LIB_CMD=ar
LINK_CMD=$(CC)
LIB_FLAGS=rvu
LINK_FLAGS=-lpthread -lstdc++ -lrt $(LinkDebug)  

#########################################
####### Context macros ##################

FLAGSFILE=
RULESFILE=
OMROOT="/localdata/IBM/Rhapsody8.1.5/Share"
RHPROOT="/localdata/IBM/Rhapsody8.1.5"

CPP_EXT=.cpp
H_EXT=.h
OBJ_EXT=.o
EXE_EXT=
LIB_EXT=.a

INSTRUMENTATION=None

TIME_MODEL=RealTime

TARGET_TYPE=Executable

TARGET_NAME=Algorithm_Socket

all : $(TARGET_NAME)$(EXE_EXT) Algorithm_Socket.mak

TARGET_MAIN=MainAlgorithm_Socket

LIBS=

INCLUDE_PATH= \
  $(INCLUDE_QUALIFIER)$(OMROOT)/LangCpp/osconfig/Linux

ADDITIONAL_OBJS=

OBJS= \
  LCD_Main.o \
  Logger.o \
  SHM_Connection.o \
  ILCD.o \
  Motor_Main.o \
  IMotor.o \
  ISensor.o \
  SensReader.o \
  Console.o \
  Observer.o \
  IObserver.o \
  RfidReader.o \
  Rfid_Main.o \
  LCD.o \
  Motor.o \
  Altera.o \
  Sensor.o \
  SM_Read.o \
  PiAlgorithm.o \
  PiSpeakerThread.o \
  PiListenerThread.o \
  TrainPos.o \
  Order.o \
  Communication.o \
  object_0.o \
  Socket.o \
  ClientSocket.o \
  ServerSocket.o \
  SocketException.o \
  startUpClass.o \
  TrainListenerThread.o \
  TrainThread.o \
  TrainSpeakerThread.o \
  TrainCommunication.o \
  TrainTestThread.o \
  TrainTestCommunication.o \
  TrainTestListenerThread.o \
  TrainTestSpeakerThread.o \
  TrainTestOrder.o \
  TrainTestFailureThread.o \
  Common.o \
  Train.o \
  TrainCommunicationPackage.o




#########################################
####### Predefined macros ###############
$(OBJS) :  $(INST_LIBS) $(OXF_LIBS)

OBJ_DIR=

ifeq ($(OBJ_DIR),)
CREATE_OBJ_DIR=
CLEAN_OBJ_DIR=
else
CREATE_OBJ_DIR= $(MD) $(OBJ_DIR)
CLEAN_OBJ_DIR=  $(RM) $(OBJ_DIR)
endif


ifeq ($(INSTRUMENTATION),Animation)

INST_FLAGS=-DOMANIMATOR
INST_INCLUDES=-I$(OMROOT)/LangCpp/aom -I$(OMROOT)/LangCpp/tom
INST_LIBS= $(OMROOT)/LangCpp/lib/linuxaomanim$(LIB_EXT)
OXF_LIBS=$(OMROOT)/LangCpp/lib/linuxoxfinst$(LIB_EXT) $(OMROOT)/LangCpp/lib/linuxomcomappl$(LIB_EXT) $(OMROOT)/LangCpp/lib/linuxoxsiminst$(LIB_EXT)
SOCK_LIB=

else
ifeq ($(INSTRUMENTATION),Tracing)

INST_FLAGS=-DOMTRACER
INST_INCLUDES=-I$(OMROOT)/LangCpp/aom -I$(OMROOT)/LangCpp/tom
INST_LIBS=$(OMROOT)/LangCpp/lib/linuxtomtrace$(LIB_EXT) $(OMROOT)/LangCpp/lib/linuxaomtrace$(LIB_EXT)
OXF_LIBS= $(OMROOT)/LangCpp/lib/linuxoxfinst$(LIB_EXT) $(OMROOT)/LangCpp/lib/linuxomcomappl$(LIB_EXT) $(OMROOT)/LangCpp/lib/linuxoxsiminst$(LIB_EXT)
SOCK_LIB=

else
ifeq ($(INSTRUMENTATION),None)

INST_FLAGS=
INST_INCLUDES=
INST_LIBS=
OXF_LIBS=$(OMROOT)/LangCpp/lib/linuxoxf$(LIB_EXT) $(OMROOT)/LangCpp/lib/linuxoxsim$(LIB_EXT)
SOCK_LIB=

else
	@echo An invalid Instrumentation $(INSTRUMENTATION) is specified.
	exit
endif
endif
endif

.SUFFIXES: $(CPP_EXT)



#####################################################################
##################### Context dependencies and commands #############






LCD_Main.o : LCD_Main.cpp LCD_Main.h    Common.h SHM_Connection.h LCD.h ILCD.h 
	@echo Compiling LCD_Main.cpp
	$(CREATE_OBJ_DIR)
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o LCD_Main.o LCD_Main.cpp




Logger.o : Logger.cpp Logger.h    Common.h 
	@echo Compiling Logger.cpp
	$(CREATE_OBJ_DIR)
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o Logger.o Logger.cpp




SHM_Connection.o : SHM_Connection.cpp SHM_Connection.h    Common.h 
	@echo Compiling SHM_Connection.cpp
	$(CREATE_OBJ_DIR)
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o SHM_Connection.o SHM_Connection.cpp




ILCD.o : ILCD.cpp ILCD.h    Common.h 
	@echo Compiling ILCD.cpp
	$(CREATE_OBJ_DIR)
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o ILCD.o ILCD.cpp




Motor_Main.o : Motor_Main.cpp Motor_Main.h    Common.h SHM_Connection.h Logger.h IMotor.h Motor.h 
	@echo Compiling Motor_Main.cpp
	$(CREATE_OBJ_DIR)
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o Motor_Main.o Motor_Main.cpp




IMotor.o : IMotor.cpp IMotor.h    Common.h 
	@echo Compiling IMotor.cpp
	$(CREATE_OBJ_DIR)
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o IMotor.o IMotor.cpp




ISensor.o : ISensor.cpp ISensor.h    Common.h 
	@echo Compiling ISensor.cpp
	$(CREATE_OBJ_DIR)
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o ISensor.o ISensor.cpp




SensReader.o : SensReader.cpp SensReader.h    Common.h ISensor.h SHM_Connection.h Sensor.h 
	@echo Compiling SensReader.cpp
	$(CREATE_OBJ_DIR)
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o SensReader.o SensReader.cpp




Console.o : Console.cpp Console.h    Common.h SHM_Connection.h 
	@echo Compiling Console.cpp
	$(CREATE_OBJ_DIR)
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o Console.o Console.cpp




Observer.o : Observer.cpp Observer.h    Common.h SHM_Connection.h IObserver.h 
	@echo Compiling Observer.cpp
	$(CREATE_OBJ_DIR)
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o Observer.o Observer.cpp




IObserver.o : IObserver.cpp IObserver.h    Common.h 
	@echo Compiling IObserver.cpp
	$(CREATE_OBJ_DIR)
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o IObserver.o IObserver.cpp




RfidReader.o : RfidReader.cpp RfidReader.h    Common.h IObserver.h 
	@echo Compiling RfidReader.cpp
	$(CREATE_OBJ_DIR)
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o RfidReader.o RfidReader.cpp




Rfid_Main.o : Rfid_Main.cpp Rfid_Main.h    Common.h Observer.h RfidReader.h SHM_Connection.h 
	@echo Compiling Rfid_Main.cpp
	$(CREATE_OBJ_DIR)
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o Rfid_Main.o Rfid_Main.cpp




LCD.o : LCD.cpp LCD.h    Train.h Logger.h ILCD.h 
	@echo Compiling LCD.cpp
	$(CREATE_OBJ_DIR)
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o LCD.o LCD.cpp




Motor.o : Motor.cpp Motor.h    Train.h Altera.h Common.h IMotor.h 
	@echo Compiling Motor.cpp
	$(CREATE_OBJ_DIR)
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o Motor.o Motor.cpp




Altera.o : Altera.cpp Altera.h    Train.h 
	@echo Compiling Altera.cpp
	$(CREATE_OBJ_DIR)
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o Altera.o Altera.cpp




Sensor.o : Sensor.cpp Sensor.h    Train.h ISensor.h 
	@echo Compiling Sensor.cpp
	$(CREATE_OBJ_DIR)
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o Sensor.o Sensor.cpp




SM_Read.o : SM_Read.cpp SM_Read.h    Logger.h SHM_Connection.h 
	@echo Compiling SM_Read.cpp
	$(CREATE_OBJ_DIR)
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o SM_Read.o SM_Read.cpp




PiAlgorithm.o : PiAlgorithm.cpp PiAlgorithm.h    TrainPos.h Communication.h Order.h 
	@echo Compiling PiAlgorithm.cpp
	$(CREATE_OBJ_DIR)
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o PiAlgorithm.o PiAlgorithm.cpp




PiSpeakerThread.o : PiSpeakerThread.cpp PiSpeakerThread.h    ServerSocket.h 
	@echo Compiling PiSpeakerThread.cpp
	$(CREATE_OBJ_DIR)
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o PiSpeakerThread.o PiSpeakerThread.cpp




PiListenerThread.o : PiListenerThread.cpp PiListenerThread.h    TrainPos.h ClientSocket.h SocketException.h ServerSocket.h 
	@echo Compiling PiListenerThread.cpp
	$(CREATE_OBJ_DIR)
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o PiListenerThread.o PiListenerThread.cpp




TrainPos.o : TrainPos.cpp TrainPos.h    
	@echo Compiling TrainPos.cpp
	$(CREATE_OBJ_DIR)
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o TrainPos.o TrainPos.cpp




Order.o : Order.cpp Order.h    
	@echo Compiling Order.cpp
	$(CREATE_OBJ_DIR)
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o Order.o Order.cpp




Communication.o : Communication.cpp Communication.h    PiSpeakerThread.h PiListenerThread.h ServerSocket.h TrainPos.h 
	@echo Compiling Communication.cpp
	$(CREATE_OBJ_DIR)
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o Communication.o Communication.cpp




object_0.o : object_0.cpp object_0.h    Socket.h 
	@echo Compiling object_0.cpp
	$(CREATE_OBJ_DIR)
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o object_0.o object_0.cpp




Socket.o : Socket.cpp Socket.h    
	@echo Compiling Socket.cpp
	$(CREATE_OBJ_DIR)
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o Socket.o Socket.cpp




ClientSocket.o : ClientSocket.cpp ClientSocket.h    Socket.h 
	@echo Compiling ClientSocket.cpp
	$(CREATE_OBJ_DIR)
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o ClientSocket.o ClientSocket.cpp




ServerSocket.o : ServerSocket.cpp ServerSocket.h    Socket.h 
	@echo Compiling ServerSocket.cpp
	$(CREATE_OBJ_DIR)
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o ServerSocket.o ServerSocket.cpp




SocketException.o : SocketException.cpp SocketException.h    Socket.h 
	@echo Compiling SocketException.cpp
	$(CREATE_OBJ_DIR)
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o SocketException.o SocketException.cpp




startUpClass.o : startUpClass.cpp startUpClass.h    Socket.h PiAlgorithm.h TrainListenerThread.h TrainThread.h 
	@echo Compiling startUpClass.cpp
	$(CREATE_OBJ_DIR)
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o startUpClass.o startUpClass.cpp




TrainListenerThread.o : TrainListenerThread.cpp TrainListenerThread.h    TrainCommunicationPackage.h ClientSocket.h SocketException.h 
	@echo Compiling TrainListenerThread.cpp
	$(CREATE_OBJ_DIR)
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o TrainListenerThread.o TrainListenerThread.cpp




TrainThread.o : TrainThread.cpp TrainThread.h    TrainCommunicationPackage.h TrainCommunication.h ClientSocket.h 
	@echo Compiling TrainThread.cpp
	$(CREATE_OBJ_DIR)
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o TrainThread.o TrainThread.cpp




TrainSpeakerThread.o : TrainSpeakerThread.cpp TrainSpeakerThread.h    TrainCommunicationPackage.h ServerSocket.h ClientSocket.h 
	@echo Compiling TrainSpeakerThread.cpp
	$(CREATE_OBJ_DIR)
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o TrainSpeakerThread.o TrainSpeakerThread.cpp




TrainCommunication.o : TrainCommunication.cpp TrainCommunication.h    TrainCommunicationPackage.h TrainSpeakerThread.h TrainListenerThread.h ClientSocket.h 
	@echo Compiling TrainCommunication.cpp
	$(CREATE_OBJ_DIR)
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o TrainCommunication.o TrainCommunication.cpp




TrainTestThread.o : TrainTestThread.cpp TrainTestThread.h    TrainTestCommunication.h TrainTestOrder.h 
	@echo Compiling TrainTestThread.cpp
	$(CREATE_OBJ_DIR)
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o TrainTestThread.o TrainTestThread.cpp




TrainTestCommunication.o : TrainTestCommunication.cpp TrainTestCommunication.h    TrainTestListenerThread.h TrainTestSpeakerThread.h ClientSocket.h TrainTestOrder.h 
	@echo Compiling TrainTestCommunication.cpp
	$(CREATE_OBJ_DIR)
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o TrainTestCommunication.o TrainTestCommunication.cpp




TrainTestListenerThread.o : TrainTestListenerThread.cpp TrainTestListenerThread.h    TrainTestOrder.h ClientSocket.h SocketException.h 
	@echo Compiling TrainTestListenerThread.cpp
	$(CREATE_OBJ_DIR)
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o TrainTestListenerThread.o TrainTestListenerThread.cpp




TrainTestSpeakerThread.o : TrainTestSpeakerThread.cpp TrainTestSpeakerThread.h    ServerSocket.h ClientSocket.h 
	@echo Compiling TrainTestSpeakerThread.cpp
	$(CREATE_OBJ_DIR)
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o TrainTestSpeakerThread.o TrainTestSpeakerThread.cpp




TrainTestOrder.o : TrainTestOrder.cpp TrainTestOrder.h    
	@echo Compiling TrainTestOrder.cpp
	$(CREATE_OBJ_DIR)
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o TrainTestOrder.o TrainTestOrder.cpp




TrainTestFailureThread.o : TrainTestFailureThread.cpp TrainTestFailureThread.h    TrainTestCommunication.h TrainTestOrder.h 
	@echo Compiling TrainTestFailureThread.cpp
	$(CREATE_OBJ_DIR)
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o TrainTestFailureThread.o TrainTestFailureThread.cpp




Common.o : Common.cpp Common.h    LCD_Main.h Logger.h SHM_Connection.h ILCD.h Motor_Main.h IMotor.h ISensor.h SensReader.h Console.h Observer.h IObserver.h RfidReader.h Rfid_Main.h 
	@echo Compiling Common.cpp
	$(CREATE_OBJ_DIR)
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o Common.o Common.cpp




Train.o : Train.cpp Train.h    LCD.h Motor.h Altera.h Sensor.h 
	@echo Compiling Train.cpp
	$(CREATE_OBJ_DIR)
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o Train.o Train.cpp




TrainCommunicationPackage.o : TrainCommunicationPackage.cpp TrainCommunicationPackage.h    TrainListenerThread.h TrainThread.h TrainSpeakerThread.h TrainCommunication.h 
	@echo Compiling TrainCommunicationPackage.cpp
	$(CREATE_OBJ_DIR)
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o TrainCommunicationPackage.o TrainCommunicationPackage.cpp







$(TARGET_MAIN)$(OBJ_EXT) : $(TARGET_MAIN)$(CPP_EXT) $(OBJS) 
		@$(CC) $(ConfigurationCPPCompileSwitches) -o  $(TARGET_MAIN)$(OBJ_EXT) $(TARGET_MAIN)$(CPP_EXT)

####################################################################################
#                    Predefined linking instructions                               #
# INST_LIBS is included twice to solve bi-directional dependency between libraries #
####################################################################################
$(TARGET_NAME)$(EXE_EXT): $(OBJS) $(ADDITIONAL_OBJS) $(TARGET_MAIN)$(OBJ_EXT) Algorithm_Socket.mak 
	@echo Linking $(TARGET_NAME)$(EXE_EXT)
	@$(LINK_CMD)  $(TARGET_MAIN)$(OBJ_EXT) $(OBJS) $(ADDITIONAL_OBJS) \
	$(LIBS) \
	$(INST_LIBS) \
	$(OXF_LIBS) \
	$(INST_LIBS) \
	$(SOCK_LIB) \
	$(LINK_FLAGS) -o $(TARGET_NAME)$(EXE_EXT)

$(TARGET_NAME)$(LIB_EXT) : $(OBJS) $(ADDITIONAL_OBJS) Algorithm_Socket.mak
	@echo Building library $@
	@$(LIB_CMD) $(LIB_FLAGS) $(TARGET_NAME)$(LIB_EXT) $(OBJS) $(ADDITIONAL_OBJS) $(LIBS)



clean:
	@echo Cleanup
	$(RM) LCD_Main.o
	$(RM) Logger.o
	$(RM) SHM_Connection.o
	$(RM) ILCD.o
	$(RM) Motor_Main.o
	$(RM) IMotor.o
	$(RM) ISensor.o
	$(RM) SensReader.o
	$(RM) Console.o
	$(RM) Observer.o
	$(RM) IObserver.o
	$(RM) RfidReader.o
	$(RM) Rfid_Main.o
	$(RM) LCD.o
	$(RM) Motor.o
	$(RM) Altera.o
	$(RM) Sensor.o
	$(RM) SM_Read.o
	$(RM) PiAlgorithm.o
	$(RM) PiSpeakerThread.o
	$(RM) PiListenerThread.o
	$(RM) TrainPos.o
	$(RM) Order.o
	$(RM) Communication.o
	$(RM) object_0.o
	$(RM) Socket.o
	$(RM) ClientSocket.o
	$(RM) ServerSocket.o
	$(RM) SocketException.o
	$(RM) startUpClass.o
	$(RM) TrainListenerThread.o
	$(RM) TrainThread.o
	$(RM) TrainSpeakerThread.o
	$(RM) TrainCommunication.o
	$(RM) TrainTestThread.o
	$(RM) TrainTestCommunication.o
	$(RM) TrainTestListenerThread.o
	$(RM) TrainTestSpeakerThread.o
	$(RM) TrainTestOrder.o
	$(RM) TrainTestFailureThread.o
	$(RM) Common.o
	$(RM) Train.o
	$(RM) TrainCommunicationPackage.o
	$(RM) $(TARGET_MAIN)$(OBJ_EXT) $(ADDITIONAL_OBJS)
	$(RM) $(TARGET_NAME)$(LIB_EXT)
	$(RM) $(TARGET_NAME)$(EXE_EXT)
	$(CLEAN_OBJ_DIR)
