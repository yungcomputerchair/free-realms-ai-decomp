// addr: 0x014381c0
// name: Engine_Filter_dtor
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Engine_Filter_dtor(void * this) */

void __fastcall Engine_Filter_dtor(void *this)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* Destroys Engine::Filter by clearing property object lists and freeing its
                       vector/string members. */
  puStack_8 = &LAB_01697257;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  *(undefined ***)this = Engine::Filter::vftable;
  local_4 = 4;
  PropertyObjectList_clearVectors(this,false);
  Engine_Filter_clearOwnedPointerVector(this);
  ContainerSelection_clearItems(uVar1);
  local_4 = CONCAT31(local_4._1_3_,3);
  if (0xf < *(uint *)((int)this + 0x60)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0x4c));
  }
  *(undefined4 *)((int)this + 0x60) = 0xf;
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined1 *)((int)this + 0x4c) = 0;
  local_4 = CONCAT31(local_4._1_3_,2);
  if (*(void **)((int)this + 0x3c) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0x3c));
  }
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  local_4 = CONCAT31(local_4._1_3_,1);
  if (*(void **)((int)this + 0x28) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0x28));
  }
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  local_4 = (uint)local_4._1_3_ << 8;
  if (*(void **)((int)this + 0x18) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0x18));
  }
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  local_4 = 0xffffffff;
  if (*(void **)((int)this + 8) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 8));
  }
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  ExceptionList = local_c;
  return;
}

