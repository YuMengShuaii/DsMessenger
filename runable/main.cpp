//
// Created by 于孟帅 on 2020/6/25.
//

#include "../sdk/util/logger.h"
#include "../sdk/export/ds_messenger.h"

int main() {
    P2pProtocol p2pEngine = hello();
    Logger::i("P2p引擎版本",p2pEngine.getVersion());
}