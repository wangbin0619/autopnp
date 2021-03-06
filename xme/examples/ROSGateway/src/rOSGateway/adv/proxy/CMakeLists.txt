#
# Copyright (c) 2011-2014, fortiss GmbH.
# Licensed under the Apache License, Version 2.0.
# 
# Use, modification and distribution are subject to the terms specified
# in the accompanying license file LICENSE.txt located at the root directory
# of this software distribution. A copy is available at
# http://chromosome.fortiss.org/.
#
# This file is part of CHROMOSOME.
#
# $Id$
#         This file has been generated by the CHROMOSOME Modeling Tool (XMT)
#         (fortiss GmbH).

# PROTECTED REGION ID(ROSGATEWAY_ADV_PROXY_CMAKELISTS_TXT_BEGIN) ENABLED START
# PROTECTED REGION END

xme_add_component (
    "rOSGateway_adv_proxy"
    HEADERS
        "include/proxyComponentWrapper.h"
        "include/proxyComponent.h"
        "include/receiveMessageFunctionWrapper.h"
        "include/receiveMessageFunction.h"
        "include/askSumFunctionWrapper.h"
        "include/askSumFunction.h"
        "include/receiveSumFunctionWrapper.h"
        "include/receiveSumFunction.h"
        "include/getDifferenceFunctionWrapper.h"
        "include/getDifferenceFunction.h"
        "include/proxyManifest.h"
    SOURCES
        "src/proxyComponentWrapper.c"
        "src/proxyComponent.cpp"
        "src/receiveMessageFunctionWrapper.cpp"
        "src/receiveMessageFunction.cpp"
        "src/askSumFunctionWrapper.cpp"
        "src/askSumFunction.cpp"
        "src/receiveSumFunctionWrapper.cpp"
        "src/receiveSumFunction.cpp"
        "src/getDifferenceFunctionWrapper.cpp"
        "src/getDifferenceFunction.cpp"
        "src/proxyManifest.cpp"
    DEPENDS
        xme_core_directory_attribute
        xme_hal_mem
        xme_hal_ros
        xme_hal_sched
        xme_hal_sleep
        xme_hal_time
    # PROTECTED REGION ID(ROSGATEWAY_ADV_PROXY_CMAKELISTS_TXT_XMEADDCOMPONENT) ENABLED START
    TARGETS
        VALUE_OF catkin_EXPORTED_TARGETS
    LINK
        VALUE_OF catkin_LIBRARIES
    # PROTECTED REGION END
)

# PROTECTED REGION ID(ROSGATEWAY_ADV_PROXY_CMAKELISTS_TXT_END) ENABLED START
# PROTECTED REGION END
