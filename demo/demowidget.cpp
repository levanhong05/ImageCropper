#include "demowidget.h"

#include "imagecropper.h"

#include <QLabel>
#include <QCheckBox>
#include <QPushButton>
#include <QVBoxLayout>

DemoWidget::DemoWidget(QWidget* _parent) :
    QWidget(_parent)
{
    // Set up the image crop widget
    m_imageCropper = new ImageCropper(this);
    m_imageCropper->resize(600, 600);
    m_imageCropper->setProportion(QSize(1,1));
    m_imageCropper->setImage(QPixmap::fromImage(QImage(":/img.jpg")));
    m_imageCropper->setBackgroundColor( Qt::lightGray );
    m_imageCropper->setCroppingRectBorderColor( Qt::magenta);

    // Use fixed proportions
    QCheckBox* fixedProportionsCombo = new QCheckBox("Fix proportion to (4x3)", this);
    connect(fixedProportionsCombo, SIGNAL(toggled(bool)), m_imageCropper, SLOT(setProportionFixed(bool)));

    // Crop the selection
    QPushButton* cropBtn = new QPushButton("Crop", this);
    connect(cropBtn, SIGNAL(clicked()), this, SLOT(crop()));

    // Area to insert the cropped image
    m_croppedImage = new QLabel(this);

    // Set up the display
    QVBoxLayout *layout = new QVBoxLayout(this);
    layout->addWidget(m_imageCropper);
    layout->addWidget(fixedProportionsCombo);

    layout->addWidget(cropBtn);
    layout->addWidget(m_croppedImage);
}

void DemoWidget::crop()
{
    m_croppedImage->setPixmap(m_imageCropper->cropImage());
}
