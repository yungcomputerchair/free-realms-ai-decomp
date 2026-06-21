// addr: 0x00524ba4
// name: GEvent_copyCtor
// subsystem: common/util/synchronization
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * GEvent_copyCtor(void * this, void * other) */

void * __thiscall GEvent_copyCtor(void *this,void *other)

{
                    /* Copies a GEvent by copying the common synchronization base, event state,
                       event flags, embedded waitable member, and a tail field. It uses the same
                       vtable family as GEvent_ctor. */
  GInterface_copyCtor(this,other);
  *(undefined ***)((int)this + 0x2c) = &PTR_LAB_0176f434;
  GEventState_copyCtor
            ((undefined4 *)((int)this + 0x30),
             (void *)(-(uint)(other != (void *)0x0) & (int)other + 0x30U));
  *(undefined ***)this = &PTR_FUN_01770858;
  *(undefined ***)((int)this + 0x2c) = &PTR_LAB_01770830;
  *(undefined4 *)((int)this + 0x30) = &PTR_LAB_0177082c;
  *(undefined1 *)((int)this + 0x3c) = *(undefined1 *)((int)other + 0x3c);
  *(undefined1 *)((int)this + 0x3d) = *(undefined1 *)((int)other + 0x3d);
  GMutex_copyCtor((void *)((int)this + 0x40),(void *)((int)other + 0x40));
  *(undefined4 *)((int)this + 0x80) = *(undefined4 *)((int)other + 0x80);
  return this;
}

