# STM32HAL_InitDemo
不包含具体应用，只是模块（如ADC、Timer）的初始化配置、调用。STM32 HAL库。

*在开始一个应用工程时，不会有人愿意在初始化配置时消耗掉大量时间，能直接处理应用逻辑是最好的。*

工程命名方式
`module1_module2_..._BOARDname-MCUname_IDEname`
如: `ADC_TIMER_NUCLEO-F401RE_MDK-ARM`