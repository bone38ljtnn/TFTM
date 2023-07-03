/**
 * 边的定义
 * @authors JiantaoLi YuelingHuang YanweiYu
*/

#ifndef TOPO_EDGE_H
#define TOPO_EDGE_H

#include<iostream>
#include<string>
#include<vector>
#include<string>
#include<fstream>
#include<algorithm>
#include<set>
#include<map>
#include<unordered_map>

//如果这行报错则用 #include <Eigen/Sparse>
//If this line of code throws an error, then use "#include <Eigen/Sparse>".
#include <eigen3/Eigen/Sparse>

using namespace std;

struct TopoEdge{
    int in; //边的起点
    int o; //边的终点

    TopoEdge(){}
    TopoEdge(int in_, int o_){
        this->in = in_;
        this->o = o_;
    }

    /**
     * 重构小于号，用于map排序
     * 定义为起点标号(in)越小边(TopoEdge)越小，起点标号相同则终点标号(o)越小边越小
    */
    bool operator< (const TopoEdge& t) const{
        if(in < t.in) return true;
        else if(in == t.in) return o < t.o;
        else return false;
    }
};




#endif
