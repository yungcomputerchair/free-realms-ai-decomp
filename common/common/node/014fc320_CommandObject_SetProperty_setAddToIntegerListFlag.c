// addr: 0x014fc320
// name: CommandObject_SetProperty_setAddToIntegerListFlag
// subsystem: common/common/node
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CommandObject_SetProperty_setAddToIntegerListFlag(void * this, bool
   enabled_) */

void __thiscall CommandObject_SetProperty_setAddToIntegerListFlag(void *this,bool enabled_)

{
                    /* Sets the byte flag at offset 0x134 on a SetProperty command object. In
                       ActionNode.cpp it is called immediately after constructing
                       CommandObject_SetProperty for the 'Add to Integer List' action. */
  *(bool *)((int)this + 0x134) = enabled_;
  return;
}

