// addr: 0x00d04600
// name: FUN_00d04600
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall
FUN_00d04600(int param_1,int param_2,int param_3,int param_4,int param_5,undefined4 param_6)

{
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
                    /* Builds a rectangle from x/y/width/height arguments and forwards it with a
                       payload to a renderer/interface vtable method at offset 0x44. No class
                       evidence, so left unnamed. */
  local_10 = param_2;
  local_8 = param_2 + param_4;
  local_c = param_3;
  local_4 = param_3 + param_5;
  (**(code **)(**(int **)(param_1 + 8) + 0x44))(param_6,&local_10);
  return;
}

