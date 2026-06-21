// addr: 0x01483170
// name: InstanceSubID_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * InstanceSubID_ctor(void * this) */

void * __fastcall InstanceSubID_ctor(void *this)

{
                    /* Constructs InstanceSubID as a PersistentComponent and clears two fields.
                       Vtable symbols directly identify the class. */
  *(undefined ***)this = PersistentBase::vftable;
  *(undefined ***)this = PersistentComponent::vftable;
  *(undefined ***)this = InstanceSubID::vftable;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return this;
}

