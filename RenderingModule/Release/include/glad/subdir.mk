################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../include/glad/glad.c 

OBJS += \
./include/glad/glad.o 

C_DEPS += \
./include/glad/glad.d 


# Each subdirectory must supply rules for building sources it contributes
include/glad/glad.o: ../include/glad/glad.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O3 -Wall -c -fmessage-length=0 -fPIC -MMD -MP -MF"$(@:%.o=%.d)" -MT"include/glad/glad.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


