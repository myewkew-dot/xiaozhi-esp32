#include "boards/kew-custom-s3/config.h"
#include "boards/common/board.h"
#include "boards/common/wifi_board.h"

class KewCustomS3Board : public WifiBoard {
public:
    KewCustomS3Board() {
        // Board uses standard WifiBoard implementation with custom pins
    }
};

extern "C" const Board* create_board() {
    static KewCustomS3Board board;
    return &board;
}
