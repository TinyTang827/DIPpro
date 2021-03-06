#ifndef COLORPROCESS_H
#define COLORPROCESS_H

#include "mathematic.h"
#include "color.h"
#include "Histogram.h"
#include "smooth.h"
#include "sharpen.h"
/*
 define in smooth.h
 #define SMOOTH_GAUSSIAN 0
 #define SMOOTH_MEDIAN 1
 #define SMOOTH_BILATERAL 2
 #define SMOOTH_MEAN 3
 */
void HistEqualRGB(RGB *src,RGB *dst,int width,int height);
void SmoothRGB(RGB *src,RGB *dst,int width,int height,int m_width,int m_height,double param1,double param2,int Smooth_type);
void SmoothHSI(HSI *src,HSI *dst,int width,int height,int m_width,int m_height,double param1,double param2,int Smooth_type);
void SharpenRGB(RGB *src,RGB *dst,int width,int height,double c,int Sharpen_type);
void SharpenHSI(HSI *src,HSI *dst,int width,int height,double c,int Sharpen_type);
void SegmentRGB(RGB* src,RGB *dst,int width,int height,RGB * color_center,double threshold);
void Cover_RGB(RGB *src,RGB *dst,RGB *cover,int width,int height);
void Zero_RGB(RGB *src,int width,int height);
void Copy_RGB(RGB *src,RGB *dst,int width,int height);
void Threshold_RGB(RGB *src,RGB *dst,RGB *threshold,int width,int height);
#endif