// addr: 0x00863660
// name: FUN_00863660
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall FUN_00863660(int param_1,char param_2,int param_3)

{
  short sVar1;
  int iVar2;
  short *psVar3;
  short *psVar4;
  undefined1 auStack_28 [4];
  void *pvStack_24;
  undefined4 uStack_14;
  uint uStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Unknown first-party/residual helper with weak evidence: ctx has no __FILE__,
                       RTTI, assert, or distinctive strings sufficient for a safe name. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_01573898;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (*(int *)(param_1 + 0x10) != 0) {
    if (param_2 == '\0') {
      (**(code **)(**(int **)(param_1 + 0x10) + 0xcc))(0,DAT_01b839d8 ^ (uint)&stack0xffffffc8);
      (**(code **)(**(int **)(param_1 + 0x10) + 0xd4))();
    }
    else {
      (**(code **)(**(int **)(param_1 + 0x10) + 0xcc))(2);
      if (param_3 != 0) {
        iVar2 = *(int *)(param_3 + 4);
        do {
          if (iVar2 == 0) {
            ExceptionList = local_c;
            return;
          }
          psVar3 = *(short **)(iVar2 + 4);
          uStack_10 = 7;
          uStack_14 = 0;
          pvStack_24 = (void *)((uint)pvStack_24 & 0xffff0000);
          psVar4 = psVar3;
          do {
            sVar1 = *psVar4;
            psVar4 = psVar4 + 1;
          } while (sVar1 != 0);
          FUN_00862990(psVar3,(int)psVar4 - (int)(psVar3 + 1) >> 1);
          uStack_4 = 0;
          (**(code **)(**(int **)(param_1 + 0x10) + 0xd0))(auStack_28);
          uStack_4 = 0xffffffff;
          if (7 < uStack_10) {
                    /* WARNING: Subroutine does not return */
            _free(pvStack_24);
          }
          iVar2 = *(int *)(iVar2 + 0x10);
          pvStack_24 = (void *)((uint)pvStack_24 & 0xffff0000);
        } while (iVar2 != 0);
      }
    }
  }
  ExceptionList = local_c;
  return;
}

