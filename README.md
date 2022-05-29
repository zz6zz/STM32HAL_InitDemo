# STM32HAL_InitDemo

不包含具体应用，只是模块（如ADC、Timer）的初始化配置、调用。STM32 HAL库。

*在开始一个应用工程时，不会有人愿意在初始化配置时消耗掉大量时间，能直接处理应用逻辑是最好的。*

## 上传

#### 工程命名格式

`module1_module2_..._BOARDname-MCUname_IDEname`

如：`ADC_TIMER_NUCLEO-F401RE_MDK-ARM`

## 使用
1.clone源代码

`git clone https://github.com/zz6zz/STM32HAL_InitDemo.git`

2.(Optional)选择历史版本

有些工程不仅仅有一种配置，如使用中断、不使用中断。切换并查看不同版本。

```sh
#查看历史版本
git log
#选择需要的版本，并checkout
git checkout xxxxxxxxx
```

3.(Optional)编译调试

用keil（或其他IDE）编译调试

*Or any other IDE you like.I think U can DoItYourself.Haha.*


4.(Optional)初始化自己的工程

参照cubeMX配置初始化自己的工程