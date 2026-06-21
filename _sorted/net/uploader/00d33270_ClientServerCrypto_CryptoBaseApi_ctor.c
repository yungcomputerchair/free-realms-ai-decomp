// addr: 0x00d33270
// name: ClientServerCrypto_CryptoBaseApi_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __thiscall
ClientServerCrypto_CryptoBaseApi_ctor
          (undefined4 *param_1,void *param_2,void *param_3,void *param_4,void *param_5,void *param_6
          ,void *param_7)

{
                    /* Constructs ClientServerCrypto::CryptoBaseApi by calling BaseApi_ctor with
                       crypto enabled, clearing crypto state fields, and installing CryptoBaseApi
                       vtables. Evidence is the existing symbol name and
                       ClientServerCrypto::CryptoBaseApi::vftable assignments. */
  ClientServerCore_BaseApi_ctor(param_1,param_2,param_3,param_4,param_5,param_6,param_7,(void *)0x1)
  ;
  param_1[0x2fa] = 0;
  *(undefined1 *)(param_1 + 0x2fb) = 0;
  *param_1 = ClientServerCrypto::CryptoBaseApi::vftable;
  param_1[0x30] = ClientServerCrypto::CryptoBaseApi::vftable;
  param_1[0x31] = ClientServerCrypto::CryptoBaseApi::vftable;
  return param_1;
}

