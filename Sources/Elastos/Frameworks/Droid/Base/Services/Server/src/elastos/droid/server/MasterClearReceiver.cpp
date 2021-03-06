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

#include "elastos/droid/server/MasterClearReceiver.h"
#include <elastos/utility/logging/Slogger.h>

using Elastos::Utility::Logging::Slogger;

namespace Elastos {
namespace Droid {
namespace Server {

const String MasterClearReceiver::EXTRA_WIPE_MEDIA("wipe_media");

MasterClearReceiver::RebootThread::RebootThread(
    /* [in] */ IIntent* intent,
    /* [in] */ Boolean shutdown,
    /* [in] */ const String& reason)
    : mIntent(intent)
    , mShutdown(shutdown)
    , mReason(reason)
{
    Thread::constructor(String("Reboot"));
}

ECode MasterClearReceiver::RebootThread::Run()
{
    Slogger::E("MasterClearReceiver", "MasterClearReceiver::RebootThread::Run() E_NOT_IMPLEMENTED");
        // try {
    Boolean wipeMedia = FALSE;
    mIntent->GetBooleanExtra(EXTRA_WIPE_MEDIA, FALSE, &wipeMedia);
    assert(0 && "TODO");
    //     RecoverySystem.rebootWipeUserData(context, mShutdown, mReason, wipeMedia);
    //     Log.wtf(TAG, "Still running after master clear?!");
    // } catch (IOException e) {
    //     Slog.e(TAG, "Can't perform master clear/factory reset", e);
    // } catch (SecurityException e) {
    //     Slog.e(TAG, "Can't perform master clear/factory reset", e);
    // }
    return NOERROR;
}

ECode MasterClearReceiver::constructor()
{
    return BroadcastReceiver::constructor();
}

ECode MasterClearReceiver::OnReceive(
    /* [in] */ IContext* context,
    /* [in] */ IIntent* intent)
{
    String action;
    intent->GetAction(&action);
    if (action.Equals(IIntent::ACTION_REMOTE_INTENT)) {
        String extra;
        intent->GetStringExtra(String("from"), &extra);
        if (!extra.Equals("google.com")) {
            Slogger::W("MasterClearReceiver", "Ignoring master clear request -- not from trusted server.");
            return NOERROR;
        }
    }

    Boolean shutdown;
    intent->GetBooleanExtra(String("shutdown"), FALSE, &shutdown);
    String reason;
    intent->GetStringExtra(IIntent::EXTRA_REASON, &reason);

    Slogger::W("MasterClearReceiver", "!!! FACTORY RESET !!!");
    // The reboot call is blocking, so we need to do it on another thread.
    mRebootThread = new RebootThread(intent, shutdown, reason);
    mRebootThread->Start();

    return NOERROR;
}

} // namespace Server
} // namespace Droid
} // namespace Elastos