// addr: 0x0153b426
// name: FUN_0153b426
// subsystem: common/game/match
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int FUN_0153b426(int param_1,int param_2)

{
  int iVar1;
  
                    /* Small signed integer division helper returning param_1 / param_2 with a
                       negative-dividend remainder adjustment branch. No class or match-domain
                       evidence is present. */
  iVar1 = param_1 / param_2;
  if ((param_1 < 0) && (0 < param_1 % param_2)) {
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}

