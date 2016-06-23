#ifndef GLWINDOW_H
#define GLWINDOW_H

#include <QOpenGLWidget>
#include <QOpenGLBuffer>
#include <QOpenGLShaderProgram>
#include <QOpenGLVertexArrayObject>
#include <QOpenGLFunctions_3_3_Core>
#include "../iucore.h"


namespace iu {
/**
 * @brief The Qt5ImageGpuWidget class
 *
 *
 */

class Qt5ImageGpuWidget : public QOpenGLWidget, protected QOpenGLFunctions_3_3_Core
{
    Q_OBJECT
public:
    /**
      * The non-default constructor
      @param sz Output image size
      @param parent Parent widget
      */
    explicit Qt5ImageGpuWidget(const IuSize sz, QWidget* parent = NULL);
    virtual ~Qt5ImageGpuWidget();

public slots:
    /**
      * Set a new grayscale image
      @param im A grayscale image in uchar format
      */
    void update_image(iu::ImageGpu_8u_C1* im);
    /**
      * Set a new RGBA image
      @param im A RGBA image in uchar format
      */
    void update_image(iu::ImageGpu_8u_C4* im);
    /**
      * Set a new grayscale image
      @param im A grayscale image in float format
      @param minVal Minimum value to display-> black
      @param maxVal Maximum value to display -> white
      */
    void update_image(iu::ImageGpu_32f_C1 *im, float minVal, float maxVal);
    /**
      * Set a new grayscale image to be displayed in jet colormap
      @param im A grayscale image in float format
      @param minVal Minimum value to display-> black
      @param maxVal Maximum value to display -> white
      */
    void update_image_colormap(iu::ImageGpu_32f_C1 *im, float minVal, float maxVal);

protected:

    void paintGL();
    void initializeGL();
    void resizeGL(int w, int h);

    void init_cuda();

    //iu::ImageGpu_8u_C1& img_;
    GLuint texture_;
    cudaGraphicsResource_t cuda_img_;
    QOpenGLBuffer pbo_;
    IuSize image_size_;

    QOpenGLShaderProgram* shader_program_;
    QOpenGLVertexArrayObject* vao_;
    QOpenGLBuffer* vbo_;
};

} // namespace iu

#endif // GLWINDOW_H
