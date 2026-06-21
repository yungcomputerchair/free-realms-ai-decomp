// addr: 0x00835580
// name: FUN_00835580
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall FUN_00835580(int *param_1,int *param_2)

{
  int *piVar1;
  
                    /* Updates an owned/parent pointer at offset 0x18: detaches the previous child
                       via virtual callback 0x14 and attaches the new child via virtual callback 8.
                       No class evidence, so left unnamed. */
  piVar1 = (int *)param_1[6];
  if (piVar1 != param_2) {
    if (piVar1 != (int *)0x0) {
      (**(code **)(*param_1 + 0x14))(piVar1);
    }
    param_1[6] = (int)param_2;
    (**(code **)(*param_2 + 8))(param_1);
  }
  return;
}

