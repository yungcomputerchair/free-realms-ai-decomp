// addr: 0x0051f4da
// name: GSemaphore_copyCtor
// subsystem: common/util/synchronization
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * GSemaphore_copyCtor(void * this, void * other) */

void * __thiscall GSemaphore_copyCtor(void *this,void *other)

{
                    /* Copies a GSemaphore by copying the common synchronization base, semaphore
                       state, count fields, embedded mutex/waitable member, and a tail field. It
                       uses the same vtable family as GSemaphore_ctor. */
  GInterface_copyCtor(this,other);
  *(undefined ***)((int)this + 0x2c) = &PTR_LAB_0176f434;
  GSemaphoreState_copyCtor
            ((undefined4 *)((int)this + 0x30),
             (void *)(-(uint)(other != (void *)0x0) & (int)other + 0x30U));
  *(undefined ***)this = &PTR_FUN_017708a4;
  *(undefined ***)((int)this + 0x2c) = &PTR_LAB_0177087c;
  *(undefined4 *)((int)this + 0x30) = &PTR_LAB_01770878;
  *(undefined4 *)((int)this + 0x3c) = *(undefined4 *)((int)other + 0x3c);
  *(undefined4 *)((int)this + 0x40) = *(undefined4 *)((int)other + 0x40);
  GMutex_copyCtor((void *)((int)this + 0x44),(void *)((int)other + 0x44));
  *(undefined4 *)((int)this + 0x84) = *(undefined4 *)((int)other + 0x84);
  return this;
}

