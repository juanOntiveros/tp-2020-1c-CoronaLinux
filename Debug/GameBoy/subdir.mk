################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../GameBoy/gameboy.c \
../GameBoy/utils.c 

O_SRCS += \
../GameBoy/gameboy.o \
../GameBoy/utils.o 

OBJS += \
./GameBoy/gameboy.o \
./GameBoy/utils.o 

C_DEPS += \
./GameBoy/gameboy.d \
./GameBoy/utils.d 


# Each subdirectory must supply rules for building sources it contributes
GameBoy/%.o: ../GameBoy/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

