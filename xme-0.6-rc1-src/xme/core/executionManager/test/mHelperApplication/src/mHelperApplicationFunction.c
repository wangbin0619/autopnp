/*
 * Copyright (c) 2011-2013, fortiss GmbH.
 * Licensed under the Apache License, Version 2.0.
 *
 * Use, modification and distribution are subject to the terms specified
 * in the accompanying license file LICENSE.txt located at the root directory
 * of this software distribution. A copy is available at
 * http://chromosome.fortiss.org/.
 *
 * This file is part of CHROMOSOME.
 *
 * $Id: mHelperApplicationFunction.c 5157 2013-09-24 16:29:43Z rupanov $
 */

/**
 * \file
 *         Source file for function mHelperApplication in component mHelperApplication.
 *
 * \author
 *         This file has been generated by the CHROMOSOME Modeling Tool (XMT)
 *         (fortiss GmbH).
 */

/******************************************************************************/
/***   Includes                                                             ***/
/******************************************************************************/
#include "../include/mHelperApplicationFunction.h"
#include "xme/core/executionManager/include/executionManagerDataStructures.h"
#include "xme/core/log.h"

#define MODULE_ACRONYM "mHelperApp: "

extern uint32_t executionCount[N_FUNCTIONS_SIMULATED];
extern xme_core_exec_initCallback_t functionPointers[N_FUNCTIONS_SIMULATED];
/******************************************************************************/
/***   Implementation                                                       ***/
/******************************************************************************/
xme_status_t
test_mHelperApplication_mHelperApplicationFunction_init
(
    void* param
)
{
    xme_core_exec_functionDescriptor_t* funDesc;

    XME_UNUSED_PARAMETER(param);

    funDesc = (xme_core_exec_functionDescriptor_t*)param;

    executionCount[funDesc->componentId+funDesc->functionId] = 0;
    functionPointers[funDesc->componentId+funDesc->functionId] = NULL;

    return XME_STATUS_SUCCESS;

}

void
test_mHelperApplication_mHelperApplicationFunction_step
(
    void* param
)
{
    xme_core_exec_functionDescriptor_t* funDesc;

    funDesc = (xme_core_exec_functionDescriptor_t*)param;

    executionCount[funDesc->componentId+funDesc->functionId] ++;

    XME_LOG(XME_LOG_NOTE, MODULE_ACRONYM "executing [%d|%d]: %d\n",
            funDesc->componentId, funDesc->functionId,
            executionCount[funDesc->componentId+funDesc->functionId]);

    if(functionPointers[funDesc->componentId+funDesc->functionId] != NULL)
    {
        (functionPointers[funDesc->componentId+funDesc->functionId])(NULL);
    }
    else
    {
    	XME_LOG(XME_LOG_NOTE, MODULE_ACRONYM "[%d|%d] has no callback\n",
    			funDesc->componentId, funDesc->functionId);
    }


}

void
test_mHelperApplication_mHelperApplicationFunction_fini(void)
{

}