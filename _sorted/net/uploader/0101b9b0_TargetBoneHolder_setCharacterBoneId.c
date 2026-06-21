// addr: 0x0101b9b0
// name: TargetBoneHolder_setCharacterBoneId
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void TargetBoneHolder_setCharacterBoneId(void * this, void * character, void *
   boneId, void * extra) */

void __thiscall
TargetBoneHolder_setCharacterBoneId(void *this,void *character,void *boneId,void *extra)

{
  void *this_00;
  int *piVar1;
  undefined1 *puStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Replaces an owned TargetCharacterBoneId and then invokes a virtual setter at
                       offset 0x34 with the extra argument. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_01634a2b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (*(undefined4 **)((int)this + 4) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)this + 4))();
  }
  this_00 = Mem_Alloc(0x40);
  uStack_4 = 0;
  if (this_00 == (void *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    puStack_10 = &stack0xffffffd8;
    piVar1 = TargetCharacterBoneId_ctor(this_00,(int)character,(int)boneId,0);
  }
  uStack_4 = 0xffffffff;
  *(int **)((int)this + 4) = piVar1;
  (**(code **)(*piVar1 + 0x34))();
  ExceptionList = puStack_10;
  return;
}

