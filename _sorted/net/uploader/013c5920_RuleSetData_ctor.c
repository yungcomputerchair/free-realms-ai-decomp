// addr: 0x013c5920
// name: RuleSetData_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * RuleSetData_ctor(void * this) */

void * __fastcall RuleSetData_ctor(void *this)

{
                    /* Constructs RuleSetData through PersistentBase/PersistentComponent and clears
                       two fields. Vtable symbols directly identify the class; likely outside
                       uploader. */
  *(undefined ***)this = PersistentBase::vftable;
  *(undefined ***)this = PersistentComponent::vftable;
  *(undefined ***)this = RuleSetData::vftable;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return this;
}

