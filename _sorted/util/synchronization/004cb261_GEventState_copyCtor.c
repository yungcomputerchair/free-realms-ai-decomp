// addr: 0x004cb261
// name: GEventState_copyCtor
// subsystem: common/util/synchronization
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GEventState_copyCtor(void * this, void * other) */

void __thiscall GEventState_copyCtor(void *this,void *other)

{
                    /* Copies two state fields from another embedded state object and installs the
                       GEvent-specific vtable at the end. The vtable is used by GEvent copy
                       construction at 00524ba4. */
  *(undefined ***)this = &PTR_LAB_0175c44c;
  *(undefined4 *)((int)this + 4) = *(undefined4 *)((int)other + 4);
  *(undefined4 *)((int)this + 8) = *(undefined4 *)((int)other + 8);
  *(undefined ***)this = &PTR_LAB_0176f8ec;
  return;
}

