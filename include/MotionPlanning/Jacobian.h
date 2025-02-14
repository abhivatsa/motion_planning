/*
 * Jacobian.h
 *
 *  Created on: 24-Dec-2022
 *      Author: abhishek
 */

#ifndef INCLUDE_MOTIONPLANNING_JACOBIAN_H_
#define INCLUDE_MOTIONPLANNING_JACOBIAN_H_

#include <iostream>
#include <math.h>
#include <eigen3/Eigen/Dense>
#include <vector>

namespace motion_planning {

class Jacobian{
public:
	Jacobian(int robot_type);
	virtual ~Jacobian();
	int computeJacobian(std::vector<double> joint_angles, Eigen::MatrixXd& jacob_mat);
	int computeJacobianOffset(std::vector<double> joint_angles, Eigen::MatrixXd& jacob_mat);
	int computeJacobianInline(std::vector<double> joint_angles, Eigen::MatrixXd& jacob_mat);

private:
	std::vector<double> alpha, a, d, theta;
	int robot_type_;
};

} /* namespace motion_planning */

#endif /* INCLUDE_MOTIONPLANNING_JACOBIAN_H_ */
