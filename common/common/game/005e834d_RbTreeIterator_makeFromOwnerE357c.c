// addr: 0x005e834d
// name: RbTreeIterator_makeFromOwnerE357c
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __thiscall RbTreeIterator_makeFromOwnerE357c(int param_1,undefined4 param_2)

{
                    /* Adapter that initializes an RB-tree iterator from this object owner field and
                       returns the caller-provided value. */
  RbTreeIterator_ctorFromNode(**(undefined4 **)(param_1 + 4),param_1);
  return param_2;
}

