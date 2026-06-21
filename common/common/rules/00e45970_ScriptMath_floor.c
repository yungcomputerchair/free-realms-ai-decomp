// addr: 0x00e45970
// name: ScriptMath_floor
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int ScriptMath_floor(void * scriptState) */

int __cdecl ScriptMath_floor(void *scriptState)

{
  float10 fVar1;
  double dVar2;
  
                    /* Reads one numeric argument from a script state, floors it, pushes the numeric
                       result back, and returns one result. */
  fVar1 = (float10)FUN_00e39cf0(scriptState,1);
  dVar2 = CRT_floor((double)fVar1);
  FUN_00e3aa10(scriptState,dVar2);
  return 1;
}

