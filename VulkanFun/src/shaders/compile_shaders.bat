@ECHO OFF

:: Obviously requires windows. I am not gonna write a bash script, or for any other shell
:: on Linux distos it is likely wherever you have the VulkanSDK and omit .exe

C:/VulkanSDK/1.3.236.0/Bin/glslc.exe shader.vert -o vert.spv
C:/VulkanSDK/1.3.236.0/Bin/glslc.exe shader.frag -o frag.spv

echo Shaders Compiled
pause