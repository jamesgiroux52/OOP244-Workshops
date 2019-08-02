################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Account.cpp \
../src/Allocator.cpp \
../src/SavingsAccount.cpp \
../src/w8_in_lab.cpp 

OBJS += \
./src/Account.o \
./src/Allocator.o \
./src/SavingsAccount.o \
./src/w8_in_lab.o 

CPP_DEPS += \
./src/Account.d \
./src/Allocator.d \
./src/SavingsAccount.d \
./src/w8_in_lab.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


