// addr: 0x005fa54f
// name: FUN_005fa54f
// subsystem: common/networking/userdata_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall
FUN_005fa54f(void *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  char cVar1;
  void *first;
  void *this;
  
                    /* Unidentified helper; no strong strings or named neighbors in sidecar context.
                        */
  cVar1 = FUN_005dcfce(&param_5);
  if (cVar1 == '\0') {
    first = (void *)StdVector16_copyAssignRange(param_6,*(undefined4 *)((int)param_1 + 8),param_4);
    StdVector16_destroyRangeThunk(this,first,*(void **)((int)param_1 + 8),param_1);
    *(void **)((int)param_1 + 8) = first;
  }
  param_2[1] = param_4;
  *param_2 = param_3;
  return;
}

