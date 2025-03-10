/*
 * Copyright (c) Contributors to the Open 3D Engine Project.
 * For complete copyright and license terms please see the LICENSE at the root of this distribution.
 *
 * SPDX-License-Identifier: Apache-2.0 OR MIT
 *
 */
#pragma once

#include <Atom/RHI/DeviceIndirectArguments.h>
#include <Atom/RHI/Buffer.h>
#include <Atom/RHI/IndirectBufferView.h>

namespace AZ::RHI
{
    using IndirectArguments = IndirectArgumentsTemplate<Buffer, IndirectBufferView>;
} // namespace AZ::RHI
