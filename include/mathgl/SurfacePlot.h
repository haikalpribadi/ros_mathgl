/* 
 * File:   SurfacePlot.h
 * Author: haikalpribadi
 *
 * Created on 25 March 2014, 23:31
 */

#ifndef SURFACEPLOT_H
#define	SURFACEPLOT_H

#include <mgl/mgl.h>
#include <mgl/mgl_fltk.h>
#include <ros/ros.h>

class SurfacePlot {
public:
    SurfacePlot();
    
private:
    ros::NodeHandle node;
    
};

#endif	/* SURFACEPLOT_H */

