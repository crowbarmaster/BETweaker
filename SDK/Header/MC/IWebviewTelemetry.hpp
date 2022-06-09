// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class IWebviewTelemetry {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_IWEBVIEWTELEMETRY
public:
    class IWebviewTelemetry& operator=(class IWebviewTelemetry const &) = delete;
    IWebviewTelemetry(class IWebviewTelemetry const &) = delete;
    IWebviewTelemetry() = delete;
#endif


public:
    /*0*/ virtual ~IWebviewTelemetry();
    /*1*/ virtual void __unk_vfn_1();
    /*2*/ virtual void __unk_vfn_2();
    /*3*/ virtual void __unk_vfn_3();
    /*4*/ virtual void __unk_vfn_4();
    /*5*/ virtual void __unk_vfn_5();
    /*6*/ virtual void onDownloadBegin(struct WebviewDownloadInfo const &);
    /*7*/ virtual void __unk_vfn_7();
    /*8*/ virtual void onDownloadComplete(struct WebviewDownloadInfo const &);
    /*9*/ virtual void onDownloadCanceled(struct WebviewDownloadInfo const &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_IWEBVIEWTELEMETRY
public:
#endif
    MCAPI IWebviewTelemetry(class IMinecraftEventing const &);


};