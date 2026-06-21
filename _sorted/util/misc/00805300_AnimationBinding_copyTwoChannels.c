// addr: 0x00805300
// name: AnimationBinding_copyTwoChannels
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * AnimationBinding_copyTwoChannels(void * this, void * src) */

void * __thiscall AnimationBinding_copyTwoChannels(void *this,void *src)

{
                    /* Copies two channel subobjects from offsets 0x00 and 0x40 of the source into
                       this object's +0x30/+0x70 areas and copies the source +0x80 field. */
  FUN_00804950(src);
  *(undefined4 *)((int)this + 0x30) = *(undefined4 *)((int)src + 0x30);
  FUN_00804950((int)src + 0x40);
  *(undefined4 *)((int)this + 0x70) = *(undefined4 *)((int)src + 0x70);
  *(undefined4 *)((int)this + 0x80) = *(undefined4 *)((int)src + 0x80);
  return this;
}

