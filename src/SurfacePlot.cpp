/* 
 * File:   SurfacePlot.cpp
 * Author: haikalpribadi
 * 
 * Created on 25 March 2014, 23:31
 */

#include "SurfacePlot.h"

SurfacePlot::SurfacePlot() {
}

int sample(mglGraph *gr, void *) {
    gr->Alpha(true);
    gr->Light(true);
    gr->Light(0, mglPoint(0, 0, 1));
    mglData a(30, 20);
    a.Modify("0.6*sin(2*pi*x)*sin(3*pi*y) + 0.4*cos(3*pi*(x*y))");

    gr->Rotate(40, 60);
    gr->Surf(a, "BbcyrR#");
    gr->Box();
    return 0;
}

int main(int argc, char** argv) {
    ros::init(argc, argv, "SurfacePlot");

    SurfacePlot plot;

    mglGraphFLTK gr;
    gr.Window(argc, argv, sample, "MathGL examples");
    return mglFlRun();
}

