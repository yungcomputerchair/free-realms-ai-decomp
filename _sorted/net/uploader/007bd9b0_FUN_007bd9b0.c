// addr: 0x007bd9b0
// name: FUN_007bd9b0
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __thiscall FUN_007bd9b0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  void *pvVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates a 0x98-byte object and forwards three arguments to its constructor.
                       Class identity is not visible in this wrapper. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0155f9fb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = Mem_Alloc(0x98);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_007cf450(param_1,param_2,param_3);
  }
  ExceptionList = local_c;
  return uVar2;
}

