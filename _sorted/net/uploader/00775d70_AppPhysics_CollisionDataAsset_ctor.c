// addr: 0x00775d70
// name: AppPhysics_CollisionDataAsset_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * AppPhysics_CollisionDataAsset_ctor(void * this) */

void * __fastcall AppPhysics_CollisionDataAsset_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs an AppPhysics::CollisionDataAsset by running base initialization,
                       installing the class vtable, and clearing a member at offset 0x28. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01557998;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0071bb80(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  *(undefined ***)this = AppPhysics::CollisionDataAsset::vftable;
  *(undefined4 *)((int)this + 0x28) = 0;
  ExceptionList = local_c;
  return this;
}

