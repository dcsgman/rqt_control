运行：
打开rqt_control.sh，在密码处设置自己密码
设备连接完毕后，直接运行rqt_control.sh即可

环境：
$ cd ~
$ sudo gedit .bashrc
加入 source ~/catkin_ws/devel/setup.bash 
     source /opt/ros/indigo/setup.bash 
这两句


将.ui转.h：
在.ui目录下运行 uic *.ui -o ui_*.h

编译时：先把其他基本的编译完后，在把rqt_control拷进去，在编译

Qt配置：
$ cd /usr/share/applications
$ sudo gedit qtcreator.desktop

改Exec=bash -i -c qtcreator %F

把/opt/ros/indigo/share/catkin/cmake下的toplevel.cmake
复制到catkin_ws/src下，改名为CMakelist.txt,并删除原CMakelist.txt

并在CMakelist.txt最后添加：
file(GLOB_RECURSE EXTRA_FILES */*)
add_custom_target(${PROJECT_NAME}_OTHER_FILES ALL WORKING_DIRECTORY ${PROJECT_SOURCE_DIR} SOURCES ${EXTRA_FILES})

<<<<<<< Updated upstream
注意：QTextBrowser的setText与append方法不能混用
编译时多source devel/setup.bash
CMakelist.txt文件一定要配好

=======
注意：QTextBrowser的setText与append方法不能混用 编译时多source devel/setup.bash CMakelist.txt文件一定要配好
>>>>>>> Stashed changes

# rqt_control
