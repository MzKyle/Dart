from openvino.runtime import Core
core = Core()
print("可用设备:", core.available_devices)

# 预期输出应包含 GPU（若有 Intel 核显）
# 若仅显示 CPU，则 GPU 设备未识别
