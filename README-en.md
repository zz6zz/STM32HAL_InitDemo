# STM32HAL_InitDemo
NOT about APP.Only STM32 modules Init and Configs.Base on STM32 HAL.

*When get satrted at a new Application, DEBUG for init and Config makes me CRASH.I prefer to handle APP code.*

## Push

project name format

`module1_module2_..._BOARDname-MCUname_IDEname`

such as:
`ADC_TIMER_NUCLEO-F401RE_MDK-ARM`

## Usage

1.clone repository

`git clone https://github.com/zz6zz/STM32HAL_InitDemo.git`

2.(Optional)checkout 

```sh
#check history
git log
#select the Version U need, then just checkout it
git checkout xxxxxxxxx
```

3.(Optional)complie and debug

use Keil complie and debug.

*Or any other IDE you like.I think U can DoItYourself.Haha.*

4.(Optional)make own project

Refer to cubeMX's .ioc file, create your own configs.