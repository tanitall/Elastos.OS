//=========================================================================
// Copyright (C) 2012 The Elastos Open Source Project
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//=========================================================================

#include "Elastos.Droid.Utility.h"
#include "elastos/droid/hardware/camera2/legacy/LegacyRequest.h"
#include "elastos/droid/hardware/HardwareCamera.h"
#include "elastos/droid/internal/utility/Preconditions.h"

using Elastos::Droid::Internal::Utility::Preconditions;

namespace Elastos {
namespace Droid {
namespace Hardware {
namespace Camera2 {
namespace Legacy {

CAR_INTERFACE_IMPL(LegacyRequest, Object, ILegacyRequest)

LegacyRequest::LegacyRequest()
{
}

ECode LegacyRequest::constructor()
{
    return NOERROR;
}

ECode LegacyRequest::constructor(
    /* [in] */ ICameraCharacteristics* characteristics,
    /* [in] */ ICaptureRequest* captureRequest,
    /* [in] */ ISize* previewSize,
    /* [in] */ IParameters* parameters)
{
    FAIL_RETURN(Preconditions::CheckNotNull(characteristics, String("characteristics must not be null")))
    FAIL_RETURN(Preconditions::CheckNotNull(captureRequest, String("captureRequest must not be null")))
    FAIL_RETURN(Preconditions::CheckNotNull(TO_IINTERFACE(previewSize), String("previewSize must not be null")))
    mCharacteristics = characteristics;
    mCaptureRequest = captureRequest;
    mPreviewSize = previewSize;
    FAIL_RETURN(Preconditions::CheckNotNull(parameters, String("parameters must not be null")))

    AutoPtr<IParameters> para;
    return HardwareCamera::GetParametersCopy(parameters, (IParameters**)&mParameters);
}

ECode LegacyRequest::SetParameters(
    /* [in] */ IParameters* parameters)
{
    FAIL_RETURN(Preconditions::CheckNotNull(parameters, String("parameters must not be null")))
    return mParameters->CopyFrom(parameters);
}

ECode LegacyRequest::GetCameraCharacteristics(
    /* [out] */ ICameraCharacteristics** character)
{
    VALIDATE_NOT_NULL(character);

    *character = mCharacteristics;
    REFCOUNT_ADD(*character);
    return NOERROR;
}

ECode LegacyRequest::GetCaptureRequest(
    /* [out] */ ICaptureRequest** request)
{
    VALIDATE_NOT_NULL(request);

    *request = mCaptureRequest;
    REFCOUNT_ADD(*request);
    return NOERROR;
}

ECode LegacyRequest::GetSize(
    /* [out] */ ISize** size)
{
    VALIDATE_NOT_NULL(size);

    *size = mPreviewSize;
    REFCOUNT_ADD(*size);
    return NOERROR;
}

ECode LegacyRequest::GetParameters(
    /* [out] */ IParameters** para)
{
    VALIDATE_NOT_NULL(para);

    *para = mParameters;
    REFCOUNT_ADD(*para);
    return NOERROR;
}

} // namespace Legacy
} // namespace Camera2
} // namespace Hardware
} // namespace Droid
} // namespace Elastos
