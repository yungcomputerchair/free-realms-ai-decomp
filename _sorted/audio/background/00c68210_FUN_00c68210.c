// addr: 0x00c68210
// name: FUN_00c68210
// subsystem: common/audio/background
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void FUN_00c68210(char param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int *local_18;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* Unidentified helper; no strong strings or named neighbors in sidecar context.
                        */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_015ffd03;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00c67f30();
  local_4 = 0;
  do {
    if (local_18 == (int *)0x0) break;
    puVar4 = (undefined4 *)*local_18;
    uVar1 = *puVar4;
    uVar2 = puVar4[2];
    uVar3 = puVar4[1];
    puVar4 = Mem_Alloc(0x18);
    local_4._0_1_ = 1;
    if (puVar4 != (undefined4 *)0x0) {
      puVar4[2] = uVar2;
      *puVar4 = uVar1;
      puVar4[1] = uVar3;
      puVar4[4] = 0;
      *(undefined1 *)(puVar4 + 5) = 0;
      FUN_00c67890();
    }
    local_4 = (uint)local_4._1_3_ << 8;
    if (param_1 != '\0') {
      FUN_00c67410();
    }
    FUN_00c67e90();
    local_18 = (int *)local_18[1];
  } while (local_18 != (int *)0x0);
  local_4 = 0xffffffff;
  FUN_00c67350();
  ExceptionList = local_c;
  return;
}

