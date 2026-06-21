// addr: 0x005dc39f
// name: CheckedTreeIterator_ctor_nodeFlag21A
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int * __thiscall CheckedTreeIterator_ctor_nodeFlag21A(int *param_1,int param_2,int param_3)

{
                    /* Constructs a checked tree iterator by storing its container and non-null
                       node. This variant is associated with red-black tree nodes that use flag byte
                       +0x21. */
  *param_1 = 0;
  param_1[1] = param_2;
  if (param_3 == 0) {
    FUN_00d83c2d();
  }
  *param_1 = param_3;
  return param_1;
}

