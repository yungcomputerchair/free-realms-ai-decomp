// addr: 0x00d50610
// name: FUN_00d50610
// subsystem: common/util/xml
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void FUN_00d50610(char *param_1)

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
  FUN_00d53740(param_1,(int)pcVar2 - (int)(param_1 + 1));
  return;
}

