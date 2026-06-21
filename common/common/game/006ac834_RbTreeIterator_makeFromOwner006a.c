// addr: 0x006ac834
// name: RbTreeIterator_makeFromOwner006a
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __thiscall RbTreeIterator_makeFromOwner006a(int param_1,undefined4 param_2)

{
                    /* Adapter that initializes a 006a tree iterator from this object stored owner
                       and returns the caller-provided value. */
  RbTreeIterator_ctorFromNode_006a(**(undefined4 **)(param_1 + 4),param_1);
  return param_2;
}

