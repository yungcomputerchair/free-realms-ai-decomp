// addr: 0x014ff6f0
// name: CommandObject_RemoveProperty_setRemoveResolvedValueFlag
// subsystem: common/common/node
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CommandObject_RemoveProperty_setRemoveResolvedValueFlag(void * this, bool
   enabled_) */

void __thiscall CommandObject_RemoveProperty_setRemoveResolvedValueFlag(void *this,bool enabled_)

{
                    /* Sets the byte flag at offset 0x130 on a RemoveProperty command object.
                       ActionNode.cpp calls it in the alternate Remove Property path after building
                       a CommandObject_RemoveProperty from a resolved value. */
  *(bool *)((int)this + 0x130) = enabled_;
  return;
}

