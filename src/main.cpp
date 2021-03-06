#include "LineSegmentation.hpp"

int main(int argc, char *argv[]) {
	cout << argv[1] << endl;
    string img_path = argv[1];
    LineSegmentation line_segmentation(img_path);
    vector<cv::Mat> lines = line_segmentation.segment();
    // ToDo @Samir55 Remove.
    int idx = 0;
    for(auto m : lines) {
        imwrite("Line " + to_string(idx++) + ".jpg", m);
    }
    return 0;
}