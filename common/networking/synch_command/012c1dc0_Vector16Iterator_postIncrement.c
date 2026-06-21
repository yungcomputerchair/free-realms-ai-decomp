// addr: 0x012c1dc0
// name: Vector16Iterator_postIncrement
// subsystem: common/networking/synch_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int * __thiscall Vector16Iterator_postIncrement(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
                    /* Copies the current 16-byte-vector iterator to oldIt, checks bounds, then
                       advances this iterator by one 0x10-byte element. SendInstances uses it as the
                       increment step while walking instance vectors. */
  iVar1 = *param_1;
  iVar2 = param_1[1];
  *param_2 = iVar1;
  param_2[1] = iVar2;
  if (iVar1 == 0) {
    FUN_00d83c2d();
  }
  if (*(uint *)(*param_1 + 8) <= (uint)param_1[1]) {
    FUN_00d83c2d();
  }
  param_1[1] = param_1[1] + 0x10;
  return param_2;
}

