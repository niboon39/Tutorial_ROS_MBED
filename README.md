# tutorial_mbed_ros
1. -> Change  : platformio.ini \n
                platform = ststm32 \n
                board = nucleo_f411re\n
                framework = mbed \n
                debug_tool = stlink \n
                upload_protocol = stlink \n
                build_flags = -ggdb -g3 \n 
                platform_packages = framework-mbed @ ~6.51504.0 \n

2. -> Install Library : lib_deps = mbed-garyservin/ros_lib_melodic@0.0.0+sha.da82487f547e


******* ENJOY *******
