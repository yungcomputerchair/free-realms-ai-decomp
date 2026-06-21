// addr: 0x008095d0
// name: SkyTextureAsset_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * SkyTextureAsset_ctor(void * this, void * assetManager) */

void * __thiscall SkyTextureAsset_ctor(void *this,void *assetManager)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a SkyTextureAsset, assigning its vtable and storing the provided
                       owner/manager pointer at offset 0x28 while clearing the next field. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01567b88;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0071bb80(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  *(undefined ***)this = SkyTextureAsset::vftable;
  *(void **)((int)this + 0x28) = assetManager;
  *(undefined4 *)((int)this + 0x2c) = 0;
  ExceptionList = local_c;
  return this;
}

