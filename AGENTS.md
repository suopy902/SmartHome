# 项目协作约定

本仓库是面向对象程序设计课程的智能家居设备控制模拟系统。Codex 和 DeepSeek Harness 都应以本目录作为工作目录。

开始任何新任务时，先读 `PROJECT_STATUS.md`、`README.md`、`CHANGELOG.md`，再检查 `git status` 和最近提交。以实际文件和 Git 状态为准；进度文档若与代码不一致，先核实并修正记录。

每次完成一项实验或功能后：

1. 运行相关编译与测试，记录实际结果，不把旧测试记录当成新验证。
2. 更新 `PROJECT_STATUS.md` 的已完成、进行中、下一步和验证情况；在 `CHANGELOG.md` 追加本次变更。
3. 只提交本次相关的源文件、文档和必要的测试材料。提交前检查 `git diff` 和 `git status`，保留其他工具或用户尚未完成的改动。

使用 C++17 与 Code::Blocks 工程 `SmartHomeLab01.cbp`。不要提交 `bin/`、`obj/`、`tmp/`、可执行文件或中间文件。课程要求以仓库内 `OOP上机作业2026.pdf` 为准。

不要把 Codex 或 DSH 的聊天历史视作唯一进度记录。遇到两边同时修改时，先检查文件差异并协调冲突，再继续工作。
