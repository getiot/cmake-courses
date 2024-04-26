#!/bin/bash

# 递归删除函数
delete_build_directories() {
    # 遍历当前目录下的所有文件和目录
    for item in "$1"/*; do
        # 如果是目录
        if [ -d "$item" ]; then
            # 如果目录名为 build，则删除之
            if [ "${item##*/}" == "build" ]; then
                echo "Deleting directory: $item"
                rm -rf "$item"
            else
                # 递归调用函数，继续删除子目录中的 build 目录
                delete_build_directories "$item"
            fi
        fi
    done
}

# 调用函数，从当前目录开始递归删除 build 目录
delete_build_directories .

echo "All build directories have been deleted."
