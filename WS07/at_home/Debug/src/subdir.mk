################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Hero.cpp \
../src/SuperHero.cpp \
../src/w7_at_home.cpp 

OBJS += \
./src/Hero.o \
./src/SuperHero.o \
./src/w7_at_home.o 

CPP_DEPS += \
./src/Hero.d \
./src/SuperHero.d \
./src/w7_at_home.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


