// addr: 0x01443ca0
// name: FUN_01443ca0
// subsystem: common/networking/login_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * FUN_01443ca0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                   undefined4 param_5)

{
  void *pvVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* Unidentified helper; no strong strings or named neighbors in sidecar context.
                        */
  local_8 = 0xffffffff;
  puStack_c = &LAB_01699331;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  pvVar1 = Mem_Alloc(0x18);
  local_8 = 1;
  if (pvVar1 != (void *)0x0) {
    FUN_01443810(param_1,param_2,param_3,param_4,param_5);
  }
  ExceptionList = local_10;
  return pvVar1;
}

