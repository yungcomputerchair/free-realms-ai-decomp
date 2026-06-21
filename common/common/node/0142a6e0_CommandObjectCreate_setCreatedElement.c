// addr: 0x0142a6e0
// name: CommandObjectCreate_setCreatedElement
// subsystem: common/common/node
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CommandObjectCreate_setCreatedElement(void * this, void * createdElement)
    */

void __thiscall CommandObjectCreate_setCreatedElement(void *this,void *createdElement)

{
                    /* Stores a created element/object pointer at offset 0x68 of the create command
                       object. */
  *(void **)((int)this + 0x68) = createdElement;
  return;
}

