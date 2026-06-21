// addr: 0x01241fc0
// name: FUN_01241fc0
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void FUN_01241fc0(char *param_1)

{
  char cVar1;
  char *pcVar2;
  
                    /* Unknown first-party/residual helper with weak evidence: ctx has no __FILE__,
                       RTTI, assert, or distinctive strings sufficient for a safe name. */
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_01241650(param_1,(int)pcVar2 - (int)(param_1 + 1));
  return;
}

