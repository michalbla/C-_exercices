#include <cstring>
#include <iostream>
struct box
{
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
};
void insert(box& box) {
 std::cin >> box.maker >> box.height >> box.width >> box.length;
}
void show_box(box box) {
    std::cout << "Maker name: "<< box.maker << std::endl;
    std::cout << "Box height: "<<box.height << std::endl;
    std::cout << "Box width: "<<box.width << std::endl;
    std::cout << "Box length: "<<box.length << std::endl;
}
box calculateVolume(box& box) {
    box.volume = box.height * box.width * box.length;
    return box;
}

void show_volume(box box) {
    std::cout << "Volume: " << box.volume << std::endl;
}

int main() {
    box box{};
    while (true) {
        insert(box);
        if(box.height > 0 && box.width > 0 && box.length > 0) {
            break;
        }
            std::cout << "Enter correct values: \n"
                     "1. maker name\t2. height\n"
                     "3. width\t4. length\n";
            std::cin.clear();
    }
    show_box(box);
    show_volume(calculateVolume(box));
    return 0;
}
