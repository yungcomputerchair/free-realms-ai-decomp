// addr: 0x00cefdf0
// name: FUN_00cefdf0
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall FUN_00cefdf0(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  
                    /* Deserializes a packet/object by invoking the base deserializer then reading
                       an additional two-word field from the bounded stream. No exact class
                       evidence. */
  FUN_00cefcf0(param_2,param_1 + 2);
  puVar1 = *(undefined4 **)(param_2 + 8);
  if (*(undefined4 **)(param_2 + 0xc) < puVar1 + 2) {
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined1 *)(param_2 + 0x10) = 1;
    *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_2 + 0xc);
    return;
  }
  *param_1 = *puVar1;
  param_1[1] = puVar1[1];
  *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 8;
  return;
}

