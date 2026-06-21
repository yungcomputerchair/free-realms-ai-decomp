// addr: 0x00804b50
// name: AnimationKey_differsTransform7
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int AnimationKey_differsTransform7(void * this, void * other) */

int __thiscall AnimationKey_differsTransform7(void *this,void *other)

{
  undefined1 auVar1 [16];
  int iVar2;
  
                    /* Compares two records by pointer/id, four floats at +0x20..+0x2c, and three
                       more floats at +0x30..+0x38; returns 0 when equal. */
  if ((((*(int *)((int)this + 0x10) == *(int *)((int)other + 0x10)) &&
       (auVar1._4_4_ = -(uint)(*(float *)((int)other + 0x24) == *(float *)((int)this + 0x24)),
       auVar1._0_4_ = -(uint)(*(float *)((int)other + 0x20) == *(float *)((int)this + 0x20)),
       auVar1._8_4_ = -(uint)(*(float *)((int)other + 0x28) == *(float *)((int)this + 0x28)),
       auVar1._12_4_ = -(uint)(*(float *)((int)other + 0x2c) == *(float *)((int)this + 0x2c)),
       iVar2 = movmskps(*(int *)((int)this + 0x10),auVar1), iVar2 == 0xf)) &&
      (*(float *)((int)this + 0x34) == *(float *)((int)other + 0x34))) &&
     ((*(float *)((int)this + 0x30) == *(float *)((int)other + 0x30) &&
      (*(float *)((int)this + 0x38) == *(float *)((int)other + 0x38))))) {
    return 0;
  }
  return 1;
}

