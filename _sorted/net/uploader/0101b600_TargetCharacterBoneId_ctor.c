// addr: 0x0101b600
// name: TargetCharacterBoneId_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * TargetCharacterBoneId_ctor(void * this, int arg1_, int arg2_, int
   boneId_) */

void * __thiscall TargetCharacterBoneId_ctor(void *this,int arg1_,int arg2_,int boneId_)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a TargetCharacterBoneId by invoking a base/target initializer,
                       installing the TargetCharacterBoneId vtable, and storing the bone id at
                       offset 0x30. Likely outside uploader. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016348d8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0101b4e0();
  *(undefined ***)this = TargetCharacterBoneId::vftable;
  *(int *)((int)this + 0x30) = boneId_;
  ExceptionList = local_c;
  return this;
}

