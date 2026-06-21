// addr: 0x005e4529
// name: RbTreeIterator_makeFromOwnerDc39f
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __thiscall RbTreeIterator_makeFromOwnerDc39f(int param_1,undefined4 param_2)

{
                    /* Adapter that constructs/updates a tree iterator from the owner stored in this
                       object and then returns the caller-supplied value. */
  CheckedTreeIterator_ctor_nodeFlag21A(**(undefined4 **)(param_1 + 4),param_1);
  return param_2;
}

