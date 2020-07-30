//
// Created by 于孟帅 on 2020/6/26.
//

#include "logger.h"
#include <iostream>
#include <ctime>
#include <sys/time.h>

/**
 * 使用std命令空间
 */
using namespace std;

/**
 * 错误日志头部
 */
const string ERROR_STR = "  ♥️️️  [ERROR] >>>";

/**
 * 信息日志头部
 */
const string INFO_STR = "  💙️️ [INFO] >>>";

/**
 * 警告日志头部
 */
const string WARNING_STR = "  💛️ [WARNING] >>>";

/**
 * 调试日志头部
 */
const string DEBUG_STR = "  💚 [DEBUG] >>>";

/**
 * 日志级别
 * Info 信息
 * Wraning 井盖
 * Error 错误
 * Debug 调试
 */
typedef enum LoggerType {
    INFO,
    WARNING,
    ERROR,
    DEBUG
};

/**
 * 私有方法
 * 获取当前毫秒
 */
private static int getMill()
{
    struct timeval tpend{};
    gettimeofday(&tpend,NULL);
    int milliseconds = tpend.tv_usec/1000;
    return milliseconds;
}

/**
 * 统一日志打印方法
 * 使用cout方法进行日志打印
 */
private static void println(LoggerType type,const char * tag, const char* message){
    time_t timep;
    time (&timep);
    char tmp[64];
    strftime(tmp, sizeof(tmp), "%Y-%m-%d %H:%M:%S:",localtime(&timep) );
    string tagTemp = tag;
    string tagInfo =  " ["+ tagTemp + "] >>> ";
    string levelInfo;
    switch (type){
        case INFO :
            levelInfo = INFO_STR;
            break;
        case WARNING :
            levelInfo = WARNING_STR;
            break;
        case DEBUG :
            levelInfo = DEBUG_STR;
            break;
        case ERROR :
            levelInfo = ERROR_STR;
            break;
    }
    string logInfo = tmp + to_string(getMill()) + levelInfo + tagInfo + message;
    cout << logInfo << endl;
}

void Logger::e(const char *tag, char *message) {
    println(ERROR,tag,message);
}

void Logger::e(const char *tag, const char *message) {
    println(ERROR,tag,message);
}

void Logger::i(const char *tag, char *message) {
    println(INFO,tag,message);
}

void Logger::i(const char *tag, const char *message) {
    println(INFO,tag,message);
}

void Logger::d(const char *tag, char *message) {
    println(DEBUG,tag,message);
}

void Logger::d(const char *tag, const char *message) {
    println(DEBUG,tag,message);
}

void Logger::w(const char *tag, char *message) {
    println(WARNING,tag,message);
}

void Logger::w(const char *tag, const char *message) {
    println(WARNING,tag,message);
}
