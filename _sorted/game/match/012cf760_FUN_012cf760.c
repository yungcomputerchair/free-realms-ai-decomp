// addr: 0x012cf760
// name: FUN_012cf760
// subsystem: common/game/match
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void clearCompositeContainerFields(int object_) */

void __fastcall clearCompositeContainerFields(int object_)

{
  uint uVar1;
  uint uVar2;
  undefined1 local_8 [8];
  
                    /* Clears several containers owned by an object: two vectors at +0x10/+0x20, a
                       tree/list at +0x34, and another vector at +0x44. */
  uVar1 = *(uint *)(object_ + 0x18);
  if (uVar1 < *(uint *)(object_ + 0x14)) {
    FUN_00d83c2d();
  }
  uVar2 = *(uint *)(object_ + 0x14);
  if (*(uint *)(object_ + 0x18) < uVar2) {
    FUN_00d83c2d();
  }
  FUN_012cef90(local_8,object_ + 0x10,uVar2,object_ + 0x10,uVar1);
  uVar1 = *(uint *)(object_ + 0x28);
  if (uVar1 < *(uint *)(object_ + 0x24)) {
    FUN_00d83c2d();
  }
  uVar2 = *(uint *)(object_ + 0x24);
  if (*(uint *)(object_ + 0x28) < uVar2) {
    FUN_00d83c2d();
  }
  FUN_012cef90(local_8,object_ + 0x20,uVar2,object_ + 0x20,uVar1);
  FUN_012cdff0(*(undefined4 *)(*(int *)(object_ + 0x34) + 4));
  *(int *)(*(int *)(object_ + 0x34) + 4) = *(int *)(object_ + 0x34);
  *(undefined4 *)(object_ + 0x38) = 0;
  *(undefined4 *)*(undefined4 *)(object_ + 0x34) = *(undefined4 *)(object_ + 0x34);
  *(int *)(*(int *)(object_ + 0x34) + 8) = *(int *)(object_ + 0x34);
  *(undefined4 *)(object_ + 0x3c) = 0;
  *(undefined4 *)(object_ + 0x40) = 0;
  uVar1 = *(uint *)(object_ + 0x4c);
  if (uVar1 < *(uint *)(object_ + 0x48)) {
    FUN_00d83c2d();
  }
  uVar2 = *(uint *)(object_ + 0x48);
  if (*(uint *)(object_ + 0x4c) < uVar2) {
    FUN_00d83c2d();
  }
  FUN_0041f5e6(local_8,object_ + 0x44,uVar2,object_ + 0x44,uVar1);
  return;
}

