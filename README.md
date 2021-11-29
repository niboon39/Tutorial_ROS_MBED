# tutorial_mbed_ros
1. -> Change  : platformio.ini 
2.              '''
                platform = ststm32 
                board = nucleo_f411re
                framework = mbed 
                debug_tool = stlink 
                upload_protocol = stlink 
                build_flags = -ggdb -g3  
                platform_packages = framework-mbed @ ~6.51504.0 
                '''

2. -> Install Library : lib_deps = mbed-garyservin/ros_lib_melodic@0.0.0+sha.da82487f547e


******* ENJOY *******
