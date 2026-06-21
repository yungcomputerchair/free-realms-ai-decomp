// addr: 0x00803480
// name: AnimationBinding_setOwnerDirty
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void AnimationBinding_setOwnerDirty(void * this, void * owner) */

void __thiscall AnimationBinding_setOwnerDirty(void *this,void *owner)

{
                    /* Sets a dirty byte at owner+0x838 and stores the owner at +0x64 when the owner
                       changes and is non-null. */
  if ((owner != (void *)0x0) && (owner != *(void **)((int)this + 100))) {
    *(undefined1 *)((int)owner + 0x838) = 1;
    *(void **)((int)this + 100) = owner;
  }
  return;
}

