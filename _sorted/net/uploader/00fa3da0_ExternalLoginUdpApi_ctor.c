// addr: 0x00fa3da0
// name: ExternalLoginUdpApi_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __thiscall
ExternalLoginUdpApi_ctor
          (undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,undefined4 param_6)

{
                    /* Preserves the existing identified symbol ExternalLoginUdpApi_ctor; code
                       initializes or operates on that class and is queued for sidecar write-back.
                        */
  ClientServerCrypto_CryptoBaseApi_ctor(PTR_s_LoginUdp_6_01b982fc,param_3,param_4,0,param_5,param_6)
  ;
  param_1[0x2fd] = 0;
  *(undefined1 *)(param_1 + 0x2fe) = 0;
  param_1[0x2fc] = Login::ExternalLoginApi::vftable;
  param_1[0x2ff] = param_2;
  param_1[0x303] = 0;
  param_1[0x302] = 0;
  param_1[0x300] = SoeUtil::StringFixed<32>::vftable;
  param_1[0x301] = &DAT_01cb4d64;
  param_1[0x310] = 0;
  param_1[0x30f] = 0;
  param_1[0x30d] = SoeUtil::StringFixed<32>::vftable;
  param_1[0x30e] = &DAT_01cb4d64;
  *param_1 = Login::ExternalLoginUdpApi::vftable;
  param_1[0x30] = Login::ExternalLoginUdpApi::vftable;
  param_1[0x31] = Login::ExternalLoginUdpApi::vftable;
  param_1[0x2fc] = Login::ExternalLoginUdpApi::vftable;
  return param_1;
}

