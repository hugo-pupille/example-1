PROJECT_NAME := myTest
ALL_SOURCES += $(shell find . -name '*.cpp')
ALL_OBJS := $(ALL_SOURCES:.cpp=.o)
CXX := g++
CXX_FLAGS :=
LINKER := g++
LINKER_FLAGS :=
ALL_HEADERS := $(shell find . -name '*.hpp')
HEADER_DIR := $(sort $(dir $(ALL_HEADERS)))
OBJDIR := obj

CXX_FLAGS += -Wall -Wextra -Werror
CXX_FLAGS += $(foreach var, $(HEADER_DIR),-I $(var))

all : exe

exe : $(PROJECT_NAME)

$(PROJECT_NAME) : $(ALL_OBJS)
	$(LINKER) $(LINKER_FLAGS) $(ALL_OBJS) -o $(PROJECT_NAME)

%.o : %.cpp
	$(CXX) $(CXX_FLAGS) -c $< -o $@
clean :
	rm $(PROJECT_NAME)
	rm $(ALL_OBJS)
