// addr: 0x0108f6d0
// name: FUN_0108f6d0
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __fastcall FUN_0108f6d0(undefined4 *param_1)

{
  void *this;
  undefined4 extraout_EAX;
  undefined4 uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates a 100-byte helper object used by YouTube uploader constructors and
                       stores it in the output slot. Exact class is unknown. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016426db;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this = Mem_Alloc(100);
  local_4 = 0;
  if (this == (void *)0x0) {
    uVar1 = 0;
  }
  else {
    FUN_0108f4e0(this);
    uVar1 = extraout_EAX;
  }
  *param_1 = uVar1;
  ExceptionList = local_c;
  return param_1;
}

