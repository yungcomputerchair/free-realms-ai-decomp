// addr: 0x013d3530
// name: InstanceID_assignFrom
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void InstanceID_assignFrom(void * this, void * other) */

void __thiscall InstanceID_assignFrom(void *this,void *other)

{
                    /* Copies the three InstanceID data fields from another instance when source and
                       destination differ. It does not copy the vtable field. */
  if (this != other) {
    *(undefined4 *)((int)this + 4) = *(undefined4 *)((int)other + 4);
    *(undefined4 *)((int)this + 8) = *(undefined4 *)((int)other + 8);
    *(undefined4 *)((int)this + 0xc) = *(undefined4 *)((int)other + 0xc);
  }
  return;
}

