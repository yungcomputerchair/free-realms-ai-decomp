// addr: 0x00cf02a0
// name: FUN_00cf02a0
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


uint FUN_00cf02a0(int param_1,undefined4 *param_2,int param_3,char param_4)

{
  undefined4 *puVar1;
  undefined4 *in_EAX;
  undefined4 *local_14;
  int local_10;
  undefined4 *local_c;
  undefined4 *local_8;
  char local_4;
  undefined1 local_3;
  
                    /* Parses a packet/object from a bounded buffer into an existing object, running
                       base deserialize then reading an additional two-word field and returning
                       success/error. No exact class evidence. */
  if ((param_1 != 0) && (in_EAX = (undefined4 *)0x0, param_2 != (undefined4 *)0x0)) {
    local_14 = param_2;
    local_c = param_2;
    local_8 = (undefined4 *)((int)param_2 + param_3);
    local_10 = param_3;
    local_4 = '\0';
    local_3 = 0;
    FUN_00bef0b0(&local_14);
    puVar1 = *(undefined4 **)(param_1 + 0xc);
    FUN_00cefcf0(&local_14,puVar1 + 2);
    in_EAX = local_c + 2;
    if (local_8 < in_EAX) {
      *puVar1 = 0;
      puVar1[1] = 0;
    }
    else {
      *puVar1 = *local_c;
      puVar1[1] = local_c[1];
      if ((local_4 == '\0') &&
         ((param_4 != '\0' || (local_8 == in_EAX || (int)local_8 - (int)in_EAX < 0)))) {
        return CONCAT31((int3)((uint)in_EAX >> 8),1);
      }
    }
  }
  return (uint)in_EAX & 0xffffff00;
}

