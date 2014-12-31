/*
 * ParamsContianer.cpp
 *
 *  Created on: Dec 31, 2014
 *      Author: tom1231
 */
#include "ParamsContianer.h"

#include <string.h>

ParamsContianer::ParamsContianer(ros::NodeHandle nh) {
	_nh = nh;
}

bool ParamsContianer::getInitController() {
	int isInit[1];
	_nh.getParam("init_controller",isInit,1);
	return isInit[0] == 1;
}
float ParamsContianer::getWheelDiameter() {
	float res[1];
	_nh.getParam("wheel_diameter",res);
	return res[0];
}
float ParamsContianer::getWheelBaseLength() {
	float res[1];
	_nh.getParam("wheel_base_length",res);
	return res[0];
}
int ParamsContianer::getEncoderCpr() {
	int res[1];
	_nh.getParam("encoder_cpr",res);
	return res[0];
}
void ParamsContianer::getPID_Constants(float val[]) {
	_nh.getParam("PID_constants",val,3);
}
int ParamsContianer::getControllerMode() {
	int res[1];
	_nh.getParam("controller_mode",res);
	return res[0];
}
int ParamsContianer::getControllerHz() {
	int res[1];
	_nh.getParam("control_hz",res);
	return res[0];
}
int ParamsContianer::getMaxCommand() {
	int res[1];
	_nh.getParam("max_command",res);
	return res[0];
}
int ParamsContianer::getEncodersReadHz() {
	int res[1];
	_nh.getParam("encoders_read_hz",res);
	return res[0];
}
float ParamsContianer::getAlpha() {
	float res[1];
	_nh.getParam("alpha",res);
	return res[0];
}
float ParamsContianer::getSlipFactor() {
	float res[1];
	_nh.getParam("slip_factor",res);
	return res[0];
}
int ParamsContianer::getEncodersPubHz() {
	int res[1];
	_nh.getParam("encoders_pub_hz",res);
	return res[0];
}
int ParamsContianer::getOdomPubHz() {
	int res[1];
	_nh.getParam("odom_pub_hz",res);
	return res[0];
}
bool ParamsContianer::ImuIsInit() {
	int res[1];
	_nh.getParam("init_imu",res);
	return res[0] == 1;
}
int ParamsContianer::getMpuRate() {
	int res[1];
	_nh.getParam("mpuRate",res);
	return res[0];
}
int ParamsContianer::getMagMix() {
	int res[1];
	_nh.getParam("magMix",res);
	return res[0];
}
int ParamsContianer::getMagRate() {
	int res[1];
	_nh.getParam("magRate",res);
	return res[0];
}
int ParamsContianer::getIMU_Lpf() {
	int res[1];
	_nh.getParam("IMU_lpf",res);
	return res[0];
}
bool ParamsContianer::rangersIsInit() {
	int res[1];
	_nh.getParam("init_rangers",res);
	return res[0] == 1;
}
int ParamsContianer::getRangersHz() {
	int res[1];
	_nh.getParam("rangers_hz",res);
	return res[0];
}
const char** ParamsContianer::getRangerName(int portNum) {
	String name = "ranger_port" + portNum +"_name";
	char** res;
	_nh.getParam(name.c_str(),res);
	return res;
}

int  ParamsContianer::getRangerType(int portNum) {
	String name = "ranger_port" + portNum +"_type";
	int res[1];
	_nh.getParam(name.c_str(),res);
	return res;

}
bool ParamsContianer::gpsIsInit() {
	int res[1];
	_nh.getParam("init_gps",res);
	return res[0] == 1;
}

int ParamsContianer::getGpsBaudrate() {
	int res[1];
	_nh.getParam("gps_baudrate",res);
	return res[0];
}
bool ParamsContianer::statusIsInit() {
	int res[1];
	_nh.getParam("init_status",res);
	return res[0] == 1;
}
int ParamsContianer::getStatusHz() {
	int res[1];
	_nh.getParam("status_hz",res);
	return res[0];
}
bool ParamsContianer::ServosIsInit() {
	int res[1];
	_nh.getParam("init_servos",res);
	return res[0] == 1;
}
int ParamsContianer::getServosHz() {
	int res[1];
	_nh.getParam("servos_hz",res);
	return res[0];
}
const char* ParamsContianer::getServoName(int portNum) {
	char** res;
	String name = "servo_port"+ portNum +"_name";
	_nh.getParam(name.c_str(),res);
	return res[0];
}
