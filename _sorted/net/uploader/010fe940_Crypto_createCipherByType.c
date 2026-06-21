// addr: 0x010fe940
// name: Crypto_createCipherByType
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * Crypto_createCipherByType(int param_1)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Factory for supported cipher implementations: type 2 creates CCM, type 3
                       creates RC4. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0164e846;
  local_c = ExceptionList;
  if (param_1 == 2) {
    ExceptionList = &local_c;
    pvVar1 = Mem_Alloc(0xb8);
    local_4 = 0;
    if (pvVar1 != (void *)0x0) {
      pvVar1 = Crypto_CipherCCM_ctor(pvVar1);
      ExceptionList = local_c;
      return pvVar1;
    }
  }
  else if (param_1 == 3) {
    ExceptionList = &local_c;
    pvVar1 = Mem_Alloc(0x14);
    local_4 = 1;
    if (pvVar1 != (void *)0x0) {
      pvVar1 = Crypto_CipherRC4_ctor(pvVar1);
      ExceptionList = local_c;
      return pvVar1;
    }
  }
  ExceptionList = local_c;
  return (void *)0x0;
}

