# 智能家居设备控制模拟系统

面向对象程序设计课程的连续上机项目，使用 C++17 开发，同时支持 VS Code 和 Code::Blocks。

## 当前进度

Lab01 已实现智能设备基本类和控制台菜单。最新工作状态与后续任务见 [PROJECT_STATUS.md](PROJECT_STATUS.md)，每阶段变更见 [CHANGELOG.md](CHANGELOG.md)。Codex 和 DeepSeek Harness 的协作约定见 [AGENTS.md](AGENTS.md)。

课程要求见 [OOP上机作业2026.pdf](OOP上机作业2026.pdf)。

## 使用 VS Code

1. 使用 VS Code 打开本仓库文件夹。
2. 安装 Microsoft C/C++ 扩展。
3. 按 `Ctrl+Shift+B` 构建项目。
4. 按 `F5` 启动调试。

编译结果位于 `bin/Debug/SmartHomeLab01.exe`。

当前源码沿用 Code::Blocks 创建时的 GBK 编码。仓库中的 VS Code 工作区设置会自动按 GBK 打开源码，并在资源管理器中只显示 `main.cpp`、`Device.cpp` 和 `Device.h`；其他报告和测试材料仍保留在仓库中。

## 使用 Code::Blocks

1. 使用 Code::Blocks 打开 `SmartHomeLab01.cbp`。
2. 选择 Debug 或 Release 目标。
3. 点击 Build and Run，或按 `F9`。

开始新一轮开发前，先检查 `git status`，再阅读 `PROJECT_STATUS.md`。
