/*
 * ParamsContainer.h
 *
 *  Created on: Dec 31, 2014
 *      Author: tom1231
 */

#ifndef PARAMS_PARAMSCONTAINER_H_
#define PARAMS_PARAMSCONTAINER_H_
#include <ros.h>
#include <string.h>


class ParamsContianer {
	public:
		ParamsContianer(ros::NodeHandle nh, String nameSpace);
		bool getInitController();
		bool nameSpaceIsEmpty();
		float getWheelDiameter();
		float getWheelBaseLength();
		int getEncoderCpr();
		void getPID_Constants(float val[]);
		int getControllerMode();
		int getControllerHz();
		int getMaxCommand();
		int getEncodersReadHz();
		float getAlpha();
		float getSlipFactor();
		int getEncodersPubHz();
		int getOdomPubHz();
		bool ImuIsInit();
		int getMpuRate();
		int getMagMix();
		int getMagRate();
		int getIMU_Lpf();
		bool rangersIsInit();
		int getRangersHz();
//		const char* getRangerName(int portNum);
//		const char* getRangerType(int portNum);
//		bool gpsIsInit();
//		int getGpsBaudrate();
//		bool statusIsInit();
//		int getStatusHz();
//		bool ServosIsInit();
//		int getServosHz();
//		const char* getServoName(int portNum);
	private:
		String _nameSpace;
		ros::NodeHandle _nh;
};







#endif /* PARAMS_PARAMSCONTAINER_H_ */
