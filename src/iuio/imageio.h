#pragma once

#include <iucore/coredefs.h>
#include <iucore/memorydefs.h>
#include <string>

namespace iuprivate {

/* Read images from disc */
iu::ImageCpu_8u_C1* imread_8u_C1(const std::string& filename);
iu::ImageCpu_8u_C3* imread_8u_C3(const std::string& filename);
iu::ImageCpu_8u_C4* imread_8u_C4(const std::string& filename);
iu::ImageCpu_32f_C1* imread_32f_C1(const std::string& filename);
iu::ImageCpu_32f_C3* imread_32f_C3(const std::string& filename);
iu::ImageCpu_32f_C4* imread_32f_C4(const std::string& filename);
iu::ImageGpu_8u_C1* imread_cu8u_C1(const std::string& filename);
iu::ImageGpu_8u_C4* imread_cu8u_C4(const std::string& filename);
iu::ImageGpu_32f_C1* imread_cu32f_C1(const std::string& filename);
iu::ImageGpu_32f_C4* imread_cu32f_C4(const std::string& filename);

/* Write images to disc */
bool imsave(iu::ImageCpu_8u_C1* image, const std::string& filename, const bool& normalize=false);
bool imsave(iu::ImageCpu_8u_C3* image, const std::string& filename, const bool& normalize=false);
bool imsave(iu::ImageCpu_8u_C4* image, const std::string& filename, const bool& normalize=false);
bool imsave(iu::ImageCpu_32f_C1* image, const std::string& filename, const bool& normalize=false);
bool imsave(iu::ImageCpu_32f_C3* image, const std::string& filename, const bool& normalize=false);
bool imsave(iu::ImageCpu_32f_C4* image, const std::string& filename, const bool& normalize=false);
bool imsave(iu::ImageGpu_8u_C1* image, const std::string& filename, const bool& normalize=false);
bool imsave(iu::ImageGpu_8u_C4* image, const std::string& filename, const bool& normalize=false);
bool imsave(iu::ImageGpu_32f_C1* image, const std::string& filename, const bool& normalize=false);
bool imsave(iu::ImageGpu_32f_C4* image, const std::string& filename, const bool& normalize=false);

/* Show images */
void imshow(iu::ImageCpu_8u_C1* image, const std::string& winname, const bool& normalize=false);
void imshow(iu::ImageCpu_8u_C3* image, const std::string& winname, const bool& normalize=false);
void imshow(iu::ImageCpu_8u_C4* image, const std::string& winname, const bool& normalize=false);
void imshow(iu::ImageCpu_32f_C1* image, const std::string& winname, const bool& normalize=false);
void imshow(iu::ImageCpu_32f_C3* image, const std::string& winname, const bool& normalize=false);
void imshow(iu::ImageCpu_32f_C4* image, const std::string& winname, const bool& normalize=false);
void imshow(iu::ImageGpu_8u_C1* image, const std::string& winname, const bool& normalize=false);
void imshow(iu::ImageGpu_8u_C4* image, const std::string& winname, const bool& normalize=false);
void imshow(iu::ImageGpu_32f_C1* image, const std::string& winname, const bool& normalize=false);
void imshow(iu::ImageGpu_32f_C4* image, const std::string& winname, const bool& normalize=false);

} // namespace iuprivate



