// addr: 0x013aede0
// name: FUN_013aede0
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * __thiscall FUN_013aede0(int *param_1,void *param_2)

{
  uint uVar1;
  
                    /* Unknown first-party/residual helper with weak evidence: ctx has no __FILE__,
                       RTTI, assert, or distinctive strings sufficient for a safe name. */
  FUN_013c2250(2);
  uVar1 = (**(code **)(*param_1 + 0x18))();
  Serializer_appendInteger(param_2,uVar1);
  uVar1 = (**(code **)(*param_1 + 0x20))();
  Serializer_appendInteger(param_2,uVar1);
  return param_2;
}

