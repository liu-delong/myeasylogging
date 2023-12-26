这个仓库提供了我的easylogging配置。方便以后直接使用。还包含了示例程序演示如何使用。
把easylogging++.h和easylogging++.o和log.conf加入到工程中。
首先是在某一个cpp文件中 include"easylogging++.h"头文件之后写上
INITIALIZE_EASYLOGGINGPP
(见main.cpp)
然后在程序执行的靠前位置（main函数的靠前位置）写上
load_log_conf
(见main.cpp)
如果要输出线程信息，则要在编译命令中加上 -DELPP_THREAD_SAFE
(见 makefile 的目标 all)

