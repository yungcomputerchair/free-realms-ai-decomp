// addr: 0x00d39840
// name: FUN_00d39840
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __thiscall FUN_00d39840(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  void *pvVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Factory allocating a 0xa80-byte object and constructing it with FUN_00d39220.
                       Exact class is unknown. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0161415b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = Mem_Alloc(0xa80);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = GameRuntimeTerrain_ctor(param_1,param_2,param_3);
  }
  ExceptionList = local_c;
  return uVar2;
}

