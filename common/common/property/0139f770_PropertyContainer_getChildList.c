// addr: 0x0139f770
// name: PropertyContainer_getChildList
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * PropertyContainer_getChildList(void * this) */

void * __fastcall PropertyContainer_getChildList(void *this)

{
                    /* Returns the address of a subobject at offset +0x58, likely an embedded
                       child/property list. Evidence is the trivial this+0x58 accessor used by
                       property container and synchronization callers such as
                       SynchronizationCommand_SendInstances_buildInstanceBatch. */
  return (void *)((int)this + 0x58);
}

