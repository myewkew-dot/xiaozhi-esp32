#include "boards/kew-custom-s3/config.h"
#include "boards/common/board.h"

class KewCustomS3Board : public WifiBoard {
public:
    KewCustomS3Board() {
        // This board inherits the standard WifiBoard logic
        // and uses the pins defined in our custom config.h
    }
};

extern "C" const Board* get_board() {
    static KewCustomS3Board board;
    return &board;
}
