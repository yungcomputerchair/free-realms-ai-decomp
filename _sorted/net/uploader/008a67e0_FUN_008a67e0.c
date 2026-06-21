// addr: 0x008a67e0
// name: FUN_008a67e0
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void FUN_008a67e0(void * client) */

void __fastcall FUN_008a67e0(void *client)

{
  float scale_;
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates a tiny client helper object, stores it in the client and a global
                       manager slot, then initializes a default float value. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0157e45b;
  local_c = ExceptionList;
  scale_ = (float)(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  ExceptionList = &local_c;
  pvVar1 = Mem_Alloc(4);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = FUN_00979280(pvVar1,client,(int)scale_);
  }
  local_4 = 0xffffffff;
  *(void **)((int)client + 0x64c) = pvVar1;
  *(void **)((int)DAT_01be1090 + 4) = pvVar1;
  Client_setUiScale(DAT_01be1090,0x3f800000,scale_);
  ExceptionList = local_c;
  return;
}

