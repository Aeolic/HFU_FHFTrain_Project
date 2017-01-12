# ELEMENTS is a space separated list of component/configurations pairs
ELEMENTS = Algorithm_Socket/Algorithm_Socket \
	LCD_T/LCD_T  \
	Console_T/Console_T\
	Motor_T/Motor_T \
	SM_Read_T/SM_Read_T \
	SensRead_T/SensRead_T \
	RFID_T/RFID_T

include ../../../path.inc
include ../../../helperMakefiles/Makefile.config

.PHONY: $(ELEMENTS) $(addprefix clean_,$(ELEMENTS))

all: $(ELEMENTS)
	echo build all is: $^


cleanTGT = $(addprefix clean_,$(ELEMENTS))
$(info $(cleanTGT))

clean: $(addprefix clean_,$(ELEMENTS))

#----------------------
# define rule to generate a rhapsody component
define BUILD_COMPONENT

$1: 
	echo "build component " $(firstword $(subst /, ,$1))
	(cd $1;							\
	 make -f $(firstword $(subst /, ,$1)).mak CC=$(CXX) CXX=$(CXX); 		\
	 cp $(firstword $(subst /, ,$1)) $(APPDEFAULTDIR);	\
	)

clean_$1: 
	echo "clean component "$(firstword $(subst /, ,$1))
	(cd $1; make -f $(firstword $(subst /, ,$1)).mak clean)

endef

$(info $(ELEMENTS))

#$(foreach c,$(ELEMENTS),$(info $(c)))

$(foreach c,$(ELEMENTS),$(eval $(call BUILD_COMPONENT,$(c))))

