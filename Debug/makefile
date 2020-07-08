################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include Drivers/STM32L4xx_HAL_Driver/Src/subdir.mk
-include Core/Startup/subdir.mk
-include Core/Src/App/subdir.mk
-include Core/Src/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
EXECUTABLES += \
EtherCATMotor.elf \

SIZE_OUTPUT += \
default.size.stdout \

OBJDUMP_LIST += \
EtherCATMotor.list \


# All Target
all: EtherCATMotor.elf secondary-outputs

# Tool invocations
EtherCATMotor.elf: $(OBJS) $(USER_OBJS) D:\Du\ lieu\Lap\ trinh\STM32\TEST1\EtherCATMotor\STM32L4R5ZITX_FLASH.ld
	arm-none-eabi-gcc -o "EtherCATMotor.elf" @"objects.list" $(USER_OBJS) $(LIBS) -mcpu=cortex-m4 -T"D:\Du lieu\Lap trinh\STM32\TEST1\EtherCATMotor\STM32L4R5ZITX_FLASH.ld" --specs=nosys.specs -Wl,-Map="EtherCATMotor.map" -Wl,--gc-sections -static --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -Wl,--start-group -lc -lm -Wl,--end-group
	@echo 'Finished building target: $@'
	@echo ' '

default.size.stdout: $(EXECUTABLES)
	arm-none-eabi-size  $(EXECUTABLES)
	@echo 'Finished building: $@'
	@echo ' '

EtherCATMotor.list: $(EXECUTABLES)
	arm-none-eabi-objdump -h -S $(EXECUTABLES) > "EtherCATMotor.list"
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) *
	-@echo ' '

secondary-outputs: $(SIZE_OUTPUT) $(OBJDUMP_LIST)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
