// addr: 0x01357a00
// name: FUN_01357a00
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * find_play_element_in_maps(void * this, int elementId_) */

void * __fastcall find_play_element_in_maps(void *this,int elementId_)

{
  int iVar1;
  int iVar2;
  int local_8;
  int local_4;
  
                    /* Looks up a PlayElement-like pointer by id in two internal maps/lists and
                       returns null if absent. The owning class is not identifiable locally. */
  FUN_013550c0(&local_8,&stack0x00000004);
  iVar2 = local_8;
  iVar1 = *(int *)((int)this + 0xac);
  if ((local_8 == 0) || (local_8 != (int)this + 0xa8)) {
    FUN_00d83c2d();
  }
  if (local_4 != iVar1) {
    if (iVar2 == 0) {
      FUN_00d83c2d();
    }
    if (local_4 == *(int *)(iVar2 + 4)) {
      FUN_00d83c2d();
    }
    return *(void **)(local_4 + 0xc);
  }
  FUN_013550c0(&local_8,&stack0x00000004);
  iVar1 = *(int *)((int)this + 0x84);
  if ((local_8 == 0) || (local_8 != (int)this + 0x80)) {
    FUN_00d83c2d();
  }
  if (local_4 != iVar1) {
    if (local_8 == 0) {
      FUN_00d83c2d();
    }
    if (local_4 == *(int *)(local_8 + 4)) {
      FUN_00d83c2d();
    }
    return *(void **)(local_4 + 0xc);
  }
  return (void *)0x0;
}

