// addr: 0x007d7eb0
// name: FUN_007d7eb0
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_007d7eb0(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
                    /* Ensures an array of 0x20-byte records is large enough for the requested
                       index, grows capacity if needed, updates size, and default-initializes
                       skipped records. No class evidence, so left unnamed. */
  local_14 = 0xffffffff;
  puStack_18 = &LAB_01562271;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  if (*(int *)(param_1 + 8) <= param_2) {
    iVar5 = param_2 + 1;
    if (*(int *)(param_1 + 0xc) < iVar5) {
      FUN_007d4420(iVar5,0);
    }
    iVar6 = *(int *)(param_1 + 8);
    *(int *)(param_1 + 8) = iVar5;
    if (iVar6 < param_2) {
      iVar5 = iVar6 << 5;
      iVar6 = param_2 - iVar6;
      do {
        puVar4 = (undefined4 *)(*(int *)(param_1 + 4) + iVar5);
        iVar5 = iVar5 + 0x20;
        if (puVar4 != (undefined4 *)0x0) {
          *puVar4 = 0;
          puVar4[1] = 0;
          uVar3 = uRam01cb53dc;
          uVar2 = uRam01cb53d8;
          uVar1 = uRam01cb53d4;
          puVar4[4] = _DAT_01cb53d0;
          puVar4[5] = uVar1;
          puVar4[6] = uVar2;
          puVar4[7] = uVar3;
        }
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
  }
  ExceptionList = local_1c;
  return param_2 * 0x20 + *(int *)(param_1 + 4);
}

