I-Logix-RPY-Archive version 8.12.0 C++ 9728113
{ IProject 
	- _id = GUID c5285cb0-ab39-11e6-89be-001999f109b4;
	- _myState = 8192;
	- _name = "UnserProject";
	- _modifiedTimeWeak = 12.21.2016::10:27:9;
	- _lastID = 3;
	- _UserColors = { IRPYRawContainer 
		- size = 16;
		- value = 16777215; 16777215; 16777215; 16777215; 16777215; 16777215; 16777215; 16777215; 16777215; 16777215; 16777215; 16777215; 16777215; 16777215; 16777215; 16777215; 
	}
	- _defaultSubsystem = { ISubsystemHandle 
		- _m2Class = "ISubsystem";
		- _filename = "Socket.sbs";
		- _subsystem = "";
		- _class = "";
		- _name = "Socket";
		- _id = GUID c5285cb1-ab39-11e6-89be-001999f109b4;
	}
	- _component = { IHandle 
		- _m2Class = "IComponent";
		- _filename = "Algorithm_Socket.cmp";
		- _subsystem = "";
		- _class = "";
		- _name = "Algorithm_Socket";
		- _id = GUID c5285cb7-ab39-11e6-89be-001999f109b4;
	}
	- Multiplicities = { IRPYRawContainer 
		- size = 4;
		- value = 
		{ IMultiplicityItem 
			- _name = "1";
			- _count = -1;
		}
		{ IMultiplicityItem 
			- _name = "*";
			- _count = -1;
		}
		{ IMultiplicityItem 
			- _name = "0,1";
			- _count = -1;
		}
		{ IMultiplicityItem 
			- _name = "1..*";
			- _count = -1;
		}
	}
	- Subsystems = { IRPYRawContainer 
		- size = 8;
		- value = 
		{ ISubsystem 
			- fileName = "Socket";
			- _id = GUID c5285cb1-ab39-11e6-89be-001999f109b4;
		}
		{ ISubsystem 
			- fileName = "TrainCommunication";
			- _id = GUID c5285cd0-ab39-11e6-89be-001999f109b4;
		}
		{ ISubsystem 
			- fileName = "Pi";
			- _id = GUID c5285cd6-ab39-11e6-89be-001999f109b4;
		}
		{ ISubsystem 
			- fileName = "TrainTest";
			- _id = GUID 29eae1fc-bc85-11e6-aa7e-10604b8125e9;
		}
		{ IProfile 
			- fileName = "CGCompatibilityPre812Cpp";
			- _id = GUID 3026d3ea-02b4-49ae-b086-6982c27412f0;
		}
		{ IProfile 
			- fileName = "CGCompatibilityPre813Cpp";
			- _id = GUID 803c9619-7509-44c3-bfdf-6fee2352ab55;
		}
		{ IProfile 
			- fileName = "CGCompatibilityPre814Cpp";
			- _id = GUID cffbed2a-cf85-4cf9-9c94-13d34d25c47b;
		}
		{ IProfile 
			- fileName = "CGCompatibilityPre815Cpp";
			- _id = GUID 9d010694-7844-4cae-a420-3b25ad4f4244;
		}
	}
	- Diagrams = { IRPYRawContainer 
		- size = 1;
		- value = 
		{ IDiagram 
			- fileName = "FHFTrainModel";
			- _id = GUID c5285cbd-ab39-11e6-89be-001999f109b4;
		}
	}
	- Components = { IRPYRawContainer 
		- size = 1;
		- value = 
		{ IComponent 
			- fileName = "Algorithm_Socket";
			- _id = GUID c5285cb7-ab39-11e6-89be-001999f109b4;
		}
	}
}

