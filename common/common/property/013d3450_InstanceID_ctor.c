// addr: 0x013d3450
// name: InstanceID_ctor
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * InstanceID_ctor(void * this, int persistentId, int high, int low) */

void * __thiscall InstanceID_ctor(void *this,int persistentId,int high,int low)

{
                    /* Constructs an InstanceID/PersistentComponent object by installing
                       PersistentBase, PersistentComponent, then InstanceID vftables and storing
                       three constructor arguments into fields +4,+8,+0xc. Evidence is the explicit
                       vftable sequence ending with InstanceID::vftable. */
  *(undefined ***)this = PersistentBase::vftable;
  *(undefined ***)this = PersistentComponent::vftable;
  *(int *)((int)this + 4) = persistentId;
  *(undefined ***)this = InstanceID::vftable;
  *(int *)((int)this + 8) = high;
  *(int *)((int)this + 0xc) = low;
  return this;
}

