// addr: 0x00cefcf0
// name: FUN_00cefcf0
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void FUN_00cefcf0(int param_1,undefined4 *param_2)

{
  int *piVar1;
  void *this;
  int iVar2;
  undefined4 *puVar3;
  int local_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Processes or dispatches a message/task by allocating a helper object when
                       required, initializing it, and invoking follow-up handlers. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0160fa9b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00cef2f0();
  piVar1 = *(int **)(param_1 + 8) + 1;
  if (*(int **)(param_1 + 0xc) < piVar1) {
    iVar2 = 0;
    *(undefined1 *)(param_1 + 0x10) = 1;
    *(int **)(param_1 + 8) = *(int **)(param_1 + 0xc);
  }
  else {
    iVar2 = **(int **)(param_1 + 8);
    *(int **)(param_1 + 8) = piVar1;
  }
  local_18 = 0;
  if (0 < iVar2) {
    do {
      if (*(char *)(param_1 + 0x10) != '\0') {
        ExceptionList = local_c;
        return;
      }
      this = Mem_Alloc(0xe0);
      puVar3 = (undefined4 *)0x0;
      local_4 = 0;
      if (this != (void *)0x0) {
        puVar3 = init_reward_or_item_record(this,DAT_01bf1ba8,DAT_01bf1bac,0);
      }
      local_4 = 0xffffffff;
      BrokerMyItemAddedPacket_deserialize();
      *puVar3 = param_2[1];
      if (param_2[1] == 0) {
        *param_2 = puVar3;
      }
      else {
        *(undefined4 **)(param_2[1] + 4) = puVar3;
      }
      param_2[2] = param_2[2] + 1;
      local_18 = local_18 + 1;
      param_2[1] = puVar3;
    } while (local_18 < iVar2);
  }
  ExceptionList = local_c;
  return;
}

