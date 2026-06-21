// addr: 0x005f5369
// name: LexerDfa_collectReachableStates
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void LexerDfa_collectReachableStates(void) */

void LexerDfa_collectReachableStates(void)

{
  void *this;
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  void *in_stack_00000004;
  int local_10;
  uint local_c;
  uint local_8;
  
                    /* Scans DFA/vector state tables and appends state ids that are referenced by
                       transition vectors but not already present in the DWORD state vector. */
  this = in_stack_00000004;
  local_c = 0;
  iVar1 = StdVectorDword_size(in_stack_00000004);
  if (iVar1 != 0) {
    do {
      piVar2 = (int *)StdVectorDword_at_005db38b(this,local_c);
      iVar1 = *piVar2;
      local_8 = 0;
      iVar3 = StdVector_size((void *)(iVar1 + 8));
      if (iVar3 != 0) {
        do {
          piVar2 = StdVector_atElementPtr4((void *)(iVar1 + 8),local_8);
          if (*piVar2 == 0) {
            piVar2 = (int *)StdVectorDword_at_005db38b((void *)(iVar1 + 0x18),local_8);
            iVar3 = *piVar2;
            in_stack_00000004 = (void *)0x0;
            local_10 = iVar3;
            iVar4 = StdVectorDword_size(this);
            if (iVar4 != 0) {
              do {
                piVar2 = (int *)StdVectorDword_at_005db38b(this,(uint)in_stack_00000004);
                if (iVar3 == *piVar2) break;
                in_stack_00000004 = (void *)((int)in_stack_00000004 + 1);
                uVar5 = StdVectorDword_size(this);
              } while (in_stack_00000004 < uVar5);
            }
            uVar5 = StdVectorDword_size(this);
            if (in_stack_00000004 == (void *)uVar5) {
              StdVectorDword_pushBack(this,(uint)&local_10);
            }
          }
          local_8 = local_8 + 1;
          uVar5 = StdVector_size((void *)(iVar1 + 8));
        } while (local_8 < uVar5);
      }
      local_c = local_c + 1;
      uVar5 = StdVectorDword_size(this);
    } while (local_c < uVar5);
  }
  return;
}

