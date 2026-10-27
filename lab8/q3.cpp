#include <iostream>
using namespace std;

class Compressor {
public:
    virtual void compress(double fileSize) {
        cout << "Base compressor method." << endl;
    }
};

class TextCompressor : public Compressor {
public:
    void compress(double fileSize) override {
        double compressedSize = fileSize * 0.40;
        cout << "Text File - Original Size: " << fileSize << " MB, Compressed Size: " << compressedSize << " MB" << endl;
    }
};

class ImageCompressor : public Compressor {
public:
    void compress(double fileSize) override {
        double compressedSize = fileSize * 0.70;
        cout << "Image File - Original Size: " << fileSize << " MB, Compressed Size: " << compressedSize << " MB" << endl;
    }
};

int main() {
    double size;
    cout << "Enter file size in MB: ";
    cin >> size;
    
    TextCompressor textComp;
    ImageCompressor imageComp;
    
    textComp.compress(size);
    imageComp.compress(size);
    
    return 0;
}