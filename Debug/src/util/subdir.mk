################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/util/Rectangle.cpp \
../src/util/Shape.cpp \
../src/util/Square.cpp \
../src/util/Triangle.cpp 

OBJS += \
./src/util/Rectangle.o \
./src/util/Shape.o \
./src/util/Square.o \
./src/util/Triangle.o 

CPP_DEPS += \
./src/util/Rectangle.d \
./src/util/Shape.d \
./src/util/Square.d \
./src/util/Triangle.d 


# Each subdirectory must supply rules for building sources it contributes
src/util/%.o: ../src/util/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


