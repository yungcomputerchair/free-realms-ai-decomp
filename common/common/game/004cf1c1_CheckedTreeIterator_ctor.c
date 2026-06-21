// addr: 0x004cf1c1
// name: CheckedTreeIterator_ctor
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int * __thiscall CheckedTreeIterator_ctor(int *param_1,int param_2,int param_3)

{
                    /* Constructs a checked tree iterator by storing the owning container and
                       current node, asserting the node is non-null. Generic MSVC container support.
                        */
  *param_1 = 0;
  param_1[1] = param_2;
  if (param_3 == 0) {
    FUN_00d83c2d();
  }
  *param_1 = param_3;
  return param_1;
}

