################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/TestGameApp.cpp \
../src/main.cpp 

OBJS += \
./src/TestGameApp.o \
./src/main.o 

CPP_DEPS += \
./src/TestGameApp.d \
./src/main.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -std=c++0x -I"/home/chrx/eclipse-workspace/CodekraftEngine/src" -I"/home/chrx/eclipse-workspace/CodekraftEngineBase/include" -I"/home/chrx/eclipse-workspace/RenderingModule/include" -I"/home/chrx/eclipse-workspace/LoggerModule/include" -O3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


