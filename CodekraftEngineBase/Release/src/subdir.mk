################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/GameApp.cpp \
../src/MCore.cpp \
../src/MEditor.cpp \
../src/MPlayer.cpp \
../src/MStartup.cpp \
../src/Module.cpp 

OBJS += \
./src/GameApp.o \
./src/MCore.o \
./src/MEditor.o \
./src/MPlayer.o \
./src/MStartup.o \
./src/Module.o 

CPP_DEPS += \
./src/GameApp.d \
./src/MCore.d \
./src/MEditor.d \
./src/MPlayer.d \
./src/MStartup.d \
./src/Module.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -std=c++1y -I"/home/chrx/eclipse-workspace/CodekraftEngineBase/include" -I/usr/local/GLFW/include -I"/home/chrx/eclipse-workspace/RenderingModule/include" -O3 -Wall -c -fmessage-length=0 -fPIC -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


