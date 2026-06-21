// addr: 0x008049c0
// name: AnimationKey_differsTransform4
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int AnimationKey_differsTransform4(void * this, void * other) */

int __thiscall AnimationKey_differsTransform4(void *this,void *other)

{
  undefined1 auVar1 [16];
  int iVar2;
  
                    /* Compares two records by pointer/id at +0x10 and four floats at +0x20..+0x2c;
                       returns 0 when equal and 1 when different. */
  if ((*(int *)((int)this + 0x10) == *(int *)((int)other + 0x10)) &&
     (auVar1._4_4_ = -(uint)(*(float *)((int)other + 0x24) == *(float *)((int)this + 0x24)),
     auVar1._0_4_ = -(uint)(*(float *)((int)other + 0x20) == *(float *)((int)this + 0x20)),
     auVar1._8_4_ = -(uint)(*(float *)((int)other + 0x28) == *(float *)((int)this + 0x28)),
     auVar1._12_4_ = -(uint)(*(float *)((int)other + 0x2c) == *(float *)((int)this + 0x2c)),
     iVar2 = movmskps(other,auVar1), iVar2 == 0xf)) {
    return 0;
  }
  return 1;
}

