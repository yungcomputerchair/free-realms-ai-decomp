// addr: 0x014568e0
// name: FUN_014568e0
// subsystem: common/common/node
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __thiscall FUN_014568e0(int param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* Unidentified helper; no strong strings or named neighbors in sidecar context.
                        */
  local_8 = 0xffffffff;
  puStack_c = &LAB_0169c240;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_18 = *(undefined4 **)(param_1 + 4);
  if (*(char *)((int)param_2 + 0x15) == '\0') {
    puVar1 = (undefined4 *)
             FUN_014567e0(local_18,param_3,local_18,param_2 + 3,*(undefined1 *)(param_2 + 5));
    if (*(char *)((int)local_18 + 0x15) != '\0') {
      local_18 = puVar1;
    }
    local_8 = 0;
    uVar2 = FUN_014568e0(*param_2,puVar1);
    *puVar1 = uVar2;
    uVar2 = FUN_014568e0(param_2[2],puVar1);
    puVar1[2] = uVar2;
  }
  ExceptionList = local_10;
  return local_18;
}

