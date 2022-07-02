C:\VulkanSDK\1.3.204.1\Bin\glslc.exe --target-env=vulkan1.2 raytrace2.rchit -o raytrace2.rchit.spv
C:\VulkanSDK\1.3.204.1\Bin\glslc.exe --target-env=vulkan1.2 raytrace.rchit -o raytrace.rchit.spv
C:\VulkanSDK\1.3.204.1\Bin\glslc.exe --target-env=vulkan1.2 raytrace_0.rahit -o raytrace_0.rahit.spv
C:\VulkanSDK\1.3.204.1\Bin\glslc.exe --target-env=vulkan1.2 raytrace.rahit -o raytrace.rahit.spv
C:\VulkanSDK\1.3.204.1\Bin\glslc.exe --target-env=vulkan1.2 raytrace.rint -o raytrace.rint.spv
C:\VulkanSDK\1.3.204.1\Bin\glslc.exe --target-env=vulkan1.2 raytrace.rmiss -o raytrace.rmiss.spv
C:\VulkanSDK\1.3.204.1\Bin\glslc.exe --target-env=vulkan1.2 raytraceShadow.rmiss -o raytraceShadow.rmiss.spv
C:\VulkanSDK\1.3.204.1\Bin\glslc.exe --target-env=vulkan1.2 raytrace.rgen -o raytrace.rgen.spv
MOVE raytrace2.rchit.spv ..\spv
MOVE raytrace.rchit.spv ..\spv
MOVE raytrace_0.rahit.spv ..\spv
MOVE raytrace.rahit.spv ..\spv
MOVE raytrace.rint.spv ..\spv
MOVE raytrace.rmiss.spv ..\spv
MOVE raytraceShadow.rmiss.spv ..\spv
MOVE raytrace.rgen.spv ..\spv