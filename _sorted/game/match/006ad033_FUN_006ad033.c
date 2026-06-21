// addr: 0x006ad033
// name: FUN_006ad033
// subsystem: common/game/match
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __fastcall FUN_006ad033(int param_1)

{
  void *_Memory;
  int iVar1;
  char cVar2;
  uint uVar3;
  int *piVar4;
  uint *puVar5;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
                    /* Maintains a queue/tree of buffered chunks by advancing/removing old blocks
                       once their recorded size is below the current byte window. Evidence is the
                       0x2000/0x2008 block fields, iterator min calculation, and freeing consumed
                       nodes. */
  uVar3 = *(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x18);
  uVar3 = -(uint)(uVar3 != 0) & uVar3;
  FUN_006abd3f(**(undefined4 **)(param_1 + 0x28),param_1 + 0x24);
  local_c = local_14;
  local_8 = local_10;
  FUN_006abd3f(*(undefined4 *)(param_1 + 0x28),param_1 + 0x24);
  cVar2 = FUN_006ab02d(&local_14);
  if (cVar2 == '\0') {
    piVar4 = (int *)FUN_006ab145();
    if (*piVar4 < (int)uVar3) {
      puVar5 = (uint *)FUN_006ab145();
      uVar3 = *puVar5;
    }
  }
  while ((((*(uint *)(*(int *)(param_1 + 0xc) + 0x2000) < uVar3 &&
           (_Memory = *(void **)(param_1 + 0xc), _Memory != *(void **)(param_1 + 0x10))) &&
          (iVar1 = *(int *)((int)_Memory + 0x2008), iVar1 != 0)) &&
         (*(uint *)(iVar1 + 0x2000) <= uVar3))) {
    *(int *)(param_1 + 0xc) = iVar1;
    if (_Memory != (void *)0x0) {
      FUN_006ab01a();
                    /* WARNING: Subroutine does not return */
      _free(_Memory);
    }
  }
  return;
}

