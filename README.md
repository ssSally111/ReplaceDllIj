# 通过替换DLL文件实现注入

> 环境: Win11



原：程序 **ReplaceDemo.exe** ===根据名称加载===> **original.dll**(original.dll文件)

替换后：程序 **ReplaceDemo.exe** ===根据名称加载===> **original.dll**(originalReplace.dll) ===加载===> **original1.dll**(original.dll)

## 如何操作

1.将 original.dll 文件重命名为original1.dll

2.将 originalReplace.dll 文件重命名为original.dll 实现代理

3.运行 ReplaceDemo.exe 查看 debug 信息，originalReplace.dll 加载成功