// addr: 0x00805340
// name: FUN_00805340
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int __thiscall FUN_00805340(int param_1,int param_2)

{
                    /* Copies a composite 0x64-byte value by invoking the same subobject copy helper
                       for two 0x30-byte chunks and copying the trailing field at 0x60. No
                       class/file evidence, so left unnamed. */
  FUN_00804950(param_2);
  FUN_00804950(param_2 + 0x30);
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x60);
  return param_1;
}

