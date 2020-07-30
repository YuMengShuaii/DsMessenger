//
// Created by 于孟帅 on 2020/6/26.
//

#ifndef P2P_SDK_LOGGER_H
#define P2P_SDK_LOGGER_H

/**
 * 日志工具类
 */
class Logger {

    /**
     * 公共方法
     */
public:

    /**
     * 错误日志动态日志 兼容C++11标准
     * @param tag 标签
     * @param message 信息
     */
    static void e(const char * tag, char *message);

    /**
     * 错误日志静态日志 兼容C++标准
     * @param tag 标签
     * @param message 信息
     */
    static void e(const char * tag, const char * message);

    /**
     * 信息日志静态日志 兼容C++标准
     * @param tag 标签
     * @param message 信息
     */
    static void i(const char * tag, char *message);

    /**
     * 信息日志静态日志 兼容C++标准
     * @param tag 标签
     * @param message 信息
     */
    static void i(const char * tag, const char * message);

    /**
     * 调试日志静态日志 兼容C++标准
     * @param tag 标签
     * @param message 信息
     */
    static void d(const char * tag, char *message);

    /**
     * 调试日志静态日志 兼容C++标准
     * @param tag 标签
     * @param message 信息
     */
    static void d(const char * tag, const char * message);

    /**
     * 警告日志静态日志 兼容C++标准
     * @param tag 标签
     * @param message 信息
     */
    static void w(const char * tag, char *message);

    /**
     * 警告日志静态日志 兼容C++标准
     * @param tag 标签
     * @param message 信息
     */
    static void w(const char * tag, const char * message);
};


#endif //P2P_SDK_LOGGER_H
