#include "ds_messenger.h"
#include "../util/logger.h"
#include <iostream>

using namespace std;

P2pProtocol hello() {
    Logger::i("P2P Engine","测试通信日志打印");
    Logger::d("P2P Engine","测试通信日志打印");
    Logger::w("P2P Engine","测试通信日志打印");
    Logger::e("P2P Engine","测试通信日志打印");
    return P2pProtocol();
}
