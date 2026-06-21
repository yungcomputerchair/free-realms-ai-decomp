// addr: 0x013d33d0
// name: InstanceID_ctor
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * InstanceID_ctor(void * this, int id_, int type_) */

void * __thiscall InstanceID_ctor(void *this,int id_,int type_)

{
                    /* Constructs an InstanceID through PersistentBase/PersistentComponent base
                       vtables, zeroes one member, then installs InstanceID::vftable and stores two
                       id fields. Class name is explicit in vtable symbols. */
  *(undefined ***)this = PersistentBase::vftable;
  *(undefined ***)this = PersistentComponent::vftable;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined ***)this = InstanceID::vftable;
  *(int *)((int)this + 4) = id_;
  *(int *)((int)this + 0xc) = type_;
  return this;
}

