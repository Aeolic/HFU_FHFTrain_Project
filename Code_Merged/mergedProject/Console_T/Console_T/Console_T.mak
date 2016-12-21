
############################################################
############# Target type (Debug/Release) $FHFTrain ######
############################################################
CPPCompileDebug=-g
CPPCompileRelease=-O
LinkDebug=-g
LinkRelease=-O

ConfigurationCPPCompileSwitches=   -I. -I. -I$(OMROOT) -I$(OMROOT)/LangCpp -I$(OMROOT)/LangCpp/oxf $(INST_FLAGS) $(INCLUDE_PATH) $(INST_INCLUDES) -DUSE_IOSTREAM $(CPPCompileDebug)  -c   

#########################################
###### Predefined macros ################
RM=/bin/rm -rf
MD=/bin/mkdir -p
INCLUDE_QUALIFIER=-I
CROSS=/opt/cross/fhftrain_lok/usr/bin/i586-linux-
CC=$(CROSS)gcc -DUSE_IOSTREAM
LIB_CMD=$(CROSS)ar
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

TARGET_NAME=Console_T

all : $(TARGET_NAME)$(EXE_EXT) Console_T.mak

TARGET_MAIN=MainConsole_T

LIBS= \
  -lm \
  -lm

INCLUDE_PATH= \
  $(INCLUDE_QUALIFIER)$(OMROOT)/LangCpp/osconfig/FHFTrain

ADDITIONAL_OBJS=

OBJS= \
  LCD_Main.o \
  Logger.o \
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
  SHM_Connection.o \
  LCD.o \
  Motor.o \
  Altera.o \
  Sensor.o \
  Common.o \
  Train.o




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
INST_LIBS= $(OMROOT)/LangCpp/lib/FHFTrainaomanim$(LIB_EXT)
OXF_LIBS=$(OMROOT)/LangCpp/lib/FHFTrainoxfinst$(LIB_EXT) $(OMROOT)/LangCpp/lib/FHFTrainomcomappl$(LIB_EXT)
SOCK_LIB=

else
ifeq ($(INSTRUMENTATION),Tracing)

INST_FLAGS=-DOMTRACER
INST_INCLUDES=-I$(OMROOT)/LangCpp/aom -I$(OMROOT)/LangCpp/tom
INST_LIBS=$(OMROOT)/LangCpp/lib/FHFTraintomtrace$(LIB_EXT) $(OMROOT)/LangCpp/lib/FHFTrainaomtrace$(LIB_EXT)
OXF_LIBS= $(OMROOT)/LangCpp/lib/FHFTrainoxfinst$(LIB_EXT) $(OMROOT)/LangCpp/lib/FHFTrainomcomappl$(LIB_EXT)
SOCK_LIB=

else
ifeq ($(INSTRUMENTATION),None)

INST_FLAGS=
INST_INCLUDES=
INST_LIBS=
OXF_LIBS=$(OMROOT)/LangCpp/lib/FHFTrainoxf$(LIB_EXT)
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




ILCD.o : ILCD.cpp ILCD.h    Common.h 
	@echo Compiling ILCD.cpp
	$(CREATE_OBJ_DIR)
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o ILCD.o ILCD.cpp




Motor_Main.o : Motor_Main.cpp Motor_Main.h    Common.h SHM_Connection.h Logger.h IMotor.h 
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




SHM_Connection.o : SHM_Connection.cpp SHM_Connection.h    Common.h 
	@echo Compiling SHM_Connection.cpp
	$(CREATE_OBJ_DIR)
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o SHM_Connection.o SHM_Connection.cpp




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




Common.o : Common.cpp Common.h    LCD_Main.h Logger.h ILCD.h Motor_Main.h IMotor.h ISensor.h SensReader.h Console.h Observer.h IObserver.h RfidReader.h Rfid_Main.h SHM_Connection.h 
	@echo Compiling Common.cpp
	$(CREATE_OBJ_DIR)
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o Common.o Common.cpp




Train.o : Train.cpp Train.h    LCD.h Motor.h Altera.h Sensor.h 
	@echo Compiling Train.cpp
	$(CREATE_OBJ_DIR)
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o Train.o Train.cpp







$(TARGET_MAIN)$(OBJ_EXT) : $(TARGET_MAIN)$(CPP_EXT) $(OBJS) 
		@$(CC) $(ConfigurationCPPCompileSwitches) -o  $(TARGET_MAIN)$(OBJ_EXT) $(TARGET_MAIN)$(CPP_EXT)

####################################################################################
#                    Predefined linking instructions                               #
# INST_LIBS is included twice to solve bi-directional dependency between libraries #
####################################################################################
$(TARGET_NAME)$(EXE_EXT): $(OBJS) $(ADDITIONAL_OBJS) $(TARGET_MAIN)$(OBJ_EXT) Console_T.mak 
	@echo Linking $(TARGET_NAME)$(EXE_EXT)
	@$(LINK_CMD)  $(TARGET_MAIN)$(OBJ_EXT) $(OBJS) $(ADDITIONAL_OBJS) \
	$(LIBS) \
	$(INST_LIBS) \
	$(OXF_LIBS) \
	$(INST_LIBS) \
	$(SOCK_LIB) \
	$(LINK_FLAGS) -o $(TARGET_NAME)$(EXE_EXT)

$(TARGET_NAME)$(LIB_EXT) : $(OBJS) $(ADDITIONAL_OBJS) Console_T.mak
	@echo Building library $@
	@$(LIB_CMD) $(LIB_FLAGS) $(TARGET_NAME)$(LIB_EXT) $(OBJS) $(ADDITIONAL_OBJS) $(LIBS)



clean:
	@echo Cleanup
	$(RM) LCD_Main.o
	$(RM) Logger.o
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
	$(RM) SHM_Connection.o
	$(RM) LCD.o
	$(RM) Motor.o
	$(RM) Altera.o
	$(RM) Sensor.o
	$(RM) Common.o
	$(RM) Train.o
	$(RM) $(TARGET_MAIN)$(OBJ_EXT) $(ADDITIONAL_OBJS)
	$(RM) $(TARGET_NAME)$(LIB_EXT)
	$(RM) $(TARGET_NAME)$(EXE_EXT)
	$(CLEAN_OBJ_DIR)
